/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalcScopeMode@CCpuClippingData@@CA?AW4Enum@CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W423@@Z @ 0x180048F94 (-CalcScopeMode@CCpuClippingData@@CA-AW4Enum@CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W423@.c)
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x180049124 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057114 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005844C (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateScopeTransforms@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z @ 0x18009507C (-UpdateScopeTransforms@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z.c)
 *     ?UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEAVCVisual@@PEBV1@@Z @ 0x1800954A0 (-UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEAVCVisual@@PEBV1@@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800D361C (--0CCpuClip@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800D5878 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCpuClippingData::Update(
        __int64 a1,
        struct CCpuClippingData *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  struct CCpuClippingData *v9; // r14
  int v10; // eax
  bool v11; // bl
  struct CCpuClippingData *v12; // rcx
  struct CCpuClippingData *p_Blink; // r12
  CVisual *v14; // r13
  struct _LIST_ENTRY *v15; // rsi
  __int64 v16; // rsi
  _DWORD *v17; // r8
  int v18; // r13d
  __int64 v19; // rax
  char v20; // si
  char v21; // r13
  unsigned __int64 v22; // rax
  const struct CMILMatrix **v23; // rbx
  __int64 v24; // rcx
  float v25; // xmm6_4
  unsigned int v26; // ebx
  void (__fastcall ***v27)(_QWORD, __int64); // r14
  char v28; // r13
  char v30; // al
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  float v35; // xmm7_4
  float v36; // xmm9_4
  float v37; // xmm8_4
  float v38; // xmm0_4
  int updated; // eax
  struct CVisual *v40; // rdx
  __int64 v41; // rcx
  CVisual *v42; // r13
  __int64 v43; // rax
  struct _LIST_ENTRY *v44; // rdx
  unsigned __int64 v45; // rcx
  bool v46; // zf
  __int64 v47; // rax
  _BYTE *v48; // rdx
  __int64 v49; // rcx
  _QWORD **v50; // rcx
  _QWORD *v51; // rcx
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  struct _LIST_ENTRY *v55; // rax
  struct _LIST_ENTRY *v56; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v59; // eax
  __int64 v60; // rcx
  unsigned int v61; // r13d
  unsigned int v62; // xmm7_4
  FLOAT v63; // xmm1_4
  unsigned int v64; // xmm9_4
  FLOAT v65; // xmm0_4
  int v66; // xmm1_4
  int v67; // xmm0_4
  int v68; // xmm1_4
  struct _LIST_ENTRY *v69; // rax
  struct _LIST_ENTRY *v70; // rcx
  __int64 v71; // rcx
  unsigned int v72; // [rsp+30h] [rbp-D0h]
  struct CCpuClippingData *v73; // [rsp+38h] [rbp-C8h] BYREF
  struct _LIST_ENTRY *v74; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v75; // [rsp+48h] [rbp-B8h]
  __int64 v76; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v77)(_QWORD, __int64); // [rsp+58h] [rbp-A8h]
  unsigned __int64 v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  char v80; // [rsp+70h] [rbp-90h]
  _QWORD v81[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v82; // [rsp+90h] [rbp-70h]
  __int128 v83; // [rsp+A0h] [rbp-60h]
  __int128 v84; // [rsp+B0h] [rbp-50h]
  int v85; // [rsp+C0h] [rbp-40h]
  int v86; // [rsp+C4h] [rbp-3Ch]
  char v87; // [rsp+C8h] [rbp-38h]
  char v88; // [rsp+C9h] [rbp-37h]
  _BYTE v89[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v90; // [rsp+E0h] [rbp-20h]
  char v91; // [rsp+E4h] [rbp-1Ch]
  _QWORD v92[8]; // [rsp+F0h] [rbp-10h] BYREF
  int v93; // [rsp+130h] [rbp+30h]
  __int128 v94; // [rsp+140h] [rbp+40h] BYREF
  struct D2D_MATRIX_3X2_F v95; // [rsp+150h] [rbp+50h] BYREF
  int v96; // [rsp+168h] [rbp+68h]
  int v97; // [rsp+16Ch] [rbp+6Ch]
  int v98; // [rsp+170h] [rbp+70h]

  v75 = a4;
  v76 = a5;
  v9 = a2;
  v72 = 0;
  v10 = *(unsigned __int8 *)(a1 + 96);
  v11 = *(_DWORD *)(a1 + 16) == 0;
  v77 = 0LL;
  v79 = 0LL;
  v80 = 0;
  if ( v10 != (a4 != 0) )
  {
    *(_BYTE *)(a1 + 99) = 1;
    v11 = 1;
  }
  v12 = 0LL;
  p_Blink = 0LL;
  v73 = 0LL;
  if ( *((_QWORD **)a2 + 8) == a3 )
    goto LABEL_72;
  v14 = (CVisual *)a3[11];
  v15 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CCpuClippingData *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v15 = (struct _LIST_ENTRY *)((char *)v14 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v14);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (struct CCpuClippingData *)Flink[2].Flink != v9 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_6;
        }
        v15 = Flink - 24;
      }
    }
  }
LABEL_6:
  p_Blink = (struct CCpuClippingData *)&v15[5].Blink;
  if ( LODWORD(v15[6].Blink) == 4 )
  {
    p_Blink = 0LL;
    v12 = 0LL;
    goto LABEL_72;
  }
  v16 = 0LL;
  if ( a3 == *((_QWORD **)v9 + 8) )
    goto LABEL_14;
  v17 = (_DWORD *)a3[29];
  if ( (*v17 & 0x1000000) != 0 )
  {
    v47 = (unsigned int)v17[1];
    v48 = v17 + 2;
    v49 = 0LL;
    if ( (_DWORD)v47 )
    {
      while ( *v48 != 8 )
      {
        v49 = (unsigned int)(v49 + 1);
        ++v48;
        if ( (unsigned int)v49 >= (unsigned int)v47 )
          goto LABEL_113;
      }
    }
    else
    {
LABEL_113:
      if ( (unsigned int)v49 >= (unsigned int)v47 )
      {
        v50 = 0LL;
LABEL_87:
        v51 = *v50;
        if ( v51 )
          v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 184LL))(*v51);
        goto LABEL_9;
      }
    }
    v50 = (_QWORD **)((char *)v17 + 8 * v49 - (((_BYTE)v47 + 15) & 7) + v47 + 15);
    goto LABEL_87;
  }
