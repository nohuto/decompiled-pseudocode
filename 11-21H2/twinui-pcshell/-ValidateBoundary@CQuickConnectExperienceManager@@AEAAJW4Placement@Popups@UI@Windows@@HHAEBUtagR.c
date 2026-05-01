/*
 * XREFs of ?ValidateBoundary@CQuickConnectExperienceManager@@AEAAJW4Placement@Popups@UI@Windows@@HHAEBUtagRECT@@AEA_N@Z @ 0x18037B920
 * Callers:
 *     ?FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z @ 0x180377A80 (-FinalizeWindowPlacement@CQuickConnectExperienceManager@@AEAAJHHAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CQuickConnectExperienceManager::ValidateBoundary(
        float *a1,
        int a2,
        int a3,
        int a4,
        unsigned int *a5,
        _BYTE *a6)
{
  int v6; // edx
  int v7; // edx
  float v8; // xmm1_4
  __m128i v9; // xmm0
  bool v10; // cf
  float v11; // xmm1_4
  __m128i v12; // xmm0

  *a6 = 0;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      v8 = a1[86] - (float)a3;
      v9 = _mm_cvtsi32_si128(*a5);
      goto LABEL_5;
    }
    if ( v7 != 1 )
    {
      v8 = a1[87] - (float)a4;
      v9 = _mm_cvtsi32_si128(a5[1]);
LABEL_5:
      v10 = v8 < _mm_cvtepi32_ps(v9).m128_f32[0];
      goto LABEL_10;
    }
    v11 = (float)(a1[88] + a1[86]) + (float)a3;
    v12 = _mm_cvtsi32_si128(a5[2]);
  }
  else
  {
    v11 = (float)(a1[89] + a1[87]) + (float)a4;
    v12 = _mm_cvtsi32_si128(a5[3]);
  }
  v10 = _mm_cvtepi32_ps(v12).m128_f32[0] < v11;
LABEL_10:
  if ( !v10 )
    *a6 = 1;
  return 0LL;
}
