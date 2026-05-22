/*
 * XREFs of ??$MakeAndInitialize2@VCompositionVisualSurface@Composition@UI@Windows@@V1234@PEAVCompositor@234@_N@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionVisualSurface@Composition@UI@Windows@@$$QEAPEAVCompositor@456@$$QEA_N@Z @ 0x18007FAFC
 * Callers:
 *     ?CreateVisualSurface@VisualSurface@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionVisualSurface@345@@Z @ 0x18007FA70 (-CreateVisualSurface@VisualSurface@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIComposi.c)
 *     ?CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPEAVCompositionVisualSurface@234@@Z @ 0x180094B24 (-CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ??0CompositionVisualSurface@Composition@UI@Windows@@QEAA@XZ @ 0x18007FBA8 (--0CompositionVisualSurface@Composition@UI@Windows@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionVisualSurface,Windows::UI::Composition::CompositionVisualSurface,Windows::UI::Composition::Compositor *,bool>(
        Windows::UI::Composition::ProxyObject **a1,
        struct Windows::UI::Composition::Compositor **a2,
        unsigned __int8 *a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionVisualSurface *v7; // rax
  Windows::UI::Composition::ProxyObject *v8; // rbx
  unsigned __int8 v9; // r9
  struct Windows::UI::Composition::Compositor *v10; // rdx
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v15; // [rsp+40h] [rbp+8h] BYREF
  Windows::UI::Composition::ProxyObject *v16; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v6 = DefaultHeap::Alloc(0xD8uLL);
  v15 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionVisualSurface *)memset_0(v6, 0, 0xD8uLL);
    if ( v7 )
      v8 = (Windows::UI::Composition::ProxyObject *)Windows::UI::Composition::CompositionVisualSurface::CompositionVisualSurface(v7);
    else
      v8 = 0LL;
    v15 = 0LL;
    *((_QWORD *)v8 + 1) = &Windows::UI::Composition::CompositionVisualSurface::s_InterfaceType;
    v9 = *a3;
    v10 = *a2;
    v16 = v8;
    v11 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(v8, v10, 202, v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionvisualsurface.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
      return v12;
    }
    else
    {
      *a1 = v8;
      return 0LL;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v16);
    return 2147942414LL;
  }
}
