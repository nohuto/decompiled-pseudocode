/*
 * XREFs of RtlpIsFrameInBounds @ 0x18001EA40
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E1EC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E680 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsFrameInBounds(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
