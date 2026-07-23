/*
 * XREFs of MmGetTotalCommitLimit @ 0x14021DBDC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F34 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommitLimit(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * a1) + 17816LL);
}
