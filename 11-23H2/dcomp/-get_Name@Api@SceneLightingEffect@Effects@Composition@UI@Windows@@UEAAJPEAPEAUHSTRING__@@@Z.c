/*
 * XREFs of ?get_Name@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180012D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::get_Name(HSTRING *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsDuplicateString(this[9], a2);
}
