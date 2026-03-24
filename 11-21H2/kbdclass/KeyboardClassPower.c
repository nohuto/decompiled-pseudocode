/*
 * XREFs of KeyboardClassPower @ 0x1C0001560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001480 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqsd @ 0x1C0001890 (WPP_RECORDER_SF_qqsd.c)
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0004D9C (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000F4A4 (KeyboardClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall KeyboardClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // rsi
  char v5; // r13
  char v6; // r14
  ULONG Options; // r12d
  __int64 LowPart; // rbx
  int v9; // r8d
  int v10; // r9d
  UCHAR MinorFunction; // al
  const char *v12; // rax
  NTSTATUS v13; // ebp
  struct _IO_STACK_LOCATION *v15; // rax
  struct _IO_STACK_LOCATION *v16; // rax
  char v17; // bl
  KIRQL v18; // al
  POWER_STATE v19; // r8d
  NTSTATUS v20; // ebx
  KIRQL v21; // al
  KIRQL v22; // al
  KIRQL v23; // al
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]
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
        goto LABEL_13;
      if ( (int)LowPart < 5 && (int)LowPart > *(_DWORD *)(v4 + 288) )
      {
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( *(_QWORD *)(v4 + 296) && !*(_BYTE *)(v4 + 304) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v21);
          v13 = -1073741101;
          goto LABEL_26;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v21);
      }
      v13 = 0;
LABEL_26:
      a2->IoStatus.Status = v13;
      v17 = 0;
      goto LABEL_27;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 5u, 0x61u, RemlockSize);
    v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
    if ( *(_QWORD *)(v4 + 296) )
    {
      *(_QWORD *)(v4 + 312) = a2;
    }
    else
    {
      *(_QWORD *)(v4 + 296) = a2;
      *(_BYTE *)(v4 + 304) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 320), 0) - 1) > 1 )
      {
        v13 = 0;
        v17 = 1;
LABEL_50:
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v22);
        v6 = v17;
LABEL_27:
        if ( v13 >= 0 )
        {
          if ( !v17 )
            goto LABEL_13;
          goto LABEL_21;
        }
        goto LABEL_55;
      }
    }
    v17 = 0;
    v13 = -1073741436;
    goto LABEL_50;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = "S";
    if ( Options )
      v12 = "D";
    WPP_RECORDER_SF_qqsd(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)"D",
      v9,
      v10,
      RemlockSize,
      v5,
      (char)a2,
      (__int64)v12,
      LowPart - 1);
  }
  if ( Options )
  {
    if ( Options != 1 )
      goto LABEL_13;
    a2->IoStatus.Status = 0;
    if ( *(_DWORD *)(v4 + 188) < (int)LowPart )
    {
      PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
      *(_DWORD *)(v4 + 188) = LowPart;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(v4 + 188) <= (int)LowPart )
    {
LABEL_13:
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v13 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      goto LABEL_14;
    }
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v4 + 192) >= (int)LowPart )
  {
    if ( *(_DWORD *)(v4 + 192) <= (int)LowPart )
    {
      if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 284) > 1 && *(int *)(v4 + 288) > 1 )
      {
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( !*(_QWORD *)(v4 + 296) || *(_BYTE *)(v4 + 304) )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23);
          if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v4) )
            KeyboardClassCreateWaitWakeIrp((PVOID)v4);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23);
        }
      }
      a2->IoStatus.Status = 0;
      goto LABEL_13;
    }
    a2->IoStatus.Status = 0;
LABEL_21:
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
    v15 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
    *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v15[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v15->Parameters.SetQuota + 6);
    v15[-1].FileObject = v15->FileObject;
    v15[-1].Control = 0;
    v16 = a2->Tail.Overlay.CurrentStackLocation;
    v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KeyboardClassPowerComplete;
    v16[-1].Context = 0LL;
    v16[-1].Control = -32;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
    v13 = 259;
    goto LABEL_14;
  }
  v13 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v13 >= 0 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
    if ( !*(_QWORD *)(v4 + 296) || *(_BYTE *)(v4 + 304) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v18);
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v18);
      if ( (int)LowPart < 5 )
      {
        v19.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 264);
        goto LABEL_35;
      }
    }
    v19.SystemState = PowerSystemSleeping3;
LABEL_35:
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    v20 = PoRequestPowerIrp(
            *(PDEVICE_OBJECT *)v4,
            2u,
            v19,
            (PREQUEST_POWER_COMPLETE)KeyboardClassPoRequestComplete,
            a2,
            0LL);
    if ( v20 < 0 )
    {
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
      PoStartNextPowerIrp(a2);
      a2->IoStatus.Status = v20;
      IofCompleteRequest(a2, 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
      return 259LL;
    }
    v13 = 259;
    goto LABEL_15;
  }
LABEL_55:
  a2->IoStatus.Status = v13;
  PoStartNextPowerIrp(a2);
  IofCompleteRequest(a2, 0);
LABEL_14:
  if ( v6 )
LABEL_15:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return (unsigned int)v13;
}
