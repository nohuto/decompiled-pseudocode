/*
 * XREFs of ??$AtomicUpdate@V_lambda_0c4e5ddd49f786f02c33233b2751a781_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_0c4e5ddd49f786f02c33233b2751a781_@@AEBV_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@Z @ 0x1800C4E5C
 * Callers:
 *     ??$Do@V_lambda_b7de046e956a8d246bd279c9048959c3_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@?$InvalidationChecker@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_b7de046e956a8d246bd279c9048959c3_@@AEBV_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@Z @ 0x1800C541C (--$Do@V_lambda_b7de046e956a8d246bd279c9048959c3_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@-.c)
 * Callees:
 *     ??R_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@QEBA@XZ @ 0x1800C7998 (--R_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@QEBA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_0c4e5ddd49f786f02c33233b2751a781_,_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v3 = *a1;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a2 + 64LL)
                                                                           + 128LL))(
           *(_QWORD *)(**(_QWORD **)a2 + 64LL),
           v3,
           **(unsigned int **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24));
    v8 = (unsigned int)v7;
    if ( v7 < 0 )
      break;
    v10 = _InterlockedCompareExchange(a1, v3 + ***(_DWORD ***)(a2 + 24), v3);
    v9 = v3 == v10;
    v3 = v10;
    if ( v9 )
      break;
    _lambda_dbb62ed397e69d7e14de4d1f2ccb6603_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
