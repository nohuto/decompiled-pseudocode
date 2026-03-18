/*
 * XREFs of UsbhSshEnableDisable @ 0x1C0058AEC
 * Callers:
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0043C50 (Usbh_FDO_WaitPnpRestart.c)
 *     UsbhSetWmiDataBlock @ 0x1C0049660 (UsbhSetWmiDataBlock.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0058560 (UsbhHubSSH_PnpStart.c)
 *     UsbhPowerCallback @ 0x1C0058810 (UsbhPowerCallback.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhSshDisabled @ 0x1C00589F0 (UsbhSshDisabled.c)
 *     UsbhSshEnabled @ 0x1C0058C10 (UsbhSshEnabled.c)
 */

LONG __fastcall UsbhSshEnableDisable(__int64 a1, int a2)
{
  struct _KEVENT *v4; // rsi
  int Blink; // ecx
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax

  v4 = (struct _KEVENT *)FdoExt(a1);
  KeWaitForSingleObject(&v4[140], Executive, 0, 0, 0LL);
  Blink = (int)v4[136].Header.WaitListHead.Blink;
  if ( Blink <= 0 )
    return KeSetEvent(v4 + 140, 0, 0);
  if ( Blink <= 3 )
  {
    switch ( a2 )
    {
      case 2:
        goto LABEL_13;
      case 3:
LABEL_8:
        v7 = FdoExt(a1);
        UsbhSshDisabled(a1, (__int64)(v7 + 478));
LABEL_14:
        LODWORD(v4[136].Header.WaitListHead.Blink) = a2;
        return KeSetEvent(v4 + 140, 0, 0);
      case 4:
LABEL_13:
        v9 = FdoExt(a1);
        UsbhSshEnabled(a1, v9 + 478);
        goto LABEL_14;
    }
LABEL_7:
    if ( (unsigned int)(a2 - 5) > 1 )
      return KeSetEvent(v4 + 140, 0, 0);
    goto LABEL_8;
  }
  if ( Blink <= 5 )
  {
    if ( a2 == 4 )
    {
      v8 = FdoExt(a1);
      UsbhSshEnabled(a1, v8 + 478);
      LODWORD(v4[136].Header.WaitListHead.Blink) = 4;
      return KeSetEvent(v4 + 140, 0, 0);
    }
    goto LABEL_7;
  }
  if ( Blink == 6 )
  {
    v6 = FdoExt(a1);
    UsbhSshDisabled(a1, (__int64)(v6 + 478));
  }
  return KeSetEvent(v4 + 140, 0, 0);
}
