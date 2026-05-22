/*
 * XREFs of ??R_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@QEBAJIPEAI@Z @ 0x180192E88
 * Callers:
 *     ??$AtomicUpdate@V_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@V_lambda_a0cda285280cf77a5f4fdd8a40eba148_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@AEBV_lambda_a0cda285280cf77a5f4fdd8a40eba148_@@@Z @ 0x18018E5A4 (--$AtomicUpdate@V_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@V_lambda_a0cda285280cf77a5f4fdd8a40e.c)
 *     ??R_lambda_f813e42821691754fe37a5d1c3b7107b_@@QEBAJXZ @ 0x180192EDC (--R_lambda_f813e42821691754fe37a5d1c3b7107b_@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  bool **v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rcx

  v3 = *(bool ***)a1;
  ***(_BYTE ***)a1 = 0;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  if ( a2 >= *(_DWORD *)(*v4 + 44) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    **v3 = a2 + 1 < *(_DWORD *)(v5 + 44);
    return 0LL;
  }
}
