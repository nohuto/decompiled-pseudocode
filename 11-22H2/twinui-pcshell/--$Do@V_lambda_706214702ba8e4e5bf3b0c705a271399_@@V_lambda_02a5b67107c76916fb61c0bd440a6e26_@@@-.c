/*
 * XREFs of ??$Do@V_lambda_706214702ba8e4e5bf3b0c705a271399_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_706214702ba8e4e5bf3b0c705a271399_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x1803F34E8
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@HV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAHPEAI@Z @ 0x1803FDE70 (-GetMany@-$SimpleVectorIterator@HV-$Vector@HU-$DefaultEqualityPredicate@H@Internal@Collections@F.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x1803F2A3C (--$AtomicUpdate@V_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@V_lambda_02a5b67107c76916fb61c0bd440.c)
 *     ??R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBA@XZ @ 0x1803F9EF0 (--R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<int>,Windows::Foundation::Collections::Internal::VectorOptions<int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_706214702ba8e4e5bf3b0c705a271399_,_lambda_02a5b67107c76916fb61c0bd440a6e26_>(
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
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_17fc2dabd803311acd0a5fc425e8fb04_,_lambda_02a5b67107c76916fb61c0bd440a6e26_>(
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
        _lambda_02a5b67107c76916fb61c0bd440a6e26_::operator()(a4, v12);
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
