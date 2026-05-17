/*
 * XREFs of RtlpHpVsCalculateChunkRequiredSize @ 0x180071F7C
 * Callers:
 *     RtlpHpVsContextGrowInPlace @ 0x180071CF4 (RtlpHpVsContextGrowInPlace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsCalculateChunkRequiredSize(int a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  if ( a1 != *a2 )
  {
    v2 += 2;
    *a2 = v2;
  }
  return ((unsigned int)(v2 + 15) >> 4) + 1;
}
