/*
 * XREFs of UsbhFdoD0PoComplete_Action @ 0x1C0006D20
 * Callers:
 *     <none>
 * Callees:
 *     UsbhAcquireFdoPwrLock @ 0x1C00019E0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhAllocWorkItem @ 0x1C0003C40 (UsbhAllocWorkItem.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000C730 (UsbhEtwLogHubPowerEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003B740 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C003BE4C (UsbhPoStartNextPowerIrp_Fdo.c)
 */

void __fastcall UsbhFdoD0PoComplete_Action(
        _LIST_ENTRY *DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _LIST_ENTRY *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v8; // r15
  __int64 Blink; // r14
  int Status; // r12d
  char v11; // r13
  __int64 v12; // rsi
  KIRQL v13; // al
  int v14; // ecx
  int v15; // ecx
  int v16; // esi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  KIRQL v20; // dl
  unsigned __int8 v21; // si
  int v22; // r9d
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rsi
  void (__fastcall *v25)(_LIST_ENTRY *, __int64, void *, _QWORD, __int64, int); // rax
  int v26; // esi
  int v27; // [rsp+28h] [rbp-50h]
  IRP *Irp; // [rsp+40h] [rbp-38h]
  __int64 v29; // [rsp+98h] [rbp+20h]
  unsigned __int8 IoStatusa; // [rsp+A0h] [rbp+28h]

  v8 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1680896111, (_DWORD)Context, IoStatus->Status);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_fe7d9686e7a73592f5b78ddce8c5363a_Traceguids);
  Blink = (__int64)Context[4].Blink;
  Status = IoStatus->Status;
  Irp = (IRP *)Context[3].Blink;
  v11 = 0;
  Log((_DWORD)DeviceObject, 16, 1685090097, (_DWORD)Context, Blink);
  v12 = FdoExt(DeviceObject);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
  v14 = *(_DWORD *)(v12 + 4172);
  *(_BYTE *)(v12 + 5064) = v13;
  *(_DWORD *)(Blink + 40) = v14;
  *(_DWORD *)(Blink + 44) = 110;
  *(_DWORD *)(Blink + 32) = 844055622;
  *(_DWORD *)(Blink + 36) = 829436004;
  *(_QWORD *)(Blink + 24) = KeGetCurrentThread();
  v15 = (int)DeviceObject;
  *(_QWORD *)(v12 + 1344) = Blink;
  *(_QWORD *)(v8 + 5088) = MEMORY[0xFFFFF78000000014];
  if ( (Status & 0xC0000000) != 0xC0000000 )
  {
    v16 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
    v17 = FdoExt(DeviceObject);
    v18 = ((unsigned __int8)*(_DWORD *)(v17 + 828) + 1) & 7;
    *(_DWORD *)(v17 + 828) = v18;
    v18 *= 32LL;
    *(_DWORD *)(v18 + v17 + 284) = 110;
    *(_DWORD *)(v18 + v17 + 288) = *(_DWORD *)(v17 + 4172);
    *(_DWORD *)(v18 + v17 + 292) = 210;
    *(_DWORD *)(v18 + v17 + 296) = v16;
    *(_DWORD *)(v17 + 4172) = 210;
    *(_DWORD *)(FdoExt(DeviceObject) + 4208) = 1;
    v19 = FdoExt(DeviceObject);
    FdoExt(*(_QWORD *)(Blink + 8));
    *(_DWORD *)(Blink + 32) = 1734964085;
    v20 = *(_BYTE *)(v19 + 5064);
    *(_QWORD *)(v19 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 5056), v20);
    Log((_DWORD)DeviceObject, 16, 1935962161, 0, (__int64)Context);
    v21 = *(_BYTE *)(FdoExt(DeviceObject) + 5268);
    IoStatusa = v21;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        46,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        0);
    Log((_DWORD)DeviceObject, 8, 1632720717, 1769428816, (__int64)Context);
    v23 = UsbhAllocWorkItem(DeviceObject, (_LIST_ENTRY *)UsbhFdoD0Worker_Action, Context, 0, v22, v21);
    v24 = (__int64)v23;
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v23->Blink);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          47,
          (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
          0);
      Log((_DWORD)DeviceObject, 8, 1364479275, 1769428816, v24);
      v29 = *(_QWORD *)(v24 + 40);
      v25 = *(void (__fastcall **)(_LIST_ENTRY *, __int64, void *, _QWORD, __int64, int))(FdoExt(DeviceObject) + 4784);
      if ( v25 )
      {
        LOBYTE(v27) = IoStatusa;
        v25(DeviceObject, v29, &UsbhHubWorker, 0LL, v24, v27);
        v26 = 0;
      }
      else
      {
        v26 = -1073741822;
      }
      if ( (v26 & 0xC0000000) != 0xC0000000 )
      {
        v11 = 1;
        goto LABEL_16;
      }
    }
    *(_QWORD *)(v8 + 5096) = MEMORY[0xFFFFF78000000014];
    UsbhAcquireFdoPwrLock((__int64)DeviceObject, Blink, 132, 846213220);
    v15 = (int)DeviceObject;
  }
  UsbhFdoPower_PowerFailureEntry(v15);
LABEL_16:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    0LL,
    &Context[7].Blink,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  if ( dword_1C006A67C )
  {
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2047LL);
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Irp, 0x20u);
  }
  *(_QWORD *)(v8 + 5080) = MEMORY[0xFFFFF78000000014];
  if ( !v11 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Context, 0x20u);
}
