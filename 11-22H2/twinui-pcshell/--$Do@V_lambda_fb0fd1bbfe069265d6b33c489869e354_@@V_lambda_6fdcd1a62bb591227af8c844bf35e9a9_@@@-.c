/*
 * XREFs of ??$Do@V_lambda_fb0fd1bbfe069265d6b33c489869e354_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@?$InvalidationChecker@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_fb0fd1bbfe069265d6b33c489869e354_@@AEBV_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@Z @ 0x1803F3D00
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x1803FDF90 (-GetMany@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredic.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_da13972fd8f897e5ec530fac9e9574b1_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_da13972fd8f897e5ec530fac9e9574b1_@@AEBV_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@Z @ 0x1803F2AE8 (--$AtomicUpdate@V_lambda_da13972fd8f897e5ec530fac9e9574b1_@@V_lambda_6fdcd1a62bb591227af8c844bf3.c)
 *     ??R_lambda_126f2bb95a9c522f57958bcf46be2931_@@QEBA@XZ @ 0x1803F9FF4 (--R_lambda_126f2bb95a9c522f57958bcf46be2931_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_fb0fd1bbfe069265d6b33c489869e354_,_lambda_6fdcd1a62bb591227af8c844bf35e9a9_>(
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
    v11 = XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_da13972fd8f897e5ec530fac9e9574b1_,_lambda_6fdcd1a62bb591227af8c844bf35e9a9_>(
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
        _lambda_126f2bb95a9c522f57958bcf46be2931_::operator()(a4, v12);
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
