/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x1800A94EC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18007AD18 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x1800A912C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800F3E24 (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1800188C4 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x180018970 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18006F200 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076B48 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18007C1C8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18007C360 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18007D62C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18007E858 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x1800A8DBC (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800A97B0 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x1800A9808 (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800A9858 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18011B4D0 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct CDrawListBrush *a3,
        struct EffectStage *a4,
        unsigned int a5,
        struct CDrawListCache *a6)
{
  CDrawListCache *v6; // rdi
  struct CDrawingContext *v10; // rdx
  unsigned int v11; // esi
  struct CRenderingTechnique *v13; // r13
  char *v14; // rdi
  CSurfaceDrawListBrush *v15; // rcx
  int v16; // ebx
  struct CDrawingContext *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  int DrawList; // eax
  __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 i; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  CColorDrawListBrush *v27; // rcx
  struct CDrawingContext *v28; // rax
  __int64 v29; // rcx
  CSurfaceDrawListBrush *v30; // [rsp+30h] [rbp-D0h] BYREF
  struct CDrawingContext *v31; // [rsp+38h] [rbp-C8h] BYREF
  CSurfaceDrawListBrush **v32; // [rsp+40h] [rbp-C0h]
  struct CSurfaceDrawListBrush *v33; // [rsp+48h] [rbp-B8h] BYREF
  char v34; // [rsp+50h] [rbp-B0h]
  struct CDrawListCache *v35; // [rsp+58h] [rbp-A8h]
  const struct CDrawListBrush *v36; // [rsp+60h] [rbp-A0h]
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+80h] [rbp-80h]
  int v39; // [rsp+CCh] [rbp-34h]
  char v40; // [rsp+D0h] [rbp-30h]
  CSurfaceDrawListBrush **v41; // [rsp+E0h] [rbp-20h] BYREF
  struct CColorDrawListBrush *v42; // [rsp+E8h] [rbp-18h] BYREF
  char v43; // [rsp+F0h] [rbp-10h]
  _BYTE v44[16]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+114h] [rbp+14h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  int v49; // [rsp+120h] [rbp+20h]
  _QWORD v50[4]; // [rsp+128h] [rbp+28h]
  unsigned int v51; // [rsp+148h] [rbp+48h]
  _BYTE v52[4480]; // [rsp+150h] [rbp+50h] BYREF

  v6 = a6;
  v35 = a6;
  v36 = a3;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v52);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v44, a2);
  v10 = (struct CDrawingContext *)*(unsigned int *)a4;
  v11 = 0;
  v13 = *(struct CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * (_QWORD)v10);
  if ( !*((_DWORD *)a4 + 1) )
  {
LABEL_15:
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = (int)FLOAT_1_0;
    v45 = a5;
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory((CBrushRenderingEffectFactory *)&v41, v10, v13, a4);
    v38 = 0;
    v37[0] = v36;
    v39 = 257;
    v37[1] = &v41;
    v40 = 1;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v44,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v37,
                 (struct CDrawListEntryBuilder *)v52,
                 v19);
    v16 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, DrawList, 0x3FEu, 0LL);
    }
    else
    {
      CDrawListCache::Update(v6, a2, (struct CDrawListEntryBuilder *)v52);
      v16 = 0;
    }
    goto LABEL_17;
  }
  while ( 1 )
  {
    v14 = (char *)a4 + 104 * v11;
    if ( !v14[52] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v14 + 8) + 8LL))(
             *((_QWORD *)v14 + 8),
             2LL) )
      {
        v25 = *((_QWORD *)v14 + 8);
        if ( *(_BYTE *)(v25 + 52) )
        {
          if ( *((_BYTE *)v13 + 44 * v11 + 94) )
            *(_BYTE *)(v25 + 52) = 0;
        }
      }
      v31 = (struct CDrawingContext *)*((_QWORD *)v14 + 8);
      CBrushDrawListGenerator::AttachInput(v44, v11, &v31);
      v10 = v31;
      if ( v31 )
        std::default_delete<CDrawListBrush>::operator()(v26, (__int64 (__fastcall ***)(_QWORD, __int64))v31);
      goto LABEL_13;
    }
    v30 = 0LL;
    if ( v14[53] )
      break;
    v33 = 0LL;
    v32 = &v30;
    v34 = 1;
    v16 = CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
            v13,
            v11,
            (const struct EffectInput *)(v14 + 8),
            &v33);
    if ( v34 )
    {
      v15 = *v32;
      *v32 = v33;
      if ( v15 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1u);
    }
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v16, 0x3C3u, 0LL);
      if ( v30 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1u);
      goto LABEL_17;
    }
    v17 = v30;
    v30 = 0LL;
    v31 = v17;
    CBrushDrawListGenerator::AttachInput(v44, v11, &v31);
    v10 = v31;
    if ( v31 )
      std::default_delete<CDrawListBrush>::operator()(v18, (__int64 (__fastcall ***)(_QWORD, __int64))v31);
    if ( *((_QWORD *)a2 + 26) && (v14[109] || v14[111]) )
      a5 |= 0x100u;
    if ( v30 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v30, 1u);
LABEL_13:
    a5 |= *((_DWORD *)v14 + 12);
    if ( ++v11 >= *((_DWORD *)a4 + 1) )
    {
      v6 = v35;
      goto LABEL_15;
    }
  }
  v42 = 0LL;
  v41 = &v30;
  v43 = 1;
  v16 = CColorDrawListBrush::Create((struct _D3DCOLORVALUE *)v14 + 2, &v42);
  if ( v43 )
  {
    v27 = *v41;
    *v41 = v42;
    if ( v27 )
      CColorDrawListBrush::`vector deleting destructor'(v27, 1);
  }
  if ( v16 >= 0 )
  {
    v28 = v30;
    v30 = 0LL;
    v31 = v28;
    CBrushDrawListGenerator::AttachInput(v44, v11, &v31);
    v10 = v31;
    if ( v31 )
      std::default_delete<CDrawListBrush>::operator()(v29, (__int64 (__fastcall ***)(_QWORD, __int64))v31);
    if ( v30 )
      CColorDrawListBrush::`vector deleting destructor'(v30, 1);
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v27, 0LL, 0, v16, 0x3D4u, 0LL);
  if ( v30 )
    CColorDrawListBrush::`vector deleting destructor'(v30, 1);
LABEL_17:
  v22 = v51;
  for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a4 + 104 * (unsigned int)i + 52) )
    {
      v50[i] = 0LL;
      v22 = v51;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v44);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v52);
  return (unsigned int)v16;
}
