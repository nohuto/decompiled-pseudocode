/*
 * XREFs of ?UpdateVisible@VisualTreeIsland@Composition@UI@Windows@@MEAAX_N@Z @ 0x18006D3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::VisualTreeIsland::UpdateVisible(
        Windows::UI::Composition::Visual **this,
        char a2)
{
  float v2; // xmm1_4

  if ( a2 )
    v2 = FLOAT_1_0;
  else
    v2 = 0.0;
  Windows::UI::Composition::Visual::SetOpacity(this[68], v2);
}
