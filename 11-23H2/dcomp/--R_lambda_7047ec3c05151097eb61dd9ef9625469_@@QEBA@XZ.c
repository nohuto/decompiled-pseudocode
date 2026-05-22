/*
 * XREFs of ??R_lambda_7047ec3c05151097eb61dd9ef9625469_@@QEBA@XZ @ 0x180141738
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUISceneComponent@Scenes@Composition@UI@5@PEAI@Z @ 0x180142BE0 (-GetMany@-$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U-$IVector@PEA.c)
 * Callees:
 *     ??$Destroy@UISceneComponent@Scenes@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUISceneComponent@Scenes@Composition@UI@Windows@@@Z @ 0x18014021C (--$Destroy@UISceneComponent@Scenes@Composition@UI@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXP.c)
 */

_DWORD **__fastcall _lambda_7047ec3c05151097eb61dd9ef9625469_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::UI::Composition::Scenes::ISceneComponent>((__int64 *)(*a1[1] + 8 * v2));
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
