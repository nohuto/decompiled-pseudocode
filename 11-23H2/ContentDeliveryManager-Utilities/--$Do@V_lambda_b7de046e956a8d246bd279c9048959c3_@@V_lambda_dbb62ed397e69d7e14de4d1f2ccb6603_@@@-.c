/*
 * XREFs of ??$Do@V_lambda_b7de046e956a8d246bd279c9048959c3_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@?$InvalidationChecker@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_b7de046e956a8d246bd279c9048959c3_@@AEBV_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@Z @ 0x1800C541C
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@PEAI@Z @ 0x1800C8A80 (-GetMany@-$SimpleVectorIterator@PEAUIInspectable@@V-$Vector@PEAUIInspectable@@U-$DefaultEquality.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_0c4e5ddd49f786f02c33233b2751a781_@@V_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_0c4e5ddd49f786f02c33233b2751a781_@@AEBV_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@@Z @ 0x1800C4E5C (--$AtomicUpdate@V_lambda_0c4e5ddd49f786f02c33233b2751a781_@@V_lambda_dbb62ed397e69d7e14de4d1f2cc.c)
 *     ??R_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@QEBA@XZ @ 0x1800C7998 (--R_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_b7de046e956a8d246bd279c9048959c3_,_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_>(
        unsigned int *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v14[0] = &v15;
    v14[1] = a3[1];
    v14[2] = a3[2];
    v9 = a3[3];
    v10 = a3[4];
    v15 = v8;
    v14[3] = v9;
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_0c4e5ddd49f786f02c33233b2751a781_,_lambda_dbb62ed397e69d7e14de4d1f2ccb6603_>(
            (volatile signed __int32 *)(v8 + 72),
            (__int64)v14,
            v10);
    v4 = v11;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_dbb62ed397e69d7e14de4d1f2ccb6603_::operator()(a4, v12);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
