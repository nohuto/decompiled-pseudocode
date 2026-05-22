/*
 * XREFs of ?get_Name@Api@CompositionEffectSourceParameter@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18008A910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::CompositionEffectSourceParameter::Api::get_Name(
        HSTRING *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsDuplicateString(this[3], a2);
}
