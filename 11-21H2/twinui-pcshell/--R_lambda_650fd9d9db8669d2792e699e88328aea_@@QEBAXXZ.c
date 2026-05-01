/*
 * XREFs of ??R_lambda_650fd9d9db8669d2792e699e88328aea_@@QEBAXXZ @ 0x1803C263C
 * Callers:
 *     ??$AtomicUpdate@V_lambda_8bc221d1e74903efadbefeb11b84c6ec_@@V_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_8bc221d1e74903efadbefeb11b84c6ec_@@AEBV_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@Z @ 0x1803C0144 (--$AtomicUpdate@V_lambda_8bc221d1e74903efadbefeb11b84c6ec_@@V_lambda_c8e744e9da80aecdf1a8e385852.c)
 *     ??$Do@V_lambda_3a98c8a7423d4b807e837a325f80122e_@@V_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@?$InvalidationChecker@V?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_3a98c8a7423d4b807e837a325f80122e_@@AEBV_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@Z @ 0x1803C04B0 (--$Do@V_lambda_3a98c8a7423d4b807e837a325f80122e_@@V_lambda_c8e744e9da80aecdf1a8e385852bba04_@@@-.c)
 *     ?GetMany@?$SimpleVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@V?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@25@PEAI@Z @ 0x1803C4CC0 (-GetMany@-$SimpleVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Intern.c)
 * Callees:
 *     ??$Destroy@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Z @ 0x1803C03A4 (--$Destroy@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Interf.c)
 */

_DWORD **__fastcall _lambda_650fd9d9db8669d2792e699e88328aea_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>((__int64 *)(*a1[1] + 8 * v2));
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
