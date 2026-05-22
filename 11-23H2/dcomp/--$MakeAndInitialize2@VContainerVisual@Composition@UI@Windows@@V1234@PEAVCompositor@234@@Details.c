/*
 * XREFs of ??$MakeAndInitialize2@VContainerVisual@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVContainerVisual@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006CD9C
 * Callers:
 *     ?CreateContainerVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVContainerVisual@234@@Z @ 0x18006C950 (-CreateContainerVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVContainerVisual@234@.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006CB30 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VDesktopWindowTarget@Desktop@Composition@UI@Windo.c)
 *     ?OnSetRootImpl@?$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@@@Desktop@Composition@UI@Windows@@MEAAJPEAVVisual@345@_N@Z @ 0x18006D130 (-OnSetRootImpl@-$GlobalDesktopWindowTargetImpl@VInteropCompositionTarget@Composition@UI@Windows@.c)
 *     ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z @ 0x180196AD4 (-RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUIC.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0ContainerVisual@Composition@UI@Windows@@QEAA@XZ @ 0x18006CFEC (--0ContainerVisual@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z @ 0x18006D024 (-RuntimeClassInitialize@ContainerVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z.c)
 *     ?Attach@?$ComPtr@VContainerVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVContainerVisual@Composition@UI@Windows@@@Z @ 0x18006D054 (-Attach@-$ComPtr@VContainerVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVContainerVisu.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::ContainerVisual,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::ContainerVisual **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::ContainerVisual *v5; // rax
  Windows::UI::Composition::ContainerVisual *v6; // rbx
  Windows::UI::Composition::ContainerVisual *v7; // rcx
  int v8; // edi
  Windows::UI::Composition::ContainerVisual *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v10 = 0LL;
  v4 = DefaultHeap::Alloc(0x138uLL);
  v11 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::ContainerVisual *)memset_0(v4, 0, 0x138uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::ContainerVisual *)Windows::UI::Composition::ContainerVisual::ContainerVisual(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ContainerVisual>::Attach(&v10, v5);
    v6 = v10;
    v11 = 0LL;
    v7 = v10;
    *((_QWORD *)v10 + 1) = &Windows::UI::Composition::ContainerVisual::s_InterfaceType;
    v8 = Windows::UI::Composition::ContainerVisual::RuntimeClassInitialize(v7, *a2, 0xC4u);
    if ( v8 >= 0 )
    {
      *a1 = v6;
      return 0LL;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v11);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v10);
  return (unsigned int)v8;
}
