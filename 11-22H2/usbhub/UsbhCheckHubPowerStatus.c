/*
 * XREFs of UsbhCheckHubPowerStatus @ 0x1C00047D4
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C000CE60 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0004A70 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002C09C (UsbhGetHubClassDescriptor.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhCheckHubPowerStatus(__int64 a1)
{
  __int64 v2; // rbp
  void *Pool2; // rsi
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // ecx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  __int64 v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = 0;
  v2 = FdoExt(a1);
  Pool2 = (void *)ExAllocatePool2(64LL, 71LL, 1112885333LL);
  if ( !Pool2 )
  {
    LODWORD(v4) = -1073741670;
    goto LABEL_19;
  }
  v4 = (int)UsbhSyncSendInternalIoctl(a1, 2228243LL, &v13, 0LL);
  Log(a1, 8, 1970303827, v13, v4);
  if ( (int)v4 >= 0 && (*(_DWORD *)(v2 + 4216) & 0xFFFFFFFD) == 0 )
  {
    v12 = v4;
    v5 = 810571602;
    v6 = a1;
LABEL_6:
    Log(v6, 16, v5, 0, v12);
    goto LABEL_19;
  }
  if ( (unsigned __int8)Usb_Disconnected((unsigned int)v4) )
  {
    v12 = v4;
    v6 = a1;
    if ( (v13 & 2) == 0 )
    {
      v5 = 1347900018;
      goto LABEL_6;
    }
    Log(a1, 16, 1347892082, 0, v4);
    UsbhException(a1, 0, 112, v7, 0, v4, 0, usbfile_fdopwr_c, 3869, 0);
  }
  else if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, 16, 1347899937, 0, v4);
    UsbhException(a1, 0, v8 + 110, v8, 0, v4, 0, usbfile_fdopwr_c, 3889, 0);
  }
  else if ( (int)v4 < 0 || (v13 & 1) != 0 )
  {
    LODWORD(v4) = UsbhGetHubClassDescriptor(a1, Pool2);
    Log(a1, 16, 1666209618, 0, (int)v4);
    if ( (v4 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v4) )
      UsbhException(a1, 0, v10 + 109, v10, 0, v4, 0, usbfile_fdopwr_c, 3923, 0);
  }
  else
  {
    LODWORD(v4) = -1073741823;
    Log(a1, 16, 1699764050, 0, -1073741823LL);
    UsbhException(a1, 0, v9 + 111, v9, 0, -1073741823, 0, usbfile_fdopwr_c, 3905, 0);
  }
LABEL_19:
  Log(a1, 16, 1348825714, 0, (int)v4);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v4;
}
