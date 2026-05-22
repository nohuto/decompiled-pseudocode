/*
 * XREFs of DCompositionSetTransformMode @ 0x180102E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DCompositionSetTransformMode(int a1)
{
  Windows::UI::Composition::Compositor::s_transformMode = a1;
  return 0LL;
}
