/*
 * XREFs of ??R_lambda_9f26298b6f58b30aa277a78f5f550748_@@QEBA@XZ @ 0x18017329C
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUICompositionColorGradientStop@Composition@UI@5@PEAI@Z @ 0x180173840 (-GetMany@-$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U-$IVec.c)
 * Callees:
 *     ??$Destroy@UICompositionColorGradientStop@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUICompositionColorGradientStop@Composition@UI@Windows@@@Z @ 0x180172C78 (--$Destroy@UICompositionColorGradientStop@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinR.c)
 */

_DWORD **__fastcall _lambda_9f26298b6f58b30aa277a78f5f550748_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::ICompositionColorGradientStop>((__int64 *)(*a1[1] + 8 * v2));
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
