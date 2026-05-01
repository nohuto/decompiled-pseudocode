/*
 * XREFs of ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x18054E8D0
 * Callers:
 *     ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180551D70 (-GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropert.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18013D2EC (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??R_lambda_f0b0058c35c91142d2603957657c1ded_@@QEBAJPEAUIPropertyValueStatics@Foundation@Windows@@@Z @ 0x18054F86C (--R_lambda_f0b0058c35c91142d2603957657c1ded_@@QEBAJPEAUIPropertyValueStatics@Foundation@Windows@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::UsePropertyFactory<_lambda_f0b0058c35c91142d2603957657c1ded_>(
        __int64 a1)
{
  int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v6 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v5, L"Windows.Foundation.PropertyValue", 0x21u, 0x20u);
  v2 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v6,
         &v4);
  if ( v2 >= 0 )
    v2 = _lambda_f0b0058c35c91142d2603957657c1ded_::operator()(a1, v4);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v4);
  return (unsigned int)v2;
}
