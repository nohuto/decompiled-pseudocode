/*
 * XREFs of ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x140081708
 * Callers:
 *     ??$AtomicUpdate@V_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@V_lambda_0696821e1577ed752ca873eaca1551df_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@AEBV_lambda_0696821e1577ed752ca873eaca1551df_@@@Z @ 0x14007C9F4 (--$AtomicUpdate@V_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@V_lambda_0696821e1577ed752ca873eaca1.c)
 *     ??$AtomicUpdate@V_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@V_lambda_2b4e95c994fbfcf834a48c0377dad5b5_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@AEBV_lambda_2b4e95c994fbfcf834a48c0377dad5b5_@@@Z @ 0x14007CA64 (--$AtomicUpdate@V_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@V_lambda_2b4e95c994fbfcf834a48c0377d.c)
 *     ??$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e68733d78a9cd18cced38060ce28385c_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x14007CAD4 (--$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a1.c)
 *     ??$AtomicUpdate@V_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@V_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@AEBV_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_@@@Z @ 0x14007CB44 (--$AtomicUpdate@V_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@V_lambda_0cfc5fd44ccd4c79b3f4a5312d4.c)
 *     ??R_lambda_2bcda90c2be21ba0d8fba1c4633a033a_@@QEBAJXZ @ 0x1400811D8 (--R_lambda_2bcda90c2be21ba0d8fba1c4633a033a_@@QEBAJXZ.c)
 *     ??R_lambda_5cc34000fb8521ff9e21252917e9b3a0_@@QEBAJXZ @ 0x14008141C (--R_lambda_5cc34000fb8521ff9e21252917e9b3a0_@@QEBAJXZ.c)
 *     ??R_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@QEBAJXZ @ 0x1400816B0 (--R_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@QEBAJXZ.c)
 *     ??R_lambda_ed38f1c9fab6ded12fecd945b1b9e25e_@@QEBAJXZ @ 0x14008180C (--R_lambda_ed38f1c9fab6ded12fecd945b1b9e25e_@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
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
