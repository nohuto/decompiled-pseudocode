/*
 * XREFs of UsbhFdoDevicePowerState @ 0x1C000AE40
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C001F580 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhEtwLogHubPowerEvent @ 0x1C00096F0 (UsbhEtwLogHubPowerEvent.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C000EB10 (UsbhFdoSetPowerDx_Action.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C0021A28 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0031D74 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003C7C0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhSetFdoPowerState @ 0x1C003C87C (UsbhSetFdoPowerState.c)
 */

NTSTATUS __fastcall UsbhFdoDevicePowerState(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char *DeviceExtension; // rbp
  __int64 v6; // rcx
  unsigned int LowPart; // r15d
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  char *v11; // rbx
  char *v12; // r14
  __int64 v13; // r8
  __int64 v14; // r9
  _IO_STACK_LOCATION *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  KIRQL v21; // dl
  __int64 v22; // r8
  __int64 v23; // r9
  __int16 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  KIRQL v30; // dl

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_30;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v6 = 1986356304;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = a2;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart != 1 )
  {
    v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), a2, File, 1u, 0x20u);
    v9 = v8;
    if ( (v8 & 0xC0000000) == 0xC0000000 )
    {
      a2->IoStatus.Status = v8;
      UsbhPoStartNextPowerIrp_Fdo(a1, a2, 2881LL);
      Log((_DWORD)a1, 16, 1348761121, v9, (__int64)a2);
      IofCompleteRequest(a2, 0);
      return v9;
    }
  }
  v11 = (char *)a1->DeviceExtension;
  if ( !v11 )
LABEL_30:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v11 != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  v12 = v11 + 1384;
  v11[5064] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 632);
  *((_DWORD *)v11 + 356) = *((_DWORD *)v11 + 1043);
  *((_DWORD *)v11 + 357) = 102;
  *((_DWORD *)v11 + 354) = 844055622;
  *((_DWORD *)v11 + 355) = 1937139044;
  *((_QWORD *)v11 + 176) = KeGetCurrentThread();
  *((_QWORD *)v11 + 168) = v11 + 1384;
  if ( LowPart == 1 )
  {
    Log((_DWORD)a1, 16, 1348420656, 0, (__int64)a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) != v24 )
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        23,
        (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
    }
    UsbhEtwLogHubPowerEvent((__int64)a1, (__int64)a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_DISPATCH);
    v25 = FdoExt(a1);
    v26 = ((unsigned __int8)*(_DWORD *)(v25 + 828) + 1) & 7;
    *(_DWORD *)(v25 + 828) = v26;
    v26 *= 32LL;
    *(_DWORD *)(v26 + v25 + 284) = 107;
    *(_DWORD *)(v26 + v25 + 288) = *(_DWORD *)(v25 + 4172);
    *(_QWORD *)(v26 + v25 + 292) = 211LL;
    *(_DWORD *)(v25 + 4172) = 211;
    v27 = FdoExt(a1);
    v28 = *((_QWORD *)v11 + 174);
    v29 = v27;
    FdoExt(v28);
    *((_DWORD *)v12 + 8) = 1734964085;
    v30 = *(_BYTE *)(v29 + 5064);
    *(_QWORD *)(v29 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v29 + 5056), v30);
    return UsbhFdoSetPowerD0_Action(a1, v12, a2);
  }
  else
  {
    if ( LowPart == 2 || LowPart == 3 )
    {
      Log((_DWORD)a1, 16, 1348420728, LowPart, (__int64)a2);
      UsbhEtwLogHubPowerEvent((__int64)a1, (__int64)a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          24,
          (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
          LowPart);
      UsbhSetFdoPowerState(a1, 1LL, 204LL);
      UsbhReleaseFdoPwrLock(a1, v11 + 1384, v22, v23);
    }
    else
    {
      if ( LowPart != 4 )
      {
        UsbhReleaseFdoPwrLock(a1, v11 + 1384, v13, v14);
        UsbhPoStartNextPowerIrp_Fdo(a1, a2, 2945LL);
        v15 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
        *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v15[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v15->Parameters.SetQuota + 6);
        v15[-1].FileObject = v15->FileObject;
        v15[-1].Control = 0;
        return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), a2);
      }
      Log((_DWORD)a1, 16, 1348420728, 4, (__int64)a2);
      UsbhEtwLogHubPowerEvent((__int64)a1, (__int64)a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            25,
            (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids,
            4);
      }
      v16 = FdoExt(a1);
      v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
      *(_DWORD *)(v16 + 828) = v17;
      v17 *= 32LL;
      *(_DWORD *)(v17 + v16 + 284) = 105;
      *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
      *(_QWORD *)(v17 + v16 + 292) = 204LL;
      *(_DWORD *)(v16 + 4172) = 204;
      v18 = FdoExt(a1);
      v19 = *((_QWORD *)v11 + 174);
      v20 = v18;
      FdoExt(v19);
      *((_DWORD *)v12 + 8) = 1734964085;
      v21 = *(_BYTE *)(v20 + 5064);
      *(_QWORD *)(v20 + 1344) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 5056), v21);
    }
    return UsbhFdoSetPowerDx_Action(a1);
  }
}
