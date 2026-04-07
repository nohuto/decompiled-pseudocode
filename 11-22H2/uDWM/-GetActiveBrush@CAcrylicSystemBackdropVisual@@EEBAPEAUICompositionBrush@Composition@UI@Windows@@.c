/*
 * XREFs of ?GetActiveBrush@CAcrylicSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x1800A4410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CAcrylicSystemBackdropVisual::GetActiveBrush(
        CAcrylicSystemBackdropVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
  if ( *((_BYTE *)this + 280) )
    return *(struct Windows::UI::Composition::ICompositionBrush **)(v1 + 24);
  else
    return *(struct Windows::UI::Composition::ICompositionBrush **)(v1 + 32);
}
