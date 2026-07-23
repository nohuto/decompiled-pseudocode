/*
 * XREFs of PopSystemIrpCompletion @ 0x140AA7430
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14028D2E0 (PopFxHandleReportDevicePoweredOn.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFreeIrp @ 0x14028E528 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14028E64C (PopDequeueQuerySetIrp.c)
 *     KeReleaseSemaphore @ 0x1403216C0 (KeReleaseSemaphore.c)
 *     IoFindDeviceThatFailedIrp @ 0x140367F44 (IoFindDeviceThatFailedIrp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxIncrementDeviceSleepCount @ 0x14058AB24 (PopFxIncrementDeviceSleepCount.c)
 *     PopCompleteNotifyTransitionCommon @ 0x14059098C (PopCompleteNotifyTransitionCommon.c)
 *     PopDiagTraceIrpPended @ 0x14059468C (PopDiagTraceIrpPended.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 DeviceThatFailedIrp; // rdi
  __int64 *v5; // r15
  int v6; // ebx
  NTSTATUS Status; // eax
  KIRQL v8; // al
  __int64 v9; // r8
  unsigned __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r8
  int v19; // eax
  int v20; // r14d
  NTSTATUS v21; // eax
  PRKSEMAPHORE *v22; // rbx
  IRP *v24; // [rsp+30h] [rbp-58h] BYREF
  NTSTATUS v25; // [rsp+38h] [rbp-50h]
  int v26; // [rsp+3Ch] [rbp-4Ch]
  _QWORD v27[2]; // [rsp+40h] [rbp-48h] BYREF

  DeviceThatFailedIrp = 0LL;
  v5 = *(__int64 **)(a3 + 216);
  v6 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    v26 = 0;
    v24 = a2;
    v25 = Status;
    v27[1] = 16LL;
    v27[0] = &v24;
    EtwTraceKernelEvent((int)v27, 1, 0x80008000, 4647, 4200450);
  }
  if ( v6 == 1 )
  {
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5 - 18);
    v9 = *(v5 - 10);
    v10 = v8;
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 136) )
      {
        _m_prefetchw((const void *)(v9 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v9 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v9 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5 - 18);
          if ( (_DWORD)KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
              && CurrentIrql <= 0xFu
              && (unsigned __int8)v10 <= 0xFu
              && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v15 = (v14 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v14;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(v10);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v5 - 18);
    if ( (_DWORD)KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v15 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
    }
    __writecr8(v10);
  }
  v20 = a2->IoStatus.Status;
  if ( ((DWORD1(PopCurrentBroadcast) >> 23) & 1) != 0 || v20 >= 0 )
  {
    v21 = 0;
    if ( ((DWORD1(PopCurrentBroadcast) >> 23) & 1) == 0 )
      v21 = a2->IoStatus.Status;
    v20 = v21;
  }
  else
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  }
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v22 = (PRKSEMAPHORE *)qword_140C3CD10;
  if ( (*(_BYTE *)qword_140C3CD10 == 2 || *(_BYTE *)qword_140C3CD10 == 3) && *((int *)qword_140C3CD10 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v5 - 16));
    ObfDereferenceObjectWithTag((PVOID)*(v5 - 16), 0x72496F50u);
  }
  PopCompleteNotifyTransitionCommon((__int64)v22, v5, v20, DeviceThatFailedIrp);
  KeReleaseSemaphore(v22[5], 0, 1, 0);
  return 3221225494LL;
}
