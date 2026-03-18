/*
 * XREFs of DCompositionShouldDeferToken @ 0x1C009AC90
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldDeferToken@CSynchronizationManager@DirectComposition@@SA_N_K0@Z @ 0x1C009ACA8 (-ShouldDeferToken@CSynchronizationManager@DirectComposition@@SA_N_K0@Z.c)
 */

_BOOL8 __fastcall DCompositionShouldDeferToken(unsigned __int64 a1, unsigned __int64 a2)
{
  return DirectComposition::CSynchronizationManager::ShouldDeferToken(a1, a2);
}
