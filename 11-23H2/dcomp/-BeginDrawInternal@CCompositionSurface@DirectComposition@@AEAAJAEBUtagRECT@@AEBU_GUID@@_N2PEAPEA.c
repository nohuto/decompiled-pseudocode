/*
 * XREFs of ?BeginDrawInternal@CCompositionSurface@DirectComposition@@AEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAPEAXPEAI4PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x1800EB1AC
 * Callers:
 *     ?Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z @ 0x1800EBD80 (-Scroll@CCompositionSurface@DirectComposition@@UEAAJPEBUtagRECT@@0HH@Z.c)
 * Callees:
 *     ?CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x18002FFB8 (-CreateFlipUpdate@CBitmapInfoFront@DirectComposition@@QEAAJPEAUIDCompositionSurface@@AEBUtagRECT.c)
 *     ?CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAUIDCompositionSurface@@PEAPEAVCBitmapInfoBack@2@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180037708 (-CreateInPlaceUpdate@CBitmapInfoFront@DirectComposition@@QEAAJAEBUtagRECT@@W4AtlasUseType@2@PEAU.c)
 *     ?BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_GUTTERS@@PEAPEAXPEAI5@Z @ 0x180037864 (-BeginDraw@CBitmapInfoBack@DirectComposition@@QEAAJAEBUtagRECT@@AEBU_GUID@@_N2PEAUDCOMPOSITION_G.c)
 *     ??$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectComposition@@@Z @ 0x1800388FC (--$ReleaseInterface@VCBitmapInfoBack@DirectComposition@@@@YAXAEAPEAVCBitmapInfoBack@DirectCompos.c)
 *     ?EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ @ 0x180038924 (-EndDraw@CBitmapInfoBack@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionSurface::BeginDrawInternal(
        DirectComposition::CCompositionSurface *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        bool a4,
        bool a5,
        void **a6,
        unsigned int *a7,
        unsigned int *a8,
        struct DCOMPOSITION_GUTTERS *a9)
{
  struct DCOMPOSITION_GUTTERS *v9; // rbp
  DirectComposition::CBitmapInfoBack **v10; // rdi
  char v14; // si
  DirectComposition::CBitmapInfoFront *v15; // rax
  int FlipUpdate; // eax
  int v17; // ebx
  int v19; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0;
  v9 = (struct DCOMPOSITION_GUTTERS *)&v19;
  v10 = (DirectComposition::CBitmapInfoBack **)((char *)this + 48);
  if ( !a4 )
    v9 = a9;
  if ( *v10 )
  {
    v14 = 0;
    DirectComposition::CBitmapInfoBack::EndDraw(*v10);
  }
  else
  {
    v15 = (DirectComposition::CBitmapInfoFront *)*((_QWORD *)this + 5);
    v14 = 1;
    if ( (*((_BYTE *)v15 + 112) & 1) != 0 )
      FlipUpdate = DirectComposition::CBitmapInfoFront::CreateFlipUpdate(v15, this, a2, v10, v9);
    else
      FlipUpdate = DirectComposition::CBitmapInfoFront::CreateInPlaceUpdate(
                     (__int64)v15,
                     a2,
                     3,
                     (int)this,
                     (DirectComposition::CBitmapInfoFront *)v10,
                     v9);
    v17 = FlipUpdate;
    if ( FlipUpdate < 0 )
      goto LABEL_11;
  }
  v17 = DirectComposition::CBitmapInfoBack::BeginDraw(*v10, a2, a3, a4, 1, v9, a6, a7, a8);
  if ( v17 < 0 && v14 )
LABEL_11:
    ReleaseInterface<DirectComposition::CBitmapInfoBack>((__int64 *)v10);
  return (unsigned int)v17;
}
