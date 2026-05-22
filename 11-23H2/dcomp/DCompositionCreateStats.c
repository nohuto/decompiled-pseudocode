/*
 * XREFs of DCompositionCreateStats @ 0x1801AA070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DCompositionCreateStats(HMODULE **a1)
{
  return CCompFrameStats::Create(a1);
}
