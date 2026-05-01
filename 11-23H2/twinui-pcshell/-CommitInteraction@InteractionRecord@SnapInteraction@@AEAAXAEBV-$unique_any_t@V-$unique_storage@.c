/*
 * XREFs of ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D174
 * Callers:
 *     ?IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x1800309A8 (-IsActive@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x180030F88 (-IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z.c)
 *     ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x18009D100 (--1InteractionRecord@SnapInteraction@@QEAA@XZ.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x18066FF94 (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1803A45A8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall SnapInteraction::InteractionRecord::CommitInteraction(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  if ( *(_BYTE *)(a1 + 24) )
  {
    std::chrono::steady_clock::now(&v5);
    if ( !*(_BYTE *)(a1 + 24) )
      std::_Throw_bad_optional_access();
    result = v5;
    *(_QWORD *)(a1 + 32) += v5 - *(_QWORD *)(a1 + 16);
    v4 = *(_BYTE *)(a1 + 24) == 0;
    *(_QWORD *)(a1 + 16) = result;
    if ( v4 )
      *(_BYTE *)(a1 + 24) = 1;
  }
  return result;
}
