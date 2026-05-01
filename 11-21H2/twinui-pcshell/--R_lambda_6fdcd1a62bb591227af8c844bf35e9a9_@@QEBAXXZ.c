/*
 * XREFs of ??R_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@QEBAXXZ @ 0x18032C94C
 * Callers:
 *     ??$AtomicUpdate@V_lambda_da13972fd8f897e5ec530fac9e9574b1_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_da13972fd8f897e5ec530fac9e9574b1_@@AEBV_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@Z @ 0x180325284 (--$AtomicUpdate@V_lambda_da13972fd8f897e5ec530fac9e9574b1_@@V_lambda_6fdcd1a62bb591227af8c844bf3.c)
 *     ??$Do@V_lambda_fb0fd1bbfe069265d6b33c489869e354_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@?$InvalidationChecker@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEBV_lambda_fb0fd1bbfe069265d6b33c489869e354_@@AEBV_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@Z @ 0x180326560 (--$Do@V_lambda_fb0fd1bbfe069265d6b33c489869e354_@@V_lambda_6fdcd1a62bb591227af8c844bf35e9a9_@@@-.c)
 *     ?GetMany@?$SimpleVectorView@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180330C20 (-GetMany@-$SimpleVectorView@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall _lambda_6fdcd1a62bb591227af8c844bf35e9a9_::operator()(__int64 a1)
{
  _DWORD **result; // rax
  __int64 v2; // rbp
  _DWORD *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rbx

  result = *(_DWORD ***)a1;
  v2 = 0LL;
  v4 = **(_DWORD ***)a1;
  if ( *v4 )
  {
    do
    {
      v5 = *(__int64 **)(a1 + 8);
      v6 = *v5;
      WindowsDeleteString(*(HSTRING *)(*v5 + 8 * v2));
      *(_QWORD *)(v6 + 8 * v2) = 0LL;
      result = *(_DWORD ***)a1;
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      v4 = *result;
    }
    while ( (unsigned int)v2 < **result );
  }
  *v4 = 0;
  return result;
}
