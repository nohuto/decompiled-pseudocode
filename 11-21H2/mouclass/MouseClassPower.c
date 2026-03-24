/*
 * XREFs of MouseClassPower @ 0x1C00020F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqsd @ 0x1C0001E40 (WPP_RECORDER_SF_qqsd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00025C0 (WPP_RECORDER_SF_qq.c)
 *     MouseClassCheckWaitWakeEnabled @ 0x1C0004A7C (MouseClassCheckWaitWakeEnabled.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000CEC0 (MouseClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall MouseClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // rsi
  char v5; // r13
  char v6; // r14
  ULONG Options; // r12d
  __int64 LowPart; // rbx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  UCHAR MinorFunction; // al
  NTSTATUS v13; // ebp
  KIRQL v14; // al
  POWER_STATE v15; // r8d
  NTSTATUS v16; // ebx
  char v17; // bl
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  KIRQL v21; // al
  KIRQL v22; // al
  KIRQL v23; // al
  int RemlockSize; // [rsp+20h] [rbp-58h]
  NTSTATUS v25; // [rsp+80h] [rbp+8h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  v6 = 1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v4 + 64) )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  v25 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v25 < 0 )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v25;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v25;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction != 2 )
  {
    if ( MinorFunction )
    {
      if ( MinorFunction != 3 )
        goto LABEL_23;
      if ( (int)LowPart < 5 && (int)LowPart > *(_DWORD *)(v4 + 272) )
      {
        v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( *(_QWORD *)(v4 + 280) && !*(_BYTE *)(v4 + 288) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v22);
          v13 = -1073741101;
          goto LABEL_20;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v22);
      }
      v13 = 0;
LABEL_20:
      a2->IoStatus.Status = v13;
      v17 = 0;
      goto LABEL_21;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v9, 5, 91, RemlockSize, v5, (char)a2);
    }
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
    if ( *(_QWORD *)(v4 + 280) )
    {
      *(_QWORD *)(v4 + 296) = a2;
    }
    else
    {
      *(_QWORD *)(v4 + 280) = a2;
      *(_BYTE *)(v4 + 288) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 304), 0) - 1) > 1 )
      {
        v13 = 0;
        v17 = 1;
LABEL_37:
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v21);
        v6 = v17;
LABEL_21:
        if ( v13 < 0 )
          goto LABEL_51;
        if ( !v17 )
          goto LABEL_23;
        goto LABEL_25;
      }
    }
    v17 = 0;
    v13 = -1073741436;
    goto LABEL_37;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqsd((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)"D", v10, v11, RemlockSize);
  if ( Options )
  {
    if ( Options != 1 )
      goto LABEL_23;
    a2->IoStatus.Status = 0;
    if ( *(_DWORD *)(v4 + 172) < (int)LowPart )
    {
      PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
      *(_DWORD *)(v4 + 172) = LowPart;
      goto LABEL_23;
    }
    if ( *(_DWORD *)(v4 + 172) <= (int)LowPart )
    {
LABEL_23:
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v13 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      goto LABEL_26;
    }
LABEL_25:
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
    v18 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v18->MajorFunction;
    *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v18->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v18->Parameters.SetQuota + 6);
    v18[-1].FileObject = v18->FileObject;
    v18[-1].Control = 0;
    v19 = a2->Tail.Overlay.CurrentStackLocation;
    v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)MouseClassPowerComplete;
    v19[-1].Context = 0LL;
    v19[-1].Control = -32;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
    v13 = 259;
    goto LABEL_26;
  }
  if ( *(_DWORD *)(v4 + 176) >= (int)LowPart )
  {
    if ( *(_DWORD *)(v4 + 176) > (int)LowPart )
    {
      a2->IoStatus.Status = 0;
      goto LABEL_25;
    }
    if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 268) > 1 && *(int *)(v4 + 272) > 1 )
    {
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
      if ( !*(_QWORD *)(v4 + 280) || *(_BYTE *)(v4 + 288) )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23);
        if ( (unsigned __int8)MouseClassCheckWaitWakeEnabled(v4) )
          MouseClassCreateWaitWakeIrp((PVOID)v4);
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23);
      }
    }
    a2->IoStatus.Status = 0;
    goto LABEL_23;
  }
  v13 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v13 < 0 )
  {
LABEL_51:
    a2->IoStatus.Status = v13;
    PoStartNextPowerIrp(a2);
    IofCompleteRequest(a2, 0);
LABEL_26:
    if ( !v6 )
      return (unsigned int)v13;
LABEL_27:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
    return (unsigned int)v13;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  if ( !*(_QWORD *)(v4 + 280) || *(_BYTE *)(v4 + 288) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v14);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v14);
    if ( (int)LowPart < 5 )
    {
      v15.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 248);
      goto LABEL_14;
    }
  }
  v15.SystemState = PowerSystemSleeping3;
LABEL_14:
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v16 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)v4, 2u, v15, (PREQUEST_POWER_COMPLETE)MouseClassPoRequestComplete, a2, 0LL);
  if ( v16 >= 0 )
  {
    v13 = 259;
    goto LABEL_27;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v16;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
