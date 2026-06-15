/*
 * XREFs of ??$AtomicUpdate@V_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@V_lambda_0696821e1577ed752ca873eaca1551df_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@AEBV_lambda_0696821e1577ed752ca873eaca1551df_@@@Z @ 0x14006FDC4
 * Callers:
 *     ??R_lambda_5cc34000fb8521ff9e21252917e9b3a0_@@QEBAJXZ @ 0x1400742E0 (--R_lambda_5cc34000fb8521ff9e21252917e9b3a0_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x1400745CC (--R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_b7de74e39a92cedb1d54df460ea5fc58_,_lambda_0696821e1577ed752ca873eaca1551df_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
