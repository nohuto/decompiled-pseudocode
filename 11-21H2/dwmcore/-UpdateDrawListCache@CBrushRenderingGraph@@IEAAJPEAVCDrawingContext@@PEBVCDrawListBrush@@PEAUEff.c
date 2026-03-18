/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180086E30
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z @ 0x18005430C (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEBAJII@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802524EC (-RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectStage@@@Z @ 0x1800878C8 (--0CBrushRenderingEffectFactory@@QEAA@PEAVCDrawingContext@@PEAVCRenderingTechnique@@PEBUEffectSt.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800879D0 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B0AD8 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800D04C0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_ECColorDrawListBrush@@UEAAPEAXI@Z @ 0x1801E50F0 (--_ECColorDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x1801E5144 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct CDrawListBrush *a3,
        struct EffectStage *a4,
        struct CDrawListCache *a5)
{
  CDrawListCache *v5; // r14
  struct CDrawingContext *v8; // rdi
  struct D2D_SIZE_F v9; // rdx
  int v10; // r15d
  __int64 v11; // rsi
  struct CRenderingTechnique *v12; // r13
  char *v13; // rdi
  CSurfaceDrawListBrush *v14; // rcx
  int v15; // ebx
  CSurfaceDrawListBrush *v16; // r8
  CSurfaceDrawListBrush *v17; // rcx
  struct D2D_SIZE_F *v18; // rax
  CSurfaceDrawListBrush *v19; // rbx
  struct D2D_SIZE_F v20; // rdx
  unsigned int v21; // eax
  int DrawList; // eax
  __int64 v23; // rcx
  unsigned int v24; // edx
  __int64 i; // rcx
  __int64 v26; // rdi
  unsigned int *v27; // rsi
  __int64 v29; // rcx
  __int64 v30; // rcx
  CColorDrawListBrush *v31; // rcx
  CSurfaceDrawListBrush *v32; // rax
  __int64 v33; // rcx
  CSurfaceDrawListBrush *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_SIZE_F v35; // [rsp+38h] [rbp-C8h] BYREF
  struct CDrawingContext *v36; // [rsp+40h] [rbp-C0h]
  CSurfaceDrawListBrush **v37; // [rsp+48h] [rbp-B8h]
  struct CSurfaceDrawListBrush *v38; // [rsp+50h] [rbp-B0h] BYREF
  char v39; // [rsp+58h] [rbp-A8h]
  struct CDrawListCache *v40; // [rsp+60h] [rbp-A0h]
  const struct CDrawListBrush *v41; // [rsp+68h] [rbp-98h]
  _QWORD v42[2]; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+80h] [rbp-80h]
  int v44; // [rsp+CCh] [rbp-34h]
  char v45; // [rsp+D0h] [rbp-30h]
  CSurfaceDrawListBrush **v46; // [rsp+E0h] [rbp-20h] BYREF
  struct CColorDrawListBrush *v47; // [rsp+E8h] [rbp-18h] BYREF
  char v48; // [rsp+F0h] [rbp-10h]
  _BYTE v49[16]; // [rsp+100h] [rbp+0h] BYREF
  int v50; // [rsp+110h] [rbp+10h]
  int v51; // [rsp+114h] [rbp+14h]
  int v52; // [rsp+118h] [rbp+18h]
  int v53; // [rsp+11Ch] [rbp+1Ch]
  int v54; // [rsp+120h] [rbp+20h]
  _QWORD v55[4]; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v56; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v57[4432]; // [rsp+150h] [rbp+50h] BYREF

  v5 = a5;
  v40 = a5;
  v41 = a3;
  v8 = a2;
  v36 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v57);
  v35 = (struct D2D_SIZE_F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v49, v8, &v35);
  v10 = 0;
  v11 = 0LL;
  v12 = *(struct CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a4);
  if ( !*((_DWORD *)a4 + 1) )
  {
LABEL_20:
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = (int)FLOAT_1_0;
    v50 = v10;
    CBrushRenderingEffectFactory::CBrushRenderingEffectFactory(
      (CBrushRenderingEffectFactory *)&v46,
      *(struct CDrawingContext **)&v9,
      v12,
      a4);
    v43 = 0;
    v42[0] = v41;
    v44 = 257;
    v42[1] = &v46;
    v45 = 1;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v49,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v42,
                 (struct CDrawListEntryBuilder *)v57);
    v15 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, DrawList, 0x3FCu);
    }
    else
    {
      CDrawListCache::Update(v5, v8, (struct CDrawListEntryBuilder *)v57);
      v15 = 0;
    }
    goto LABEL_22;
  }
  while ( 1 )
  {
    v13 = (char *)a4 + 104 * (unsigned int)v11;
    if ( !v13[52] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v13 + 8) + 8LL))(
             *((_QWORD *)v13 + 8),
             2LL) )
      {
        v29 = *((_QWORD *)v13 + 8);
        if ( *(_BYTE *)(v29 + 52) )
        {
          if ( *((_BYTE *)v12 + 44 * (unsigned int)v11 + 78) )
            *(_BYTE *)(v29 + 52) = 0;
        }
      }
      v35 = (struct D2D_SIZE_F)*((_QWORD *)v13 + 8);
      CBrushDrawListGenerator::AttachInput(v49, (unsigned int)v11, &v35);
      v9 = v35;
      if ( v35 )
        ((void (__fastcall *)(_QWORD, _QWORD))std::default_delete<CDrawListBrush>::operator())(v30, v35);
      goto LABEL_18;
    }
    v34 = 0LL;
    if ( v13[53] )
      break;
    v38 = 0LL;
    v37 = &v34;
    v39 = 1;
    v15 = CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
            v12,
            v11,
            (const struct EffectInput *)(v13 + 8),
            &v38);
    if ( v39 )
    {
      v14 = *v37;
      *v37 = v38;
      if ( v14 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1u);
    }
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0LL, v15, 0x3C1u);
      if ( v34 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1u);
      goto LABEL_22;
    }
    v16 = v34;
    v17 = 0LL;
    v18 = (struct D2D_SIZE_F *)&v55[v11];
    v34 = 0LL;
    v19 = v16;
    if ( v18 != &v35 )
    {
      v20 = *v18;
      v19 = 0LL;
      *v18 = (struct D2D_SIZE_F)v16;
      if ( v20 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD))std::default_delete<CDrawListBrush>::operator())(0LL, v20);
        v17 = v34;
      }
    }
    v21 = v56;
    v9 = (struct D2D_SIZE_F)(unsigned int)(v11 + 1);
    if ( v56 <= LODWORD(v9.width) )
      v21 = v11 + 1;
    v56 = v21;
    if ( v19 )
    {
      std::default_delete<CDrawListBrush>::operator()(v17, v19);
      v17 = v34;
    }
    if ( *((_QWORD *)v36 + 23) && (v13[109] || v13[111]) )
      v10 |= 0x100u;
    if ( v17 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v17, 1u);
