/*
 * XREFs of HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x140500BC4
 * Callers:
 *     HalCancelAdapterChannel @ 0x14050F3F0 (HalCancelAdapterChannel.c)
 *     HalCancelAdapterChannelDmaThin @ 0x140513480 (HalCancelAdapterChannelDmaThin.c)
 *     HalCancelAdapterChannelDmarThin @ 0x140513C70 (HalCancelAdapterChannelDmarThin.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14051540C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpDmaRemoveFromEmergencyLogicalAddressQueue(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rbp
  char v4; // si
  _QWORD **v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD **v8; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  _QWORD *v15; // rdx

  v2 = (volatile signed __int64 *)(a1 + 568);
  v4 = 0;
  v5 = (_QWORD **)(a1 + 576);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  v7 = *v5;
  if ( *v5 != v5 )
  {
    while ( 1 )
    {
      v8 = (_QWORD **)*v7;
      if ( v7 == a2 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v8 == v5 )
        goto LABEL_4;
    }
    v4 = 1;
    v15 = (_QWORD *)v7[1];
    if ( v8[1] != v7 || (_QWORD *)*v15 != v7 )
      __fastfail(3u);
    *v15 = v8;
    v8[1] = v15;
  }
LABEL_4:
  KxReleaseSpinLock(v2);
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
  return v4;
}
