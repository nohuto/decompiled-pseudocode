/*
 * XREFs of ??$Do@V_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@?$InvalidationChecker@V?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@AEBV_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@Z @ 0x1803F38F0
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@NV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEANPEAI@Z @ 0x1803FDF00 (-GetMany@-$SimpleVectorIterator@NV-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@F.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_f301a8a5f4722f9e385eb363266600ba_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_f301a8a5f4722f9e385eb363266600ba_@@AEBV_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@Z @ 0x1803F2B94 (--$AtomicUpdate@V_lambda_f301a8a5f4722f9e385eb363266600ba_@@V_lambda_87b94cae8472a6af671a98fd44f.c)
 *     ??R_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@QEBA@XZ @ 0x1803FA1A4 (--R_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_d428f7c8a4b516adeeadefd5633ad28b_,_lambda_87b94cae8472a6af671a98fd44ffe4d1_>(
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
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_f301a8a5f4722f9e385eb363266600ba_,_lambda_87b94cae8472a6af671a98fd44ffe4d1_>(
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
        _lambda_87b94cae8472a6af671a98fd44ffe4d1_::operator()(a4, v12);
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
