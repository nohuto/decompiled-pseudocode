/*
 * XREFs of ?get_EdgeId@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801319B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::get_EdgeId(
        HSTRING *this,
        HSTRING *a2)
{
  return WindowsDuplicateString(this[3], a2);
}
