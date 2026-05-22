/*
 * XREFs of ??$MakeAndInitialize2@VCompositionColorGradientStop@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEBU_D3DCOLORVALUE@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionColorGradientStop@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAMAEBU_D3DCOLORVALUE@@@Z @ 0x18004514C
 * Callers:
 *     ?CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAPEAVCompositionColorGradientStop@234@@Z @ 0x180044FD4 (-CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAP.c)
 * Callees:
 *     ?RuntimeClassInitialize@CompositionColorGradientStop@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MAEBU_D3DCOLORVALUE@@@Z @ 0x180045030 (-RuntimeClassInitialize@CompositionColorGradientStop@Composition@UI@Windows@@QEAAJPEAVCompositor.c)
 *     ??0CompositionColorGradientStop@Composition@UI@Windows@@QEAA@XZ @ 0x180045100 (--0CompositionColorGradientStop@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionColorGradientStop,Windows::UI::Composition::CompositionColorGradientStop,Windows::UI::Composition::Compositor *,float &,_D3DCOLORVALUE const &>(
        Windows::UI::Composition::CompositionColorGradientStop **a1,
        struct Windows::UI::Composition::Compositor **a2,
        float *a3,
        void ***a4)
{
  HANDLE ProcessHeap; // rax
  void *v9; // rax
  Windows::UI::Composition::CompositionColorGradientStop *v10; // rax
  Windows::UI::Composition::CompositionColorGradientStop *v11; // rbx
  float v12; // xmm2_4
  struct Windows::UI::Composition::Compositor *v13; // rdx
  int v14; // edi
  Windows::UI::Composition::CompositionColorGradientStop *v16; // [rsp+20h] [rbp-28h] BYREF
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 0, 0xB0uLL);
  v17 = v9;
  if ( v9 )
  {
    v10 = (Windows::UI::Composition::CompositionColorGradientStop *)memset_0(v9, 0, 0xB0uLL);
    if ( v10 )
      v11 = Windows::UI::Composition::CompositionColorGradientStop::CompositionColorGradientStop(v10);
    else
      v11 = 0LL;
    v17 = 0LL;
    *((_QWORD *)v11 + 1) = &Windows::UI::Composition::CompositionColorGradientStop::s_InterfaceType;
    v12 = *a3;
    v13 = *a2;
    v16 = v11;
    v14 = Windows::UI::Composition::CompositionColorGradientStop::RuntimeClassInitialize(v11, v13, v12, a4);
    if ( v14 >= 0 )
    {
      *a1 = v11;
      return 0LL;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v17);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
  return (unsigned int)v14;
}
