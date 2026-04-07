/*
 * XREFs of ?GetProperty@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180048BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@KAJAEBV_lambda_f0b0058c35c91142d2603957657c1ded_@@@Z @ 0x180048C0C (--$UsePropertyFactory@V_lambda_f0b0058c35c91142d2603957657c1ded_@@@-$EffectBase@UIGaussianBlurEf.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetProperty(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        int a2,
        struct Windows::Foundation::IPropertyValue **a3)
{
  int v4; // [rsp+20h] [rbp-28h] BYREF
  char *v5; // [rsp+28h] [rbp-20h]
  struct Windows::Foundation::IPropertyValue **v6; // [rsp+30h] [rbp-18h]

  v4 = a2;
  v5 = (char *)this - 24;
  v6 = a3;
  return Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::UsePropertyFactory<_lambda_f0b0058c35c91142d2603957657c1ded_>(&v4);
}
