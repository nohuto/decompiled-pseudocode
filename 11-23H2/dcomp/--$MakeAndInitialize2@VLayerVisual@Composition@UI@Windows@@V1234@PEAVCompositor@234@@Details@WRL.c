/*
 * XREFs of ??$MakeAndInitialize2@VLayerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVLayerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CEE0
 * Callers:
 *     ?CreateLayerVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUILayerVisual@345@@Z @ 0x18006CE50 (-CreateLayerVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUILayerVisual@345@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0LayerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CF88 (--0LayerVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18006D024 (-RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::LayerVisual,Windows::UI::Composition::LayerVisual,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::ContainerVisual **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::LayerVisual *v5; // rax
  Windows::UI::Composition::ContainerVisual *v6; // rbx
  struct Windows::UI::Composition::Compositor *v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::ContainerVisual *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v13 = 0LL;
  v4 = DefaultHeap::Alloc(0x170uLL);
  v12 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::LayerVisual *)memset_0(v4, 0, 0x170uLL);
    if ( v5 )
      v6 = (Windows::UI::Composition::ContainerVisual *)Windows::UI::Composition::LayerVisual::LayerVisual(v5);
    else
      v6 = 0LL;
    v12 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::LayerVisual::s_InterfaceType;
    v7 = *a2;
    v13 = v6;
    v8 = Windows::UI::Composition::ContainerVisual::RuntimeClassInitialize(v6, v7, 0x5Du);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtlayervisual.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
      return v9;
    }
    else
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    return 2147942414LL;
  }
}
