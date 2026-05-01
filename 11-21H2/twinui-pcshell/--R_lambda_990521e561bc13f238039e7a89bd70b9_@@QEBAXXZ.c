/*
 * XREFs of ??R_lambda_990521e561bc13f238039e7a89bd70b9_@@QEBAXXZ @ 0x180484FD0
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x1804854B0 (-GetMany@-$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall _lambda_990521e561bc13f238039e7a89bd70b9_::operator()(unsigned int ***a1)
{
  unsigned int **v1; // r8
  unsigned int v2; // edx
  unsigned int *result; // rax
  unsigned int **v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx

  v1 = *a1;
  v2 = 0;
  result = **a1;
  if ( *result )
  {
    v4 = a1[1];
    do
    {
      v5 = 14LL * v2++;
      v6 = (__int64)&(*v4)[v5];
      *(_OWORD *)v6 = 0LL;
      *(_OWORD *)(v6 + 16) = 0LL;
      *(_OWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 48) = 0LL;
      result = *v1;
    }
    while ( v2 < **v1 );
  }
  *result = 0;
  return result;
}
