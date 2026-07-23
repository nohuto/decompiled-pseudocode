/*
 * XREFs of RunningHash @ 0x140213400
 * Callers:
 *     ComputeEventEntryHash @ 0x14021336C (ComputeEventEntryHash.c)
 *     ComputeFlushPeriod @ 0x1408222AC (ComputeFlushPeriod.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RunningHash(unsigned int *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  int v4; // r9d

  for ( result = 0LL; result < a3; *a1 = (1025 * (*a1 + v4)) ^ ((1025 * (*a1 + v4)) >> 6) )
  {
    v4 = *(unsigned __int8 *)(result + a2);
    ++result;
  }
  return result;
}
