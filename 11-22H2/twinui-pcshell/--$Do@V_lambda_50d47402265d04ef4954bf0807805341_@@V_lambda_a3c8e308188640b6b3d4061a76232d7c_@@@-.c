/*
 * XREFs of ??$Do@V_lambda_50d47402265d04ef4954bf0807805341_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@?$InvalidationChecker@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_50d47402265d04ef4954bf0807805341_@@AEBV_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@Z @ 0x1804B7C20
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@IV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAI0@Z @ 0x1804C5110 (-GetMany@-$SimpleVectorIterator@IV-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@F.c)
 * Callees:
 *     ??R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBA@XZ @ 0x1803F9EF0 (--R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBA@XZ.c)
 *     ??$AtomicUpdate@V_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@AEBV_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@Z @ 0x1804B7550 (--$AtomicUpdate@V_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@V_lambda_a3c8e308188640b6b3d4061a762.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_50d47402265d04ef4954bf0807805341_,_lambda_a3c8e308188640b6b3d4061a76232d7c_>(
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
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = *a3;
    v13[0] = &v14;
    v13[1] = a3[1];
    v13[2] = a3[2];
    v9 = a3[3];
    v10 = a3[4];
    v14 = v8;
    v13[3] = v9;
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_,_lambda_a3c8e308188640b6b3d4061a76232d7c_>(
            (volatile signed __int32 *)(v8 + 72),
            (__int64)v13,
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
        _lambda_02a5b67107c76916fb61c0bd440a6e26_::operator()(a4);
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
