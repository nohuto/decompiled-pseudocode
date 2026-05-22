/*
 * XREFs of ?QPCToHns@CPresentationManager@@QEAA?AUSystemInterruptTime@@_K@Z @ 0x1801B12D4
 * Callers:
 *     ?Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B1118 (-Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV-$unique_ptr@VC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CPresentationManager::QPCToHns(__int64 a1, _QWORD *a2, __int64 a3)
{
  double v3; // xmm0_8
  double v4; // xmm0_8
  unsigned __int64 v5; // rcx
  double v6; // xmm0_8

  if ( a3 < 0 )
    v3 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
  else
    v3 = (double)(int)a3;
  v4 = v3 / *(double *)(a1 + 176);
  v5 = 0LL;
  v6 = v4 * 10000000.0;
  if ( v6 >= 9.223372036854776e18 )
  {
    v6 = v6 - 9.223372036854776e18;
    if ( v6 < 9.223372036854776e18 )
      v5 = 0x8000000000000000uLL;
  }
  *a2 = v5 + (unsigned int)(int)v6;
  return a2;
}
