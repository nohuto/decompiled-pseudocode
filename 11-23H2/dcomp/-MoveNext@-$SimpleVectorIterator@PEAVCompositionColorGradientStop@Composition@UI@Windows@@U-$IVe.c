/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180173E00
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_d182d3414fe79c86c04964364aeaace7_@@QEBAJXZ @ 0x18017337C (--R_lambda_d182d3414fe79c86c04964364aeaace7_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::UI::Composition::CompositionColorGradientStop *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionColorGradientStop *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::MoveNext(
        __int64 a1,
        _BYTE *a2)
{
  int v2; // ebx
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v5; // [rsp+50h] [rbp+8h] BYREF
  _BYTE *v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  *a2 = 0;
  v2 = *(_DWORD *)(a1 + 48);
  v5 = &v6;
  v4[1] = (__int64)&v6;
  v4[2] = (__int64)&v5;
  v4[0] = a1;
  if ( v2 >= 0 )
    return (unsigned int)_lambda_d182d3414fe79c86c04964364aeaace7_::operator()(v4);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
