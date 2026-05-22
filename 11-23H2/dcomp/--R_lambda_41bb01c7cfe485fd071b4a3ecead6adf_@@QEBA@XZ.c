/*
 * XREFs of ??R_lambda_41bb01c7cfe485fd071b4a3ecead6adf_@@QEBA@XZ @ 0x1801A07FC
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICompositionShape@Composition@UI@5@PEAI@Z @ 0x1801A0EB0 (-GetMany@-$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U-$IVector@PEAVComp.c)
 * Callees:
 *     ??$Destroy@UICompositionShape@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUICompositionShape@Composition@UI@Windows@@@Z @ 0x1801A0278 (--$Destroy@UICompositionShape@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEA.c)
 */

_DWORD **__fastcall _lambda_41bb01c7cfe485fd071b4a3ecead6adf_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::ICompositionShape>((__int64 *)(*a1[1] + 8 * v2));
      result = (_DWORD **)*a1;
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      v4 = *result;
    }
    while ( (unsigned int)v2 < **result );
  }
  *v4 = 0;
  return result;
}
