/*
 * XREFs of EtwpFinalizePendingApc @ 0x140468C94
 * Callers:
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F4E8 (EtwpCancelPendingStackWalkApcs.c)
 *     EtwpStackWalkApc @ 0x1404691C0 (EtwpStackWalkApc.c)
 *     EtwpCancelStackWalkApc @ 0x140600090 (EtwpCancelStackWalkApc.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259F60 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
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
