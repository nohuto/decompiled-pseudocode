/*
 * XREFs of ??$AtomicUpdate@V_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@V_lambda_a0cda285280cf77a5f4fdd8a40eba148_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@AEBV_lambda_a0cda285280cf77a5f4fdd8a40eba148_@@@Z @ 0x180161194
 * Callers:
 *     ??R_lambda_f813e42821691754fe37a5d1c3b7107b_@@QEBAJXZ @ 0x180165A88 (--R_lambda_f813e42821691754fe37a5d1c3b7107b_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@QEBAJIPEAI@Z @ 0x180165A34 (--R_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e0774cbc35ab04c06dd6c99a10e6839d_,_lambda_a0cda285280cf77a5f4fdd8a40eba148_>(
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
    v7 = _lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator()(a2, v3, &v11);
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