LABEL_18:
    v10 |= *((_DWORD *)v13 + 12);
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= *((_DWORD *)a4 + 1) )
    {
      v8 = v36;
      v5 = v40;
      goto LABEL_20;
    }
  }
  v47 = 0LL;
  v46 = &v34;
  v48 = 1;
  v15 = CColorDrawListBrush::Create((const struct _D3DCOLORVALUE *)v13 + 2, &v47);
  if ( v48 )
  {
    v31 = *v46;
    *v46 = v47;
    if ( v31 )
      CColorDrawListBrush::`vector deleting destructor'(v31, 1u);
  }
  if ( v15 >= 0 )
  {
    v32 = v34;
    v34 = 0LL;
    v35 = (struct D2D_SIZE_F)v32;
    CBrushDrawListGenerator::AttachInput(v49, (unsigned int)v11, &v35);
    v9 = v35;
    if ( v35 )
      ((void (__fastcall *)(_QWORD, _QWORD))std::default_delete<CDrawListBrush>::operator())(v33, v35);
    if ( v34 )
      CColorDrawListBrush::`vector deleting destructor'(v34, 1u);
    goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v31, 0LL, 0LL, v15, 0x3D2u);
  if ( v34 )
    CColorDrawListBrush::`vector deleting destructor'(v34, 1u);
LABEL_22:
  v24 = v56;
  for ( i = 0LL; (unsigned int)i < v24; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a4 + 104 * (unsigned int)i + 52) )
    {
      v55[i] = 0LL;
      v24 = v56;
    }
  }
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v49);
  v26 = 4LL;
  v27 = &v56;
  do
  {
    v27 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v27);
    --v26;
  }
  while ( v26 );
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v57);
  return (unsigned int)v15;
}