LABEL_9:
  if ( (*(unsigned __int8 (__fastcall **)(struct CCpuClippingData *))(*(_QWORD *)v9 + 184LL))(v9) )
  {
    a2 = (struct CCpuClippingData *)(a3 + 42);
  }
  else
  {
    v55 = CVisual::GetTreeDataListHead((CVisual *)a3);
    if ( !v55 || (v56 = v55->Flink, v55->Flink == v55) )
    {
LABEL_14:
      v12 = p_Blink;
      v73 = p_Blink;
      if ( p_Blink )
      {
LABEL_15:
        v18 = a7;
        goto LABEL_16;
      }
      goto LABEL_72;
    }
    while ( 1 )
    {
      a2 = (struct CCpuClippingData *)&v56[-24];
      if ( (struct CCpuClippingData *)v56[2].Flink == v9 )
        break;
      v56 = v56->Flink;
      if ( v56 == v55 )
        goto LABEL_14;
    }
  }
  if ( !a2 || *((_QWORD *)a2 + 35) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 36) + 16LL) + 496LL) || !v16 )
    goto LABEL_14;
  v42 = (CVisual *)a3[11];
  v78 = 0LL;
  *(_QWORD *)&v94 = 0LL;
  if ( v42 )
  {
    while ( 1 )
    {
      v43 = *(_QWORD *)v9;
      v74 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct CCpuClippingData *))(v43 + 184))(v9) )
      {
        v44 = (struct _LIST_ENTRY *)((char *)v42 + 336);
      }
      else
      {
        v69 = CVisual::GetTreeDataListHead(v42);
        if ( !v69 || (v70 = v69->Flink, v69->Flink == v69) )
        {
LABEL_125:
          v44 = v74;
        }
        else
        {
          while ( 1 )
          {
            v44 = v70 - 24;
            if ( (struct CCpuClippingData *)v70[2].Flink == v9 )
              break;
            v70 = v70->Flink;
            if ( v70 == v69 )
              goto LABEL_125;
          }
        }
      }
      a2 = (struct CCpuClippingData *)&v44[5].Blink;
      if ( v42 == (CVisual *)v16 )
        break;
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v45 = v78;
        if ( v78 <= *(_QWORD *)a2 )
          v45 = *(_QWORD *)a2;
        v46 = *((_BYTE *)a2 + 96) == 0;
        v78 = v45;
        if ( !v46 )
        {
          v71 = v94;
          if ( (unsigned __int64)v94 <= *((_QWORD *)a2 + 1) )
            v71 = *((_QWORD *)a2 + 1);
          *(_QWORD *)&v94 = v71;
        }
        v42 = (CVisual *)*((_QWORD *)v42 + 11);
        if ( v42 )
          continue;
      }
      v12 = v73;
      goto LABEL_72;
    }
    v73 = a2;
    v12 = a2;
    if ( a2 )
    {
      a2 = *(struct CCpuClippingData **)(a1 + 40);
      if ( v78 > (unsigned __int64)a2 )
        v11 = 1;
      if ( (unsigned __int64)v94 > (unsigned __int64)a2 )
      {
        v18 = a7;
        *(_BYTE *)(a1 + 98) = 1;
        goto LABEL_16;
      }
      goto LABEL_15;
    }
  }
  else
  {
    v12 = 0LL;
  }
