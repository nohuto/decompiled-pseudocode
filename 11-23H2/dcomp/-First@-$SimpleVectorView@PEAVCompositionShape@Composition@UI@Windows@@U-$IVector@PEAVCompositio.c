/*
 * XREFs of ?First@?$SimpleVectorView@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionShape@Composition@UI@Windows@@@345@@Z @ 0x1801A0BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_8af0a91405f7c24fceac6242ed718e84_@@QEBAJXZ @ 0x1801A08DC (--R_lambda_8af0a91405f7c24fceac6242ed718e84_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::UI::Composition::CompositionShape *,Windows::Foundation::Collections::IVector<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::Composition::CompositionShape *>,Windows::Foundation::Collections::Internal::NoVersionTag,0>::First(
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
    return (unsigned int)_lambda_8af0a91405f7c24fceac6242ed718e84_::operator()(v4);
  else
    RoOriginateError((unsigned int)v2, 0LL);
  return (unsigned int)v2;
}
