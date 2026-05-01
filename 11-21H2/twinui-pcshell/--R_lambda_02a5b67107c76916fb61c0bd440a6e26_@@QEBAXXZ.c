/*
 * XREFs of ??R_lambda_02a5b67107c76916fb61c0bd440a6e26_@@QEBAXXZ @ 0x18032C870
 * Callers:
 *     ??$AtomicUpdate@V_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x1803251DC (--$AtomicUpdate@V_lambda_17fc2dabd803311acd0a5fc425e8fb04_@@V_lambda_02a5b67107c76916fb61c0bd440.c)
 *     ??$Do@V_lambda_706214702ba8e4e5bf3b0c705a271399_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@?$InvalidationChecker@V?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@HU?$DefaultEqualityPredicate@H@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@H@2345@U?$VectorOptions@H$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_706214702ba8e4e5bf3b0c705a271399_@@AEBV_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@Z @ 0x180325C7C (--$Do@V_lambda_706214702ba8e4e5bf3b0c705a271399_@@V_lambda_02a5b67107c76916fb61c0bd440a6e26_@@@-.c)
 *     ??$AtomicUpdate@V_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@AEBV_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@Z @ 0x1803DB1C8 (--$AtomicUpdate@V_lambda_1f25bd8ee63fa3be7e8e4d81566d165a_@@V_lambda_a3c8e308188640b6b3d4061a762.c)
 *     ??$Do@V_lambda_50d47402265d04ef4954bf0807805341_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@?$InvalidationChecker@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_50d47402265d04ef4954bf0807805341_@@AEBV_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@Z @ 0x1803DB6C0 (--$Do@V_lambda_50d47402265d04ef4954bf0807805341_@@V_lambda_a3c8e308188640b6b3d4061a76232d7c_@@@-.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall _lambda_02a5b67107c76916fb61c0bd440a6e26_::operator()(__int64 a1)
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
      *(_DWORD *)(*v4 + 4 * v2) = 0;
      v2 = (unsigned int)(v2 + 1);
      result = *v1;
    }
    while ( (unsigned int)v2 < **v1 );
  }
  *result = 0;
  return result;
}
