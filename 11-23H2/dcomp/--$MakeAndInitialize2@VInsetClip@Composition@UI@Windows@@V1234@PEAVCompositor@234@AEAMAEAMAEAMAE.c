/*
 * XREFs of ??$MakeAndInitialize2@VInsetClip@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAMAEAMAEAMAEAM@Details@WRL2@Microsoft@@YAJPEAPEAVInsetClip@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAM222@Z @ 0x18006FB34
 * Callers:
 *     ?CreateInsetClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMPEAPEAVInsetClip@234@@Z @ 0x18006FABC (-CreateInsetClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMPEAPEAVInsetClip@234@@Z.c)
 * Callees:
 *     ??0InsetClip@Composition@UI@Windows@@QEAA@XZ @ 0x18006FC28 (--0InsetClip@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InsetClip@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMM@Z @ 0x18006FC90 (-RuntimeClassInitialize@InsetClip@Composition@UI@Windows@@QEAAJPEAVCompositor@234@MMMM@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InsetClip,Windows::UI::Composition::InsetClip,Windows::UI::Composition::Compositor *,float &,float &,float &,float &>(
        Windows::UI::Composition::InsetClip **a1,
        struct Windows::UI::Composition::Compositor **a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6)
{
  HANDLE ProcessHeap; // rax
  void *v11; // rax
  Windows::UI::Composition::InsetClip *v12; // rax
  Windows::UI::Composition::InsetClip *v13; // rbx
  float v14; // xmm3_4
  float v15; // xmm2_4
  struct Windows::UI::Composition::Compositor *v16; // rdx
  int v17; // edi
  float v19; // [rsp+28h] [rbp-30h]
  Windows::UI::Composition::InsetClip *v20; // [rsp+30h] [rbp-28h] BYREF
  void *v21; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v20 = 0LL;
  ProcessHeap = GetProcessHeap();
  v11 = HeapAlloc(ProcessHeap, 0, 0xD8uLL);
  v21 = v11;
  if ( v11 )
  {
    v12 = (Windows::UI::Composition::InsetClip *)memset_0(v11, 0, 0xD8uLL);
    if ( v12 )
      v13 = (Windows::UI::Composition::InsetClip *)Windows::UI::Composition::InsetClip::InsetClip(v12);
    else
      v13 = 0LL;
    v21 = 0LL;
    *((_QWORD *)v13 + 1) = &Windows::UI::Composition::InsetClip::s_InterfaceType;
    v14 = *a4;
    v15 = *a3;
    v16 = *a2;
    v19 = *a6;
    v20 = v13;
    v17 = Windows::UI::Composition::InsetClip::RuntimeClassInitialize(v13, v16, v15, v14, *a5, v19);
    if ( v17 >= 0 )
    {
      *a1 = v13;
      return 0LL;
    }
  }
  else
  {
    v17 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v21);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
  return (unsigned int)v17;
}
