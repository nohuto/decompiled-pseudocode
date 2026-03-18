/*
 * XREFs of EtwpQueueStackWalkDpc @ 0x140631710
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

__int64 __fastcall EtwpQueueStackWalkDpc(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int Number; // r8d

  if ( _interlockedbittestandset((volatile signed __int32 *)a2 + 242, 1u) )
    return 259LL;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
          1u) )
    return 3221225473LL;
  *((_QWORD *)a2 + 104) = *a3;
  *((_QWORD *)a2 + 105) = a1;
  Number = KeGetCurrentPrcb()->Number;
  if ( !*((_QWORD *)a2 + 113) )
    *((_WORD *)a2 + 425) = Number + 2048;
  if ( KeInsertQueueDpc((PRKDPC)(a2 + 212), a2, 0LL) )
    return 0LL;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 137) + 448LL) + 8LL * *a2),
    1u);
  return 3221225626LL;
}
