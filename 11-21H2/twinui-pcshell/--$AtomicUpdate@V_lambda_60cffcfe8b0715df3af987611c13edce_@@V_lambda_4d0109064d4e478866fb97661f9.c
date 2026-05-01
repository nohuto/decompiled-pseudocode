/*
 * XREFs of ??$AtomicUpdate@V_lambda_60cffcfe8b0715df3af987611c13edce_@@V_lambda_4d0109064d4e478866fb97661f906aa0_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_60cffcfe8b0715df3af987611c13edce_@@AEBV_lambda_4d0109064d4e478866fb97661f906aa0_@@@Z @ 0x180489700
 * Callers:
 *     ??R_lambda_e323e37eb6a7c14a55f28542b981c184_@@QEBAJXZ @ 0x18048A2A0 (--R_lambda_e323e37eb6a7c14a55f28542b981c184_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z @ 0x180456284 (--R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_60cffcfe8b0715df3af987611c13edce_,_lambda_4d0109064d4e478866fb97661f906aa0_>(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  volatile signed __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = _lambda_60cffcfe8b0715df3af987611c13edce_::operator()(a2, v3, &v11);
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
