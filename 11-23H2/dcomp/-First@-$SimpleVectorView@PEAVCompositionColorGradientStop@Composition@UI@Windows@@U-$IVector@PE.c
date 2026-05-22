/*
 * XREFs of ?First@?$SimpleVectorView@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@345@@Z @ 0x180173550
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_27120fc5dbca0703f94a59df8470e711_@@QEBAJXZ @ 0x1801731FC (--R_lambda_27120fc5dbca0703f94a59df8470e711_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionColorGradientStop *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::First(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // ebx
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  *a2 = 0LL;
  v2 = *(_DWORD *)(a1 + 32);
  v4[0] = a1 - 16;
  v4[1] = (__int64)&v5;
  if ( v2 >= 0 )
    return (unsigned int)_lambda_27120fc5dbca0703f94a59df8470e711_::operator()(v4);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
