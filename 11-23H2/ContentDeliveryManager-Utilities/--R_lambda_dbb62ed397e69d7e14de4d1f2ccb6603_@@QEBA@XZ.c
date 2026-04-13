/*
 * XREFs of ??R_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@QEBA@XZ @ 0x1800C7998
 * Callers:
 *     ??$AtomicUpdate@V_lambda_0c4e5ddd49f786f02c33233b2751a781_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_0c4e5ddd49f786f02c33233b2751a781_@@AEBV_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@Z @ 0x1800C4E5C (--$AtomicUpdate@V_lambda_0c4e5ddd49f786f02c33233b2751a781_@@V_lambda_dbb62ed397e69d7e14de4d1f2cc.c)
 *     ??$Do@V_lambda_b7de046e956a8d246bd279c9048959c3_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@?$InvalidationChecker@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_b7de046e956a8d246bd279c9048959c3_@@AEBV_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@Z @ 0x1800C541C (--$Do@V_lambda_b7de046e956a8d246bd279c9048959c3_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@-.c)
 * Callees:
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInspectable@@@Z @ 0x1800C4F5C (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInspectable@@@Z.c)
 */

_DWORD **__fastcall _lambda_dbb62ed397e69d7e14de4d1f2ccb6603_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64 *)(*a1[1] + 8 * v2));
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
