/*
 * XREFs of ??R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z @ 0x180456284
 * Callers:
 *     ??$AtomicUpdate@V_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@V_lambda_5d21d1e0a4387289d9a035c09b198600_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@AEBV_lambda_5d21d1e0a4387289d9a035c09b198600_@@@Z @ 0x180455970 (--$AtomicUpdate@V_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@V_lambda_5d21d1e0a4387289d9a035c09b1.c)
 *     ??R_lambda_a6988e4df8e85096e45cabd6772edee5_@@QEBAJXZ @ 0x1804562D8 (--R_lambda_a6988e4df8e85096e45cabd6772edee5_@@QEBAJXZ.c)
 *     ??$AtomicUpdate@V_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@V_lambda_fb680c64840628c038ffa316ee154016_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@AEBV_lambda_fb680c64840628c038ffa316ee154016_@@@Z @ 0x18046BCD4 (--$AtomicUpdate@V_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@V_lambda_fb680c64840628c038ffa316ee1.c)
 *     ??R_lambda_7cd8e48f1046f9f212bf729a42a2f303_@@QEBAJXZ @ 0x18046F98C (--R_lambda_7cd8e48f1046f9f212bf729a42a2f303_@@QEBAJXZ.c)
 *     ??$AtomicUpdate@V_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@V_lambda_31eb4188a7908574ef45863a494633c2_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@AEBV_lambda_31eb4188a7908574ef45863a494633c2_@@@Z @ 0x1804849C0 (--$AtomicUpdate@V_lambda_bcd0e76ce2dbe9653bfcf27a6de55044_@@V_lambda_31eb4188a7908574ef45863a494.c)
 *     ??R_lambda_603221b9b6c913954c8435c703c54208_@@QEBAJXZ @ 0x180484F14 (--R_lambda_603221b9b6c913954c8435c703c54208_@@QEBAJXZ.c)
 *     ??$AtomicUpdate@V_lambda_60cffcfe8b0715df3af987611c13edce_@@V_lambda_4d0109064d4e478866fb97661f906aa0_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_60cffcfe8b0715df3af987611c13edce_@@AEBV_lambda_4d0109064d4e478866fb97661f906aa0_@@@Z @ 0x180489700 (--$AtomicUpdate@V_lambda_60cffcfe8b0715df3af987611c13edce_@@V_lambda_4d0109064d4e478866fb97661f9.c)
 *     ??R_lambda_e323e37eb6a7c14a55f28542b981c184_@@QEBAJXZ @ 0x18048A2A0 (--R_lambda_e323e37eb6a7c14a55f28542b981c184_@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_60cffcfe8b0715df3af987611c13edce_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
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
