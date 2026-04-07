/*
 * XREFs of ?GetActiveBaseColor@CMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ @ 0x180016930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct Windows::UI::Color *__fastcall CMicaSystemBackdropVisual::GetActiveBaseColor(
        CMicaSystemBackdropVisual *this)
{
  const struct Windows::UI::Color *result; // rax

  result = (const struct Windows::UI::Color *)&CMicaSystemBackdropVisual::sc_darkThemeTintColor;
  if ( !*((_BYTE *)this + 280) )
    return (const struct Windows::UI::Color *)&CMicaSystemBackdropVisual::sc_lightThemeTintColor;
  return result;
}
