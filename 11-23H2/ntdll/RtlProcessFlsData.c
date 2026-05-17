/*
 * XREFs of RtlProcessFlsData @ 0x180051710
 * Callers:
 *     LdrShutdownThread @ 0x1800292E0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800514A0 (LdrShutdownProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlProcessFlsData(__int64 a1, char a2)
{
  __int64 v2; // r8

  v2 = a2 & 1 | 2u;
  if ( (a2 & 2) == 0 )
    v2 = a2 & 1;
  return RtlpFlsDataCleanup(a1, a1, v2);
}
