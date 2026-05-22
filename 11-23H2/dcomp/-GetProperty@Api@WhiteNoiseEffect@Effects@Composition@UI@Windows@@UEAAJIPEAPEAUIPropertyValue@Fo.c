/*
 * XREFs of ?GetProperty@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIPropertyValue@Foundation@6@@Z @ 0x180146320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Effects::WhiteNoiseEffect::Api::GetProperty(
        Windows::UI::Composition::Effects::WhiteNoiseEffect::Api *this,
        unsigned int a2,
        struct Windows::Foundation::IPropertyValue **a3)
{
  if ( a2 < 2 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(unsigned int,float const *,IInspectable * *),int,float const *>(
             (__int64)this,
             a3);
  RoOriginateErrorW(2147942487LL, 0LL, L"Specified property does not exist.");
  return 2147942487LL;
}
