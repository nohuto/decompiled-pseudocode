/*
 * XREFs of EtwpFinalizePendingApc @ 0x140468894
 * Callers:
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F258 (EtwpCancelPendingStackWalkApcs.c)
 *     EtwpStackWalkApc @ 0x140468DC0 (EtwpStackWalkApc.c)
 *     EtwpCancelStackWalkApc @ 0x1405FFB20 (EtwpCancelStackWalkApc.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259CD0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428EF0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpFinalizePendingApc(unsigned int *a1, __int64 a2)
{
  if ( !*(_BYTE *)(a2 + 136) )
    _interlockedbittestandreset(
      (volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 120LL),
      (*((_WORD *)a1 + 409) & 7) + 24);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 58, (PSLIST_ENTRY)(a2 + 112));
  _InterlockedDecrement((volatile signed __int32 *)a1 + 244);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}
