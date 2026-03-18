/*
 * XREFs of ZwManagePartition @ 0x14041D080
 * Callers:
 *     ExpAddNonMirroredRanges @ 0x140B97DA4 (ExpAddNonMirroredRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManagePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
