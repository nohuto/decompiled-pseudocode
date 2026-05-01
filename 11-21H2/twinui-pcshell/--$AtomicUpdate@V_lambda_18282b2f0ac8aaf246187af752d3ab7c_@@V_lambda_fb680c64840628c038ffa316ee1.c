/*
 * XREFs of ??$AtomicUpdate@V_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@V_lambda_fb680c64840628c038ffa316ee154016_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@AEBV_lambda_fb680c64840628c038ffa316ee154016_@@@Z @ 0x18046BCD4
 * Callers:
 *     ??R_lambda_7cd8e48f1046f9f212bf729a42a2f303_@@QEBAJXZ @ 0x18046F98C (--R_lambda_7cd8e48f1046f9f212bf729a42a2f303_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z @ 0x180456284 (--R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_18282b2f0ac8aaf246187af752d3ab7c_,_lambda_fb680c64840628c038ffa316ee154016_>(
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
