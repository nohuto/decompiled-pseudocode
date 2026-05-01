/*
 * XREFs of ??R_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@QEBAXXZ @ 0x18032CE04
 * Callers:
 *     ??$AtomicUpdate@V_lambda_f301a8a5f4722f9e385eb363266600ba_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_f301a8a5f4722f9e385eb363266600ba_@@AEBV_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@Z @ 0x18032532C (--$AtomicUpdate@V_lambda_f301a8a5f4722f9e385eb363266600ba_@@V_lambda_87b94cae8472a6af671a98fd44f.c)
 *     ??$Do@V_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@?$InvalidationChecker@V?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@AEBV_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@Z @ 0x180326150 (--$Do@V_lambda_d428f7c8a4b516adeeadefd5633ad28b_@@V_lambda_87b94cae8472a6af671a98fd44ffe4d1_@@@-.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall _lambda_87b94cae8472a6af671a98fd44ffe4d1_::operator()(__int64 a1)
{
  _DWORD **v1; // r8
  __int64 v2; // rdx
  _DWORD *result; // rax
  _QWORD *v4; // r9

  v1 = *(_DWORD ***)a1;
  v2 = 0LL;
  result = **(_DWORD ***)a1;
  if ( *result )
  {
    v4 = *(_QWORD **)(a1 + 8);
    do
    {
      *(_QWORD *)(*v4 + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = *v1;
    }
    while ( (unsigned int)v2 < **v1 );
  }
  *result = 0;
  return result;
}
