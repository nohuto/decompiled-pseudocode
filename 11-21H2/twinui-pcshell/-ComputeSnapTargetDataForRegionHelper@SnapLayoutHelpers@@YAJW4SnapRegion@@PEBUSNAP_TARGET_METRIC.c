/*
 * XREFs of ?ComputeSnapTargetDataForRegionHelper@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@PEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A2244
 * Callers:
 *     ?ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PEAUIImmersiveMonitor@@_NPEAUSNAP_TARGET_DATA@1@@Z @ 0x1805A20F8 (-ComputeSnapTargetDataForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEBUSNAP_TARGET_METRICS@1@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Reset@SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAAXXZ @ 0x1805959E4 (-Reset@SNAP_TARGET_DATA@SnapLayoutHelpers@@QEAAXXZ.c)
 */

__int64 __fastcall SnapLayoutHelpers::ComputeSnapTargetDataForRegionHelper(int a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // ebx
  float v13; // xmm9_4
  float v14; // xmm8_4
  float v15; // xmm10_4
  float v16; // xmm7_4
  float v17; // xmm11_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm12_4
  float v22; // xmm6_4
  float v23; // xmm3_4
  float v24; // xmm10_4
  float v25; // xmm7_4
  int v26; // ecx
  int v27; // ecx
  __m128i v28; // xmm11
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm3_4
  __int128 v33; // xmm0
  int v34[4]; // [rsp+20h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  SnapLayoutHelpers::SNAP_TARGET_DATA::Reset((SnapLayoutHelpers::SNAP_TARGET_DATA *)a4);
  v8 = *a3;
  *(_OWORD *)v34 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, int *))(v8 + 88))(a3, v34);
  v10 = 0;
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C6,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v9);
    return v11;
  }
  v13 = (float)v34[1];
  v14 = (float)v34[2];
  v15 = (float)v34[1];
  v16 = (float)v34[1];
  v17 = (float)v34[2];
  v18 = (float)v34[2];
  v19 = (float)v34[3];
  v20 = (float)v34[0];
  v21 = (float)v34[3];
  if ( a1 > 5 )
  {
    if ( a1 == 6 )
    {
      v21 = v19 - 0.0;
      v26 = v34[2] - v34[0];
      v15 = (float)(v34[3] - *(_DWORD *)(a2 + 36)) + 0.0;
      v19 = v19 - 0.0;
      v16 = (float)((float)v34[3] - (float)((float)(v34[3] - v34[1]) * *(float *)(a2 + 44))) + 0.0;
      goto LABEL_26;
    }
    v22 = (float)v34[0];
    if ( a1 == 7 )
    {
      v27 = v34[2] - v34[0];
      v28 = _mm_cvtsi32_si128(v34[0] + *(_DWORD *)a2);
      v15 = (float)(v34[3] - *(_DWORD *)(a2 + 4));
      v16 = v19 - (float)((float)(v34[3] - v34[1]) * *(float *)(a2 + 12));
      goto LABEL_15;
    }
    if ( a1 == 8 )
    {
      v29 = (float)*(int *)(a2 + 16);
      v22 = v20 + 0.0;
      v15 = v29 + v13;
      v21 = v19 - v29;
      v30 = (float)(v34[3] - v34[1]) * *(float *)(a2 + 24);
      v17 = (float)(v34[0] + *(_DWORD *)(a2 + 20)) - 0.0;
      v23 = v20 + 0.0;
      v19 = v19 - v30;
      v16 = v30 + v13;
      v18 = (float)((float)((float)(v34[2] - v34[0]) * *(float *)(a2 + 28)) + v20) - 0.0;
      goto LABEL_27;
    }
    v23 = (float)v34[0];
    if ( a1 > 10 )
      goto LABEL_27;
  }
  else
  {
    if ( a1 == 5 )
    {
      v15 = (float)(v34[3] - *(_DWORD *)(a2 + 4));
      v16 = v19 - (float)((float)(v34[3] - v34[1]) * *(float *)(a2 + 12));
LABEL_12:
      v22 = (float)(v34[2] - *(_DWORD *)a2);
      v23 = v14 - (float)((float)(v34[2] - v34[0]) * *(float *)(a2 + 8));
LABEL_27:
      *(_DWORD *)a4 = a1;
      v34[0] = (int)v22;
      v34[1] = (int)v15;
      v34[2] = (int)v17;
      v34[3] = (int)v21;
      v33 = *(_OWORD *)v34;
      v34[0] = (int)v23;
      *(_OWORD *)(a4 + 20) = v33;
      v34[1] = (int)v16;
      v34[2] = (int)v18;
      v34[3] = (int)v19;
      *(_OWORD *)(a4 + 4) = *(_OWORD *)v34;
      return v10;
    }
    v22 = (float)v34[0];
    v23 = (float)v34[0];
    if ( a1 )
    {
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 != 3 )
          {
            if ( a1 == 4 )
            {
              v17 = v14 - 0.0;
              v24 = (float)*(int *)(a2 + 16);
              v21 = v19 - v24;
              v15 = v24 + v13;
              v18 = v14 - 0.0;
              v25 = (float)(v34[3] - v34[1]) * *(float *)(a2 + 24);
              v19 = v19 - v25;
              v16 = v25 + v13;
              v22 = (float)(v34[2] - *(_DWORD *)(a2 + 20)) + 0.0;
              v23 = (float)(v14 - (float)((float)(v34[2] - v34[0]) * *(float *)(a2 + 28))) + 0.0;
            }
            goto LABEL_27;
          }
          v21 = (float)(v34[1] + *(_DWORD *)(a2 + 4));
          v19 = (float)((float)(v34[3] - v34[1]) * *(float *)(a2 + 12)) + v13;
          goto LABEL_12;
        }
        v26 = v34[2] - v34[0];
        v15 = v13 + 0.0;
        v21 = (float)(v34[1] + *(_DWORD *)(a2 + 36)) - 0.0;
        v16 = v13 + 0.0;
        v19 = (float)((float)((float)(v34[3] - v34[1]) * *(float *)(a2 + 44)) + v13) - 0.0;
LABEL_26:
        v31 = (float)*(int *)(a2 + 32);
        v32 = (float)v26 * *(float *)(a2 + 40);
        v17 = v14 - v31;
        v22 = v31 + v20;
        v18 = v14 - v32;
        v23 = v32 + v20;
        goto LABEL_27;
      }
      v27 = v34[2] - v34[0];
      v22 = (float)v34[0];
      v28 = _mm_cvtsi32_si128(v34[0] + *(_DWORD *)a2);
      v21 = (float)(v34[1] + *(_DWORD *)(a2 + 4));
      v19 = (float)((float)(v34[3] - v34[1]) * *(float *)(a2 + 12)) + v13;
LABEL_15:
      v23 = (float)v34[0];
      LODWORD(v17) = _mm_cvtepi32_ps(v28).m128_u32[0];
      v18 = (float)((float)v27 * *(float *)(a2 + 8)) + v20;
      goto LABEL_27;
    }
  }
  return (unsigned int)-2147467259;
}
