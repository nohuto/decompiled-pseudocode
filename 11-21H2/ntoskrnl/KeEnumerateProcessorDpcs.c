/*
 * XREFs of KeEnumerateProcessorDpcs @ 0x14056F81C
 * Callers:
 *     DbgkpLkmdSnapGlobals @ 0x1405402EC (DbgkpLkmdSnapGlobals.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateProcessorDpcs(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v7; // rbx
  __int64 v8; // rbp
  _QWORD *i; // rsi
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 result; // rax

  v4 = KiProcessorBlock[a1];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v7 = (KSPIN_LOCK *)(v4 + 13136);
  v8 = 2LL;
  do
  {
    KxAcquireSpinLock(v7);
    for ( i = (_QWORD *)*(v7 - 2); i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(__int64, _QWORD *, __int64))(a3 + 16448))(a3 + 0x4000, i - 1, 64LL);
    KxReleaseSpinLock(v7);
    v7 += 6;
    --v8;
  }
  while ( v8 );
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
