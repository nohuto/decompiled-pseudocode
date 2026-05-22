/*
 * XREFs of ??R_lambda_98fa70a4ebc5bf98e37d565e5dc8e214_@@QEBA@XZ @ 0x180141818
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUISceneNode@Scenes@Composition@UI@5@PEAI@Z @ 0x180142CD0 (-GetMany@-$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U-$IVector@PEAVScen.c)
 * Callees:
 *     ??$Destroy@UISceneNode@Scenes@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUISceneNode@Scenes@Composition@UI@Windows@@@Z @ 0x180140258 (--$Destroy@UISceneNode@Scenes@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEA.c)
 */

_DWORD **__fastcall _lambda_98fa70a4ebc5bf98e37d565e5dc8e214_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::Scenes::ISceneNode>((__int64 *)(*a1[1] + 8 * v2));
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
