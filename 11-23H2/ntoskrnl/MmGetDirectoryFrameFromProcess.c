/*
 * XREFs of MmGetDirectoryFrameFromProcess @ 0x1407E9334
 * Callers:
 *     PfpLogApplicationEvent @ 0x1402FA304 (PfpLogApplicationEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetDirectoryFrameFromProcess(__int64 a1)
{
  return *(_QWORD *)(a1 + 40) >> 12;
}
