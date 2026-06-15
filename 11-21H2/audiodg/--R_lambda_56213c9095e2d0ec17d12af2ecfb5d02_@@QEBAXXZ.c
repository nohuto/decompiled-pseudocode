/*
 * XREFs of ??R_lambda_56213c9095e2d0ec17d12af2ecfb5d02_@@QEBAXXZ @ 0x140074280
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x140077C40 (-GetMany@-$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Strea.c)
 *     ?GetMany@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x140078140 (-GetMany@-$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Streams@S.c)
 * Callees:
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140070150 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 */

_DWORD **__fastcall _lambda_56213c9095e2d0ec17d12af2ecfb5d02_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>((__int64 *)(*a1[1] + 8 * v2));
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
