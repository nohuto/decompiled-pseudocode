/*
 * XREFs of ?GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010A4A0
 * Callers:
 *     ?GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180064160 (-GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAJPEAPE.c)
 *     ?GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180064180 (-GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAPE.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetRuntimeClassName(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Microsoft.Internal.UI.Composition.Effects.GaussianBlurEffect", 0x3Cu, a2);
}
