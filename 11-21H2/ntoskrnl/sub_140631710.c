/*
 * XREFs of sub_140631710 @ 0x140631710
 * Callers:
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

__int64 __fastcall sub_140631710(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  int v7; // r8d

  if ( _interlockedbittestandset((volatile signed __int32 *)a2 + 242, 1u) )
    return 259LL;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
          1u) )
    return 3221225473LL;
  *((_QWORD *)a2 + 104) = *a3;
  *((_QWORD *)a2 + 105) = a1;
  v7 = *((_DWORD *)KeGetCurrentPrcb() + 9);
  if ( !*((_QWORD *)a2 + 113) )
    *((_WORD *)a2 + 425) = v7 + 2048;
  if ( KeInsertQueueDpc((PRKDPC)(a2 + 212), a2, 0LL) )
    return 0LL;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
    1u);
  return 3221225626LL;
}
