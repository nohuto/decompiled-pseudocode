/*
 * XREFs of KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints @ 0x1402BE2E0
 * Callers:
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1402BE244 (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsConcurrencyCountWithinIdealProcessorSetBreakpoints(_DWORD *a1, _DWORD *a2)
{
  return *a1 <= *a2 && a1[1] >= *a2;
}
