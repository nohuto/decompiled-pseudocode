/*
 * XREFs of ?get_Name@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180146380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::get_Name(HSTRING *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsDuplicateString(this[6], a2);
}