LABEL_72:
  v18 = a7;
  LODWORD(v74) = a7;
  if ( a7 > 2 )
    goto LABEL_17;
  v18 = 2;
LABEL_16:
  LODWORD(v74) = v18;
LABEL_17:
  v19 = v75;
  v20 = *(_BYTE *)(a1 + 97);
  if ( !v75 || !v12 )
  {
LABEL_18:
    v20 = 0;
    goto LABEL_19;
  }
  if ( !a6 )
  {
    if ( v18 <= 2 )
    {
      v18 = 2;
      LODWORD(v74) = 2;
    }
    goto LABEL_18;
  }
  if ( *(_BYTE *)(a1 + 99)
    || *((_QWORD *)p_Blink + 5) > *(_QWORD *)(a1 + 40)
    || *(_BYTE *)(a1 + 98)
    || *((_QWORD *)v12 + 1) > *(_QWORD *)(a1 + 8) )
  {
    v93 = 0;
    v20 = 0;
    CVisual::GetRootTransform((CVisual *)a3, (struct CMILMatrix *)v92, 1, 0);
    if ( !CCpuClippingData::IsScopePreservingTransform((const struct CMILMatrix *)v92) )
      goto LABEL_46;
    CMILMatrix::Multiply((CMILMatrix *)v92, *((const struct CMILMatrix **)v73 + 3));
    v94 = 0LL;
    v53 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v75 + 48LL))(v75, &v94, 0LL);
    v72 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0LL, v53, 0xB1u);
      return v72;
    }
    CCpuClip::CCpuClip((CCpuClip *)v81);
    CShapePtr::Release((CShapePtr *)v89);
    v82 = _xmm;
    v84 = _xmm;
    v83 = 0LL;
    v81[0] = a6;
    *(_QWORD *)&v95.m11 = v92[0];
    *(_QWORD *)&v95.m[1][0] = v92[2];
    *(_QWORD *)&v95.m[2][0] = v92[6];
    v91 = 0;
    v90 = 0;
    v81[1] = 1065353216LL;
    v85 = 0;
    v86 = 1065353216;
    v87 = 85;
    v88 = v88 & 0xC0 | 0x17;
    v20 = CCpuClip::FullyContains(v81, (__int64)&v94, &v95) != 0;
    CShapePtr::Release((CShapePtr *)v89);
  }
  if ( !v20 )
  {
LABEL_46:
    v19 = v75;
    goto LABEL_19;
  }
  v19 = v75;
  if ( v18 <= 2 )
  {
    v18 = 2;
    LODWORD(v74) = 2;
  }
LABEL_19:
  if ( v11
    || v18 <= *(_DWORD *)(a1 + 16)
    && (!*(_BYTE *)(a1 + 98) || v18 > 1)
    && (!*(_BYTE *)(a1 + 100) || v18 > 2)
    && *(_BYTE *)(a1 + 97) == v20 )
  {
    v21 = 0;
    if ( !v11 )
      goto LABEL_25;
    v18 = (int)v74;
  }
  v52 = CCpuClippingData::CalcScopeMode((__int64)a3, v19, v18);
  v21 = 0;
  if ( *(_DWORD *)(a1 + 16) != v52 )
  {
    *(_DWORD *)(a1 + 16) = v52;
    v21 = 1;
    *(_QWORD *)a1 = *((_QWORD *)v9 + 588);
  }
LABEL_25:
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( *(_BYTE *)(a1 + 98) || *(_BYTE *)(a1 + 99) || *(_BYTE *)(a1 + 100) )
    {
      v23 = (const struct CMILMatrix **)v73;
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 8);
      v23 = (const struct CMILMatrix **)v73;
      if ( *((_QWORD *)p_Blink + 1) <= v22 && *((_QWORD *)v73 + 1) <= v22 )
        goto LABEL_31;
    }
    v21 = 1;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a1 + 16) != 2 )
  {
    v24 = 0LL;
    p_Blink = 0LL;
    v23 = 0LL;
LABEL_32:
    v25 = *(float *)&v73;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 99) || *(_BYTE *)(a1 + 100) )
    v21 = 1;
  p_Blink = 0LL;
  v23 = 0LL;
