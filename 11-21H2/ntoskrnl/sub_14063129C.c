/*
 * XREFs of sub_14063129C @ 0x14063129C
 * Callers:
 *     sub_14024E07C @ 0x14024E07C (sub_14024E07C.c)
 *     sub_140631280 @ 0x140631280 (sub_140631280.c)
 *     sub_140631820 @ 0x140631820 (sub_140631820.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

void __fastcall sub_14063129C(unsigned int *a1, __int64 a2)
{
  if ( !*(_BYTE *)(a2 + 136) )
    _interlockedbittestandreset(
      (volatile signed __int32 *)(*(_QWORD *)(a2 + 8) + 120LL),
      (*((_WORD *)a1 + 409) & 7) + 24);
  ExpInterlockedPushEntrySList((PSLIST_HEADER)a1 + 58, (PSLIST_ENTRY)(a2 + 112));
  _InterlockedDecrement((volatile signed __int32 *)a1 + 243);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 137) + 448LL) + 8LL * *a1),
    1u);
}
