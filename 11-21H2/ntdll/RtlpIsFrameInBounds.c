/*
 * XREFs of RtlpIsFrameInBounds @ 0x180035D50
 * Callers:
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x180036958 (RtlpWalkFrameChain.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsFrameInBounds(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
