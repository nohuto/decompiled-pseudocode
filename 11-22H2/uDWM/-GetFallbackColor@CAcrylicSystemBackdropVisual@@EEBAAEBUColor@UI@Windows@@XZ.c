/*
 * XREFs of ?GetFallbackColor@CAcrylicSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ @ 0x1800A4440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct Windows::UI::Color *__fastcall CAcrylicSystemBackdropVisual::GetFallbackColor(
        CAcrylicSystemBackdropVisual *this)
{
  const struct Windows::UI::Color *result; // rax

  result = (const struct Windows::UI::Color *)&CAcrylicSystemBackdropVisual::sc_darkThemeTintColor;
  if ( !*((_BYTE *)this + 280) )
    return (const struct Windows::UI::Color *)&CAcrylicSystemBackdropVisual::sc_lightThemeTintColor;
  return result;
}
