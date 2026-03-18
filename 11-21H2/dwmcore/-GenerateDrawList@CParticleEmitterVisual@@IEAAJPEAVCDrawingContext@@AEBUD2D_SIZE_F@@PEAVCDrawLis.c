/*
 * XREFs of ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18022F2B0
 * Callers:
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18022B570 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1801E308C (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@@Z @ 0x1801E8BF0 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x18022E834 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::GenerateDrawList(
        CParticleEmitterVisual *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int DrawList; // eax
  struct CDrawListPrimitive *v9; // rcx
  int ParticlesPrimitive; // ebx
  bool v11; // bl
  unsigned int i; // edi
  _BYTE *v13; // rsi
  __int64 v14; // rcx
  CGeometryOnlyDrawListBrush *v15; // r8
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  CGeometryOnlyDrawListBrush *v18; // rax
  __int128 v19; // xmm1
  int v20; // r9d
  __int64 v21; // rdi
  struct CDrawListPrimitive *v22; // rdx
  __int64 (__fastcall ***v23)(_QWORD, __int64); // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  struct CDrawListPrimitive *v28[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v29; // [rsp+40h] [rbp-C0h]
  CGeometryOnlyDrawListBrush *v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v31[2])(_QWORD, __int64); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33; // [rsp+70h] [rbp-90h]
  int v34; // [rsp+BCh] [rbp-44h]
  char v35; // [rsp+C0h] [rbp-40h]
  _BYTE v36[72]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v37; // [rsp+118h] [rbp+18h]
  _BYTE v38[40]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v39; // [rsp+148h] [rbp+48h]
  __int64 v40; // [rsp+150h] [rbp+50h]

  v30 = 0LL;
  v31[0] = 0LL;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v36, a2, a3);
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v38);
  v33 = 0;
  v32 = 0LL;
  v34 = 257;
  v35 = 0;
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v36);
  DrawList = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 104) + 312LL))(
               *((_QWORD *)this + 104),
               a2,
               a3);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v27 = 245;
    goto LABEL_34;
  }
  DrawList = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 104) + 320LL))(
               *((_QWORD *)this + 104),
               v36);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v27 = 246;
    goto LABEL_34;
  }
  v11 = 0;
  for ( i = 0; i < v37; ++i )
  {
    v13 = *(_BYTE **)&v36[8 * i + 40];
    if ( v13 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)&v36[8 * i + 40], 3LL) )
      {
        ParticlesPrimitive = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147467259, 0x101u);
        goto LABEL_36;
      }
      v11 = v11 || v13[52];
    }
  }
  HIWORD(v34) = 257;
  LOBYTE(v34) = 0;
  if ( !v11 )
  {
    v28[1] = 0LL;
    v28[0] = (struct CDrawListPrimitive *)&v30;
    v29 = 1;
    ParticlesPrimitive = CGeometryOnlyDrawListBrush::Create(&v28[1]);
    if ( v29 )
    {
      v9 = v28[0];
      v15 = *(CGeometryOnlyDrawListBrush **)v28[0];
      *(_QWORD *)v28[0] = v28[1];
      if ( v15 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1);
    }
    if ( ParticlesPrimitive < 0 )
    {
      v27 = 272;
LABEL_22:
      v20 = ParticlesPrimitive;
LABEL_35:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0LL, v20, v27);
      goto LABEL_36;
    }
    width = a3->width;
    height = a3->height;
    v18 = v30;
    v28[0] = 0LL;
    v28[1] = (struct CDrawListPrimitive *)__PAIR64__(LODWORD(height), LODWORD(width));
    v19 = *(_OWORD *)v28;
    *((_BYTE *)v30 + 52) = 1;
    *((_DWORD *)v18 + 12) = 50529027;
    *((_OWORD *)v18 + 2) = v19;
    *(_QWORD *)&v32 = v30;
  }
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)v36,
               (__int64)&v32,
               (struct CDrawListEntryBuilder *)v38);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v27 = 280;
LABEL_34:
    v20 = DrawList;
    goto LABEL_35;
  }
  if ( (unsigned int)((v40 - (__int64)v39) >> 3) != 1 )
  {
    ParticlesPrimitive = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0LL, -2147467259, 0x11Bu);
    goto LABEL_36;
  }
  v21 = *v39;
  v28[0] = (struct CDrawListPrimitive *)v31;
  v28[1] = 0LL;
  v29 = 1;
  v22 = *(struct CDrawListPrimitive **)(v21 + 64);
  *(_DWORD *)(v21 + 48) &= ~8u;
  ParticlesPrimitive = CParticleEmitterVisual::CreateParticlesPrimitive(this, v22, &v28[1]);
  if ( v29 )
  {
    v23 = *(__int64 (__fastcall ****)(_QWORD, __int64))v28[0];
    *(_QWORD *)v28[0] = v28[1];
    if ( v23 )
      std::default_delete<CDrawListPrimitive>::operator()((__int64)v9, v23);
  }
  if ( ParticlesPrimitive < 0 )
  {
    v27 = 293;
    goto LABEL_22;
  }
  CHWDrawListEntry::ReplacePrimitive(v21, (__int64 *)v28, (__int64 *)v31);
  if ( v28[0] )
    std::default_delete<CDrawListPrimitive>::operator()(v24, (__int64 (__fastcall ***)(_QWORD, __int64))v28[0]);
  CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v38);
LABEL_36:
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v38);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v36);
  if ( v31[0] )
    std::default_delete<CDrawListPrimitive>::operator()(v25, v31[0]);
  if ( v30 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v30, 1);
  return (unsigned int)ParticlesPrimitive;
}
