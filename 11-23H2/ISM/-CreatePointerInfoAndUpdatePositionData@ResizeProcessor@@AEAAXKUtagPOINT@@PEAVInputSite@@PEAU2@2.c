/*
 * XREFs of ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x180163D70
 * Callers:
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180164B60 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x180165994 (-StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBam.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x180165D1C (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x18010081C (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18015B28C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180162D90 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x1801BB804 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 */

void __fastcall ResizeProcessor::CreatePointerInfoAndUpdatePositionData(
        ResizeProcessor *this,
        int a2,
        struct tagPOINT a3,
        struct InputSite *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  LONG x; // ebx
  __int128 *TransformFromRootToSite; // rax
  __int128 v9; // xmm8
  __int128 v10; // xmm7
  __int128 v11; // xmm6
  __m128d v12; // xmm9
  __int64 v13; // rax
  float *v14; // rax
  struct tagPOINT *v15; // rdi
  struct tagPOINT v16; // rax
  __int64 *v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __m128i v22; // xmm0
  float *v23; // rax
  int v24; // ecx
  _BYTE v25[72]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v26[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v27[24]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v28[8]; // [rsp+98h] [rbp-70h] BYREF
  struct tagPOINT v29; // [rsp+138h] [rbp+30h] BYREF
  int v30; // [rsp+140h] [rbp+38h] BYREF
  struct tagPOINT v31; // [rsp+148h] [rbp+40h] BYREF

  v31 = a3;
  v30 = a2;
  x = a3.x;
  TransformFromRootToSite = (__int128 *)PointerManipulationHelper::GetTransformFromRootToSite(v25, a4);
  v10 = TransformFromRootToSite[1];
  v11 = TransformFromRootToSite[2];
  v12 = (__m128d)TransformFromRootToSite[3];
  v28[0] = *TransformFromRootToSite;
  v9 = v28[0];
  v28[1] = v10;
  v28[2] = v11;
  v28[3] = (__int128)v12;
  v13 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
          (float *)this + 58,
          (__int64)v27,
          (unsigned __int8 *)&v30);
  v29 = (struct tagPOINT)_mm_unpacklo_ps(
                           (__m128)COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)v13 + 20LL)),
                           (__m128)COERCE_UNSIGNED_INT((float)*(int *)(*(_QWORD *)v13 + 24LL))).m128_u64[0];
  v14 = (float *)CInputTransform::ScreenPointToRelative((__int64)v26, (float *)&v29, v28);
  v15 = a5;
  *(_OWORD *)&v25[8] = v9;
  v29 = (struct tagPOINT)__PAIR64__((int)v14[1], (int)*v14);
  *(_OWORD *)&v25[24] = v10;
  v16 = v29;
  *a5 = v29;
  *(struct tagPOINT *)v25 = v16;
  *(_OWORD *)&v25[40] = v11;
  *(__m128d *)&v25[56] = v12;
  v17 = (__int64 *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                     (float *)this + 42,
                     (__int64)v27,
                     (unsigned __int8 *)&v30);
  v18 = *(_OWORD *)&v25[16];
  v19 = *v17;
  *(_OWORD *)(v19 + 20) = *(_OWORD *)v25;
  v20 = *(_OWORD *)&v25[32];
  *(_OWORD *)(v19 + 36) = v18;
  v21 = *(_OWORD *)&v25[48];
  *(_OWORD *)(v19 + 52) = v20;
  v22 = _mm_cvtsi32_si128(v31.y);
  *(_OWORD *)(v19 + 68) = v21;
  *(_QWORD *)(v19 + 84) = *(_OWORD *)&_mm_unpackhi_pd(v12, v12);
  v31 = (struct tagPOINT)_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)x), _mm_cvtepi32_ps(v22)).m128_u64[0];
  v23 = (float *)CInputTransform::ScreenPointToRelative((__int64)&a5, (float *)&v31, v28);
  v24 = (int)*v23;
  LODWORD(v23) = (int)v23[1];
  v31.x = v24 - v15->x;
  v31.y = (_DWORD)v23 - v15->y;
  *a6 = v31;
}
