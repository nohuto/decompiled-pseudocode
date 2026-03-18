/*
 * XREFs of UsbhIoctlGetNodeInformation @ 0x1C0040798
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C002A630 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     memset @ 0x1C0023880 (memset.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C003DE98 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0040FD4 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C0041218 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C00415A8 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeInformation(__int64 a1, PIRP Irp)
{
  _DWORD *v4; // rax
  _IRP *MasterIrp; // r14
  _DWORD *v6; // r15
  unsigned int v7; // r10d
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v14; // [rsp+28h] [rbp-60h]
  char v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A0h] [rbp+18h] BYREF

  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x38u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids);
  v16 = 258;
  v4 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = v4;
  Log(a1, 32, 1768898102, (__int64)Irp, (__int64)MasterIrp);
  memset(MasterIrp, 0, v7);
  v8 = FdoExt(a1);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)Irp, 1430414185, 1);
  if ( !v9 )
  {
    v10 = -1073741670;
LABEL_10:
    if ( !Usb_Disconnected(v10) )
      UsbhException(a1, 0, 91, (int)&v16, 4, v10, 0, usbfile_ioctl_c, 2822, 0);
    goto LABEL_12;
  }
  v10 = UsbhAcquireApiLock(a1, 0xF00D0006, &v15);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 0, 76);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      Log(a1, 32, 1768896100, (__int64)(v6 + 734), *((unsigned __int8 *)v6 + 2938));
      *(_DWORD *)&MasterIrp->Type = 0;
      v10 = 0;
      *(_OWORD *)(&MasterIrp->Size + 1) = *(_OWORD *)v11;
      *(_OWORD *)(&MasterIrp->Flags + 1) = *(_OWORD *)(v11 + 16);
      *(_LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 4) = *(_LIST_ENTRY *)(v11 + 32);
      *(_IO_STATUS_BLOCK *)((char *)&MasterIrp->IoStatus + 4) = *(_IO_STATUS_BLOCK *)(v11 + 48);
      *(_DWORD *)&MasterIrp->Cancel = *(_DWORD *)(v11 + 64);
      LOWORD(MasterIrp->UserIosb) = *(_WORD *)(v11 + 68);
      BYTE2(MasterIrp->IoRingContext) = *(_BYTE *)(v11 + 70);
      BYTE3(MasterIrp->IoRingContext) = v6[758] == 100;
      Irp->IoStatus.Information = 76LL;
      goto LABEL_12;
    }
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 )
    goto LABEL_10;
LABEL_12:
  if ( v15 )
    UsbhReleaseApiLock(a1, 4027383814LL);
  Log(a1, 32, 1768897590, (__int64)Irp, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v14) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x39u,
      (__int64)&WPP_1cc12751aa963e921be10b52612de601_Traceguids,
      v14);
  }
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v12, v9);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v10;
}
