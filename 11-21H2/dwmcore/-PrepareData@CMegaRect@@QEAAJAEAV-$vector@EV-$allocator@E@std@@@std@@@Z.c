/*
 * XREFs of ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180084B28
 * Callers:
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x180084AA0 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     ??_GCRegion@@QEAAPEAXI@Z @ 0x1800132A0 (--_GCRegion@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ReorderAxisAlignedRectVertices @ 0x1800854A8 (ReorderAxisAlignedRectVertices.c)
 *     IsValidAxisAlignedRect @ 0x1800859E4 (IsValidAxisAlignedRect.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     VerticesHaveIntegralXY @ 0x180097888 (VerticesHaveIntegralXY.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800A3520 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ @ 0x1800A7724 (-GetPrimitive@CRenderingBatchCommand@@QEBAPEAVCDrawListPrimitive@@XZ.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B6A5C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CMegaRect::PrepareData(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v4; // r12d
  unsigned int Primitive; // eax
  __int64 *v6; // rdx
  char *v7; // rbx
  unsigned int v8; // r13d
  __int64 v9; // rdx
  char *v10; // rcx
  unsigned int v11; // r15d
  char *v12; // rdi
  size_t v13; // rdi
  unsigned __int64 v14; // r14
  HANDLE ProcessHeap; // rax
  LPVOID v16; // rax
  int v17; // r8d
  int v18; // r9d
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 *v21; // rdi
  int v22; // ebx
  __m128 v23; // xmm3
  __m128 v24; // xmm1
  HANDLE v25; // rax
  char *v26; // rax
  _DWORD *v27; // rax
  CRegion *v28; // rax
  __int32 v29; // r9d
  __int32 v30; // r10d
  __int32 v31; // eax
  __int32 v32; // r11d
  _DWORD *v33; // rdx
  __int32 *v34; // r8
  unsigned int v36; // [rsp+20h] [rbp-30h]
  unsigned __int64 v37; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-18h]
  int v39; // [rsp+3Ch] [rbp-14h]
  __m128 v40; // [rsp+40h] [rbp-10h] BYREF

  v4 = 0;
  Primitive = (unsigned int)CRenderingBatchCommand::GetPrimitive(*(CRenderingBatchCommand **)a1);
  v7 = (char *)v6[1];
  v8 = Primitive;
  v9 = *v6;
  v10 = &v7[-v9];
  v11 = 8 * *(_DWORD *)(a1 + 24) + 16;
  v12 = (char *)(4 * v11);
  if ( v12 < &v7[-v9] )
  {
    v7 = (char *)(v9 + 4 * v11);
    goto LABEL_5;
  }
  if ( v12 <= v10 )
    goto LABEL_6;
  if ( (unsigned __int64)v12 <= a2[2] - v9 )
  {
    v13 = v12 - v10;
    memset_0(v7, 0, v13);
    v7 += v13;
LABEL_5:
    a2[1] = (unsigned __int64)v7;
    goto LABEL_6;
  }
  std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a2, 4 * v11);
  v7 = (char *)a2[1];
LABEL_6:
  v14 = *a2;
  v40.m128_u64[0] = v14;
  v40.m128_u64[1] = v11 | 0x400000000LL;
  ProcessHeap = GetProcessHeap();
  v16 = HeapAlloc(ProcessHeap, 0, (SIZE_T)&v7[-v14]);
  v19 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v16;
  if ( v19 )
  {
    DefaultHeap::Free(v19);
    v16 = *(LPVOID *)(a1 + 16);
  }
  if ( !v16 )
  {
    v36 = 229;
LABEL_25:
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v19, 0LL, 0LL, -2147024882, v36);
    return v4;
  }
  TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v8, *(_DWORD *)a1 + 16, v17, v18, (__int64)&v40);
  v40.m128_u64[0] = v14;
  v40.m128_u64[1] = v11 | 0x400000000LL;
  if ( !(unsigned __int8)VerticesHaveIntegralXY(&v40) )
    return v4;
  v40.m128_u64[0] = v14;
  v40.m128_u64[1] = v11 | 0x400000000LL;
  if ( !(unsigned __int8)IsValidAxisAlignedRect(&v40) )
    return v4;
  v20 = *(unsigned int *)(a1 + 24);
  v40.m128_u64[0] = *(_QWORD *)(a1 + 16);
  v21 = (unsigned __int64 *)v40.m128_u64[0];
  v37 = v14;
  v22 = v20 + 2;
  v38 = v11;
  v40.m128_i32[2] = 8 * (v20 + 2);
  v40.m128_i32[3] = 4;
  v39 = 4;
  ReorderAxisAlignedRectVertices(&v37, v20, &v40);
  v23 = _mm_mul_ps(
          _mm_add_ps(_mm_movelh_ps((__m128)*v21, (__m128)v21[2 * v22]), g_halfFixedPointForRounding),
          (__m128)_xmm);
  v24 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v23);
  v40 = _mm_or_ps(_mm_andnot_ps(v24, (__m128)_mm_cvttps_epi32(v23)), _mm_and_ps(v24, DirectX::g_XMAbsMask));
  v25 = GetProcessHeap();
  v26 = (char *)HeapAlloc(v25, 0, 0x48uLL);
  v19 = v26;
  if ( v26 )
  {
    v27 = v26 + 8;
    *v19 = v27;
    *v27 = 0;
  }
  else
  {
    v19 = 0LL;
  }
  v28 = *(CRegion **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v19;
  if ( v28 )
  {
    CRegion::`scalar deleting destructor'(v28, 1);
    v19 = *(_QWORD **)(a1 + 8);
  }
  if ( !v19 )
  {
    v36 = 267;
    goto LABEL_25;
  }
  v29 = v40.m128_i32[0];
  v30 = v40.m128_i32[2];
  if ( v40.m128_i32[0] >= v40.m128_i32[2]
    || (v31 = v40.m128_i32[1], v32 = v40.m128_i32[3], v40.m128_i32[1] >= v40.m128_i32[3]) )
  {
    *(_DWORD *)*v19 = 0;
  }
  else
  {
    v33 = (_DWORD *)*v19;
    v34 = (__int32 *)(*v19 + 28LL);
    *v33 = 2;
    *v34 = v29;
    v33[3] = v31;
    v34[1] = v30;
    v33[4] = (_DWORD)v34 - ((_DWORD)v33 + 12);
    v33[1] = v29;
    v33[2] = v30;
    v33[6] = (_DWORD)v34 - ((_DWORD)v33 + 20) + 8;
    v33[5] = v32;
  }
  return v4;
}