LABEL_31:
  v24 = v75;
  if ( !v75 )
    goto LABEL_32;
  v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v75 + 56LL))(v75);
  v24 = v75;
  if ( v30 )
    goto LABEL_32;
  v25 = CCommonRegistryData::m_flCpuClipFlatteningTolerance;
  v31 = *(_QWORD *)v75;
  v94 = 0LL;
  v32 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(v31 + 48))(v75, &v94, 0LL);
  v72 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v32, 0x120u);
    return v72;
  }
  LOBYTE(v33) = 1;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(v76, v33) )
  {
    v35 = *(float *)(v76 + 20);
    v36 = *(float *)(v76 + 16);
    v37 = o_sqrtf_0((float)(*(float *)(v76 + 4) * *(float *)(v76 + 4)) + (float)(*(float *)v76 * *(float *)v76));
    v38 = o_sqrtf_0((float)(v35 * v35) + (float)(v36 * v36));
LABEL_51:
    v25 = v25 / fminf(1000.0, fmaxf(v37, v38));
    goto LABEL_52;
  }
  v62 = *(_DWORD *)(v76 + 20);
  v63 = *(float *)v76;
  v64 = *(_DWORD *)(v76 + 16);
  v95.m12 = *(FLOAT *)(v76 + 4);
  v95.m21 = *(FLOAT *)(v76 + 12);
  v65 = *(float *)(v76 + 28);
  v95.m11 = v63;
  v66 = *(_DWORD *)(v76 + 48);
  v95.dy = v65;
  v67 = *(_DWORD *)(v76 + 52);
  v96 = v66;
  v68 = *(_DWORD *)(v76 + 60);
  v97 = v67;
  *(_QWORD *)&v95.m[1][1] = __PAIR64__(v62, v64);
  v98 = v68;
  if ( Matrix3x3::Get2DScaleDimensionsWithPerspective((__int64)&v95, (float *)&v73, (float *)&v74, (float *)&v94) )
  {
    v38 = *(float *)&v74;
    v37 = *(float *)&v73;
    goto LABEL_51;
  }
LABEL_52:
  if ( !*(_QWORD *)(a1 + 56) || *(_BYTE *)(a1 + 99) || (float)(*(float *)(a1 + 72) - v25) > 0.000081380211 )
  {
    v59 = (*(__int64 (__fastcall **)(__int64, struct CCpuClippingData *, __int64 *))(*(_QWORD *)v75 + 40LL))(
            v75,
            a2,
            &v76);
    v61 = v59;
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, v59, 0x131u);
      return v61;
    }
    v77 = (void (__fastcall ***)(_QWORD, __int64))v76;
    CShapePtr::Release((CShapePtr *)&v79);
    v24 = v75;
    v28 = 1;
    *(_BYTE *)(a1 + 99) = 1;
    goto LABEL_63;
  }
  v24 = v75;
LABEL_33:
  if ( !v21 )
  {
    v26 = v72;
    v27 = v77;
LABEL_35:
    v28 = 0;
    goto LABEL_36;
  }
  v28 = 0;
LABEL_63:
  *(_QWORD *)(a1 + 8) = *((_QWORD *)v9 + 588);
  *(_BYTE *)(a1 + 96) = v24 != 0;
  updated = CCpuClippingData::UpdateScopeTransforms((void **)a1, a2, (struct CVisual *)a3, v23);
  v26 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, updated, 0x144u);
    v27 = v77;
    goto LABEL_37;
  }
  CCpuClippingData::UpdateCachingGenerationId((CCpuClippingData *)a1, v40, p_Blink);
  v27 = v77;
  if ( v77 )
  {
    CShapePtr::Release((CShapePtr *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = v27;
    v27 = 0LL;
    *(_BYTE *)(a1 + 64) = v28;
    *(float *)(a1 + 72) = v25;
    goto LABEL_35;
  }
LABEL_36:
  *(_BYTE *)(a1 + 97) = v20;
  *(_WORD *)(a1 + 98) = 0;
  *(_BYTE *)(a1 + 100) = 0;
LABEL_37:
  if ( v28 )
  {
    if ( v27 )
      (**v27)(v27, 1LL);
  }
  return v26;
}
