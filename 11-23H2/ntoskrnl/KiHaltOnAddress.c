/*
 * XREFs of KiHaltOnAddress @ 0x140580378
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x1402611B0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1404606E8 (KxWaitForLockOwnerShipWithIrql.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     HalProcessorIdle @ 0x14041AA10 (HalProcessorIdle.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 */

__int64 __fastcall KiHaltOnAddress(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  signed __int64 *v4; // roff
  signed __int64 v5; // rax
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+38h] [rbp-10h]
  int v17; // [rsp+3Ch] [rbp-Ch]

  v17 = 0;
  v16 = 0;
  v14[0] = a1;
  v3 = (a1 >> 5) & 0x7F;
  v14[1] = KeGetCurrentPrcb();
  v4 = &KiHaltOnAddressHashTable[v3];
  _m_prefetchw(v4);
  v5 = *v4;
  v15 = *v4 & 0xFFFFFFFFFFFFFFFCuLL;
  v7 = v5;
  v6 = _InterlockedCompareExchange64(v4, (signed __int64)v14, v5);
  if ( v7 != v6 )
  {
    do
    {
      v8 = v6;
      v15 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
      v6 = _InterlockedCompareExchange64(&KiHaltOnAddressHashTable[v3], (signed __int64)v14, v6);
    }
    while ( v6 != v8 );
  }
  if ( *(_QWORD *)a1 != *a2 )
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[v3], 0LL));
  _disable();
  if ( v16 != 1 )
    HalProcessorIdle();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v11 = *SchedulerAssist;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return 0LL;
}
