/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800A3520
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180084B28 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800A6FB0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCom.c)
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x1800CCED8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 * Callees:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180008E9C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18000AA98 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180010E38 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180010E38.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800D7C8C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800D7C8C.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EDF9C (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1801EDF9C.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EE99C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EEA84 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EEF74 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EEFF0 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EF06C (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EF3B8 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EF470 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801EF528 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 */

__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        __int64 *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // rsi
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r12
  __int64 v10; // r8
  int v11; // r13d
  __m128 v12; // xmm11
  __m128 v13; // xmm12
  int v14; // xmm13_4
  __m128 v15; // xmm14
  __m128 v16; // xmm15
  int v17; // eax
  char v18; // cl
  int v19; // edi
  __int64 v20; // r15
  int v21; // eax
  __m128 v22; // xmm6
  __m128 v23; // xmm10
  float v24; // xmm11_4
  __m128 v25; // xmm7
  __m128 v26; // xmm9
  float v27; // xmm0_4
  float v28; // xmm12_4
  bool v29; // al
  unsigned int v30; // r10d
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  __m128 v33; // xmm6
  int v34; // esi
  int v35; // r11d
  __int64 v36; // rdi
  __m128 *v37; // rcx
  __m128 *v38; // rdx
  __m128 *v39; // r9
  __m128 *v40; // r8
  _OWORD *m128_f32; // rax
  signed __int64 v42; // rdx
  __int64 v43; // r9
  _OWORD *v44; // rax
  __int64 v45; // rdx
  signed __int64 v46; // rcx
  __int64 result; // rax
  __m128 v48; // xmm7
  unsigned int v49; // r10d
  __m128 v50; // xmm10
  __m128 v51; // xmm10
  __m128 v52; // xmm9
  __m128 v53; // xmm7
  int v54; // ecx
  int v55; // esi
  __int64 v56; // r13
  int v57; // r14d
  __m128 *v58; // r11
  __m128 *v59; // rdi
  __m128 *v60; // r8
  __m128 *v61; // rcx
  __m128 *v62; // rdx
  __m128 *v63; // r9
  __m128 v64; // xmm3
  __m128 v65; // xmm0
  __m128 v66; // xmm4
  __m128 v67; // xmm1
  __m128 v68; // xmm0
  __m128 v69; // xmm2
  signed __int64 v70; // rcx
  __m128 v71; // xmm2
  signed __int64 v72; // rdx
  __m128 *v73; // rax
  __int64 v74; // r8
  __m128 v75; // xmm2
  __m128 v76; // xmm4
  __m128 v77; // xmm0
  __m128 v78; // xmm3
  __m128 v79; // xmm1
  __int64 v80; // rcx
  signed __int64 v81; // r9
  __m128 v82; // xmm3
  signed __int64 v83; // rdi
  __m128 *v84; // rax
  unsigned __int64 v85; // [rsp+20h] [rbp-E0h] BYREF
  float v86; // [rsp+28h] [rbp-D8h]
  float v87; // [rsp+2Ch] [rbp-D4h]
  __int32 v88; // [rsp+30h] [rbp-D0h]
  __int32 v89; // [rsp+34h] [rbp-CCh]
  float v90; // [rsp+38h] [rbp-C8h]
  float v91; // [rsp+3Ch] [rbp-C4h]
  __int128 v92; // [rsp+40h] [rbp-C0h]
  __int32 v93; // [rsp+50h] [rbp-B0h]
  __int32 v94; // [rsp+54h] [rbp-ACh]
  int v95; // [rsp+58h] [rbp-A8h]
  int v96; // [rsp+5Ch] [rbp-A4h]
  int v97; // [rsp+60h] [rbp-A0h]
  _QWORD v98[2]; // [rsp+70h] [rbp-90h] BYREF
  int v99; // [rsp+80h] [rbp-80h]
  int v100; // [rsp+84h] [rbp-7Ch]
  __int64 v101; // [rsp+88h] [rbp-78h]
  int v102; // [rsp+90h] [rbp-70h]
  int v103; // [rsp+94h] [rbp-6Ch]
  unsigned int v104; // [rsp+98h] [rbp-68h]
  float v105; // [rsp+9Ch] [rbp-64h]
  char v106; // [rsp+A0h] [rbp-60h]
  __int64 v107; // [rsp+A8h] [rbp-58h]
  int v108; // [rsp+B0h] [rbp-50h]
  int v109; // [rsp+B4h] [rbp-4Ch]
  __int64 v111; // [rsp+1B8h] [rbp+B8h]
  int v112; // [rsp+1C0h] [rbp+C0h]
  int v113; // [rsp+1C8h] [rbp+C8h]

  v5 = *(_DWORD *)(a1 + 16);
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(unsigned int *)(a1 + 8);
  v11 = 8 * v5 + 16;
  v12 = (__m128)(unsigned int)FLOAT_1_0;
  v13 = (__m128)(unsigned int)FLOAT_1_0;
  v14 = *(_DWORD *)(a2 + 60);
  v15 = (__m128)*(unsigned int *)(a2 + 48);
  v16 = (__m128)*(unsigned int *)(a2 + 52);
  v98[0] = *(_QWORD *)(a1 + 48);
  v17 = *(_DWORD *)(a1 + 12);
  v18 = *(_BYTE *)(a1 + 96);
  v103 = v17;
  v105 = a4;
  v93 = v15.m128_i32[0];
  v94 = v16.m128_i32[0];
  v19 = *((_DWORD *)a5 + 2);
  v20 = *a5;
  v21 = *((_DWORD *)a5 + 3);
  v96 = v14;
  v112 = v11;
  v98[1] = v9;
  v99 = v11;
  v100 = v10;
  v111 = v7;
  v101 = v7;
  v102 = v11;
  v104 = v5;
  v106 = v18;
  v107 = v20;
  v113 = v19;
  v108 = v19;
  v109 = v21;
  v97 = 0;
  v12.m128_f32[0] = 1.0 / *(float *)(v6 + 88);
  v13.m128_f32[0] = 1.0 / *(float *)(v6 + 92);
  v22 = v12;
  v23 = v12;
  v22.m128_f32[0] = v12.m128_f32[0] * *(float *)a2;
  v25 = v13;
  v23.m128_f32[0] = v12.m128_f32[0] * *(float *)(a2 + 4);
  v26 = v13;
  v24 = v12.m128_f32[0] * *(float *)(a2 + 12);
  v25.m128_f32[0] = v13.m128_f32[0] * *(float *)(a2 + 16);
  v26.m128_f32[0] = v13.m128_f32[0] * *(float *)(a2 + 20);
  v86 = (float)(1.0 / *(float *)(v6 + 88)) * *(float *)(a2 + 8);
  v27 = v13.m128_f32[0] * *(float *)(a2 + 24);
  v28 = v13.m128_f32[0] * *(float *)(a2 + 28);
  v85 = __PAIR64__(v23.m128_u32[0], v22.m128_u32[0]);
  v90 = v27;
  v87 = v24;
  v88 = v25.m128_i32[0];
  v89 = v26.m128_i32[0];
  v91 = v28;
  v92 = *(_OWORD *)(a2 + 32);
  v95 = *(_DWORD *)(a2 + 56);
  v29 = (v5 & 1) == 0 && (v20 & 0xF) == 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)((float)(COERCE_FLOAT(LODWORD(v24) & _xmm) * 61440.0)
                                    + (float)(COERCE_FLOAT(LODWORD(v28) & _xmm) * 61440.0))
                            + COERCE_FLOAT(v14 & _xmm))
                    - 1.0) & _xmm) >= 0.000081380211 )
  {
    BYTE1(v97) = 48;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( v18 )
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v98,
          &v85);
      else
        VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v98,
          &v85);
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        (__int64)v98,
        (CMILMatrix *)&v85);
    }
    result = *(unsigned int *)(v6 + 8);
    dword_1803D326C += result;
  }
  else
  {
    BYTE1(v97) = 16;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22.m128_f32[0] - v26.m128_f32[0]) & _xmm) > 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v23.m128_f32[0] - COERCE_FLOAT(v25.m128_i32[0] ^ _xmm)) & _xmm) > 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(
                        (float)((float)(v22.m128_f32[0] * v22.m128_f32[0]) + (float)(v25.m128_f32[0] * v25.m128_f32[0]))
                      - 1.0) & _xmm) >= 0.000081380211 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
      {
        if ( v29 )
        {
          if ( !v18 )
          {
            VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
              (__int64)v98,
              &v85,
              v10,
              v7);
            result = *(unsigned int *)(v6 + 8);
            dword_1803D3268 += result;
            return result;
          }
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v98,
            &v85);
        }
        else if ( v18 )
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            v98,
            &v85);
        }
        else
        {
          VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v98,
            &v85);
        }
      }
      else if ( v29 )
      {
        v48 = _mm_unpacklo_ps(v25, v26);
        v49 = v5 >> 1;
        v50 = _mm_unpacklo_ps(v22, v23);
        v51 = _mm_movelh_ps(v50, v50);
        v52 = _mm_movelh_ps(_mm_unpacklo_ps(v15, v16), (__m128)0LL);
        v53 = _mm_movelh_ps(v48, v48);
        if ( (_DWORD)v10 )
        {
          v54 = v11;
          v55 = 0;
          v56 = ((unsigned int)(v10 - 1) >> 1) + 1;
          v57 = 0;
          do
          {
            v58 = (__m128 *)(v9 + v54 + v57);
            v59 = (__m128 *)(v20 + v19 + v55);
            v60 = (__m128 *)(v9 + v57);
            v61 = (__m128 *)(v7 + v8);
            v62 = (__m128 *)(v20 + v55);
            v63 = (__m128 *)(v111 + v8 + v112);
            v64 = *v61;
            v65 = _mm_sub_ps(_mm_shuffle_ps(*v60, DirectX::g_XMOne, 228), *v61);
            v66 = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v65, v65, 85), v53),
                    _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v51));
            if ( (_mm_movemask_ps(_mm_cmpeq_ps(v66, DirectX::g_XMZero)) & 3) == 3 )
            {
              v69 = (__m128)DirectX::g_XMOne;
            }
            else
            {
              v67 = _mm_mul_ps(v66, v66);
              v68 = (__m128)DirectX::g_XMOne;
              v68.m128_f32[0] = 1.0 / fsqrt(v67.m128_f32[0] + _mm_shuffle_ps(v67, v67, 85).m128_f32[0]);
              v69 = _mm_mul_ps(_mm_shuffle_ps(v64, v64, 170), _mm_shuffle_ps(v68, v68, 0));
            }
            *v62 = _mm_shuffle_ps(
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v64, v64, 85), v53), v52),
                         _mm_mul_ps(_mm_shuffle_ps(v64, v64, 0), v51)),
                       _mm_mul_ps(v69, v66)),
                     _mm_or_ps(
                       _mm_and_ps(
                         *v60,
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         DirectX::g_XMOne)),
                     228);
            if ( v69.m128_f32[0] > 1.0 && v61->m128_f32[3] == 0.0 )
              v69 = (__m128)(unsigned int)FLOAT_1_0;
            if ( v49 )
            {
              v70 = (char *)v61 - (char *)v60;
              v71 = _mm_shuffle_ps(v69, v69, 0);
              v72 = (char *)v62 - (char *)v60;
              v73 = v60 + 1;
              v74 = v49;
              do
              {
                *(__m128 *)((char *)v73 + v72) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v73, *(__m128 *)((char *)v73 + v70)), v71),
                                                   *(__m128 *)((char *)v73 + v70));
                ++v73;
                --v74;
              }
              while ( v74 );
            }
            v75 = (__m128)DirectX::g_XMOne;
            v76 = *v63;
            v77 = _mm_sub_ps(_mm_shuffle_ps(*v58, DirectX::g_XMOne, 228), *v63);
            v78 = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v77, v77, 85), v53),
                    _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v51));
            if ( (_mm_movemask_ps(_mm_cmpeq_ps(v78, DirectX::g_XMZero)) & 3) != 3 )
            {
              v79 = _mm_mul_ps(v78, v78);
              v75.m128_f32[0] = 1.0 / fsqrt(v79.m128_f32[0] + _mm_shuffle_ps(v79, v79, 85).m128_f32[0]);
              v75 = _mm_mul_ps(_mm_shuffle_ps(v75, v75, 0), _mm_shuffle_ps(v76, v76, 170));
            }
            *v59 = _mm_shuffle_ps(
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v76, v76, 85), v53), v52),
                         _mm_mul_ps(_mm_shuffle_ps(v76, v76, 0), v51)),
                       _mm_mul_ps(v75, v78)),
                     _mm_or_ps(
                       _mm_and_ps(
                         *v58,
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask),
                       _mm_andnot_ps(
                         (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                         DirectX::g_XMOne)),
                     228);
            if ( v75.m128_f32[0] > 1.0 && v63->m128_f32[3] == 0.0 )
              v75 = (__m128)(unsigned int)FLOAT_1_0;
            if ( v49 )
            {
              v80 = v49;
              v81 = (char *)v63 - (char *)v58;
              v82 = _mm_shuffle_ps(v75, v75, 0);
              v83 = (char *)v59 - (char *)v58;
              v84 = v58 + 1;
              do
              {
                *(__m128 *)((char *)v84 + v83) = _mm_add_ps(
                                                   _mm_mul_ps(_mm_sub_ps(*v84, *(__m128 *)((char *)v84 + v81)), v82),
                                                   *(__m128 *)((char *)v84 + v81));
                ++v84;
                --v80;
              }
              while ( v80 );
            }
            v54 = v112;
            v19 = v113;
            v7 = v111;
            v57 += 2 * v112;
            v55 += 2 * v113;
            v8 += 2 * v112;
            --v56;
          }
          while ( v56 );
          v6 = a1;
        }
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
          v98,
          &v85);
      }
      result = *(unsigned int *)(v6 + 8);
      dword_1803D3268 += result;
      return result;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a4 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      if ( v29 )
      {
        if ( v18 )
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
            (__int64)v98,
            &v85,
            v10);
        else
          VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
            v98,
            &v85);
      }
      else if ( v18 )
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
          v98,
          &v85);
      }
      else
      {
        VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
          v98,
          &v85);
      }
    }
    else if ( v29 )
    {
      v30 = v5 >> 1;
      v31 = _mm_movelh_ps(_mm_unpacklo_ps(v22, v23), (__m128)0LL);
      v32 = _mm_movelh_ps(_mm_unpacklo_ps(v25, v26), (__m128)0LL);
      v33 = _mm_movelh_ps(_mm_unpacklo_ps(v15, v16), (__m128)_xmm);
      if ( (_DWORD)v10 )
      {
        v34 = 2 * v19;
        v35 = 0;
        v36 = ((unsigned int)(v10 - 1) >> 1) + 1;
        do
        {
          v37 = (__m128 *)(v9 + v35 + v11);
          v38 = (__m128 *)(v9 + v35);
          v39 = (__m128 *)(v20 + v8);
          v40 = (__m128 *)(v20 + v8 + v113);
          *v39 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v38, *v38, 85), v32), v33),
                       _mm_mul_ps(_mm_shuffle_ps(*v38, *v38, 0), v31))),
                   _mm_and_ps(*v38, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v30 )
          {
            m128_f32 = (_OWORD *)v39[1].m128_f32;
            v42 = (char *)v38 - (char *)v39;
            v43 = v30;
            do
            {
              *m128_f32 = *(_OWORD *)((char *)m128_f32 + v42);
              ++m128_f32;
              --v43;
            }
            while ( v43 );
          }
          *v40 = _mm_or_ps(
                   _mm_andnot_ps(
                     (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask,
                     _mm_add_ps(
                       _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 85), v32), v33),
                       _mm_mul_ps(_mm_shuffle_ps(*v37, *v37, 0), v31))),
                   _mm_and_ps(*v37, (__m128)`DirectX::Internal::PermuteHelper<228,0,0,0,1>::Permute'::`2'::selectMask));
          if ( v30 )
          {
            v44 = (_OWORD *)v40[1].m128_f32;
            v45 = v30;
            v46 = (char *)v37 - (char *)v40;
            do
            {
              *v44 = *(_OWORD *)((char *)v44 + v46);
              ++v44;
              --v45;
            }
            while ( v45 );
          }
          v35 += 2 * v11;
          v8 += v34;
          --v36;
        }
        while ( v36 );
        v6 = a1;
      }
    }
    else
    {
      VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        v98,
        &v85);
    }
    result = *(unsigned int *)(v6 + 8);
    dword_1803D3264 += result;
  }
  return result;
}
