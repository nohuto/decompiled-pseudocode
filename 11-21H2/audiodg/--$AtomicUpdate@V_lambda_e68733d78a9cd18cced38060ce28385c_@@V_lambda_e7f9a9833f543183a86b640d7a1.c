/*
 * XREFs of ??$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e68733d78a9cd18cced38060ce28385c_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x14006FEA4
 * Callers:
 *     ??R_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@QEBAJXZ @ 0x140074574 (--R_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@QEBAJXZ.c)
 * Callees:
 *     ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x1400745CC (--R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e68733d78a9cd18cced38060ce28385c_,_lambda_e7f9a9833f543183a86b640d7a18f225_>(
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
