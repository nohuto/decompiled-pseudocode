/*
 * XREFs of ?GetActiveBrush@CMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180014F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CMicaSystemBackdropVisual::GetActiveBrush(
        CMicaSystemBackdropVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
  if ( *((_BYTE *)this + 280) )
    return *(struct Windows::UI::Composition::ICompositionBrush **)(v1 + 8);
  else
    return *(struct Windows::UI::Composition::ICompositionBrush **)(v1 + 16);
}
