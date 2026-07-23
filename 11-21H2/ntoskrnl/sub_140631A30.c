/*
 * XREFs of sub_140631A30 @ 0x140631A30
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 */

void __fastcall sub_140631A30(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        unsigned int *SystemArgument1,
        PVOID SystemArgument2)
{
  sub_1406314E0(*((_QWORD *)SystemArgument1 + 105), 2u, SystemArgument1, 0, (_SLIST_ENTRY **)SystemArgument1 + 104);
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)SystemArgument1 + 137) + 448LL) + 8LL * *SystemArgument1),
    1u);
  _interlockedbittestandreset((volatile signed __int32 *)SystemArgument1 + 242, 1u);
}
