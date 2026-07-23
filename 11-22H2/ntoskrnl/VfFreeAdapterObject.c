/*
 * XREFs of VfFreeAdapterObject @ 0x140AC70E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC5290 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC558C (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140AC9A90 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140AC9E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140ACA158 (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeAdapterObject(int a1, unsigned int a2)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rsi
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(RealDmaAdapter + 8) + 216LL))(RealDmaAdapter, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 176));
    v7 = *(_QWORD **)(AdapterInformationInternal + 160);
    v8 = (__int64)(v7 - 9);
    if ( (_QWORD *)(AdapterInformationInternal + 160) != v7 )
    {
      while ( *(_DWORD *)(v8 + 52) != 1 )
      {
        v8 = *v7 - 72LL;
        v7 = (_QWORD *)*v7;
        if ( (_QWORD *)(AdapterInformationInternal + 160) == v7 )
          goto LABEL_6;
      }
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      if ( a2 == 3 )
      {
        *(_DWORD *)(v8 + 52) = 3;
      }
      else
      {
        v14 = *(_QWORD *)(v8 + 72);
        v15 = *(_QWORD **)(v8 + 80);
        if ( *(_QWORD *)(v14 + 8) != v8 + 72 || *v15 != v8 + 72 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v8 + 48));
        if ( *(_QWORD *)(v8 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v8);
      }
    }
LABEL_6:
    KxReleaseSpinLock((volatile signed __int64 *)(AdapterInformationInternal + 176));
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v6 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
}
