/*
 * XREFs of ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18001CB34
 * Callers:
 *     ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44 (-GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUIComposition.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CompositionPointerEventRouter@Composition@UI@Windows@@QEAA@XZ @ 0x18001CBE4 (--0CompositionPointerEventRouter@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCompositionPointerEventRouter@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPointerEventRouter@Composition@UI@Windows@@@Z @ 0x18001CC34 (-Attach@-$ComPtr@VCompositionPointerEventRouter@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEA.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::ProxyObject **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionPointerEventRouter *v5; // rax
  Windows::UI::Composition::ProxyObject *v6; // rbx
  Windows::UI::Composition::ProxyObject *v7; // rcx
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Windows::UI::Composition::ProxyObject *v12; // [rsp+30h] [rbp+8h] BYREF
  void *v13; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v4 = DefaultHeap::Alloc(0xB8uLL);
  v13 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionPointerEventRouter *)memset_0(v4, 0, 0xB8uLL);
    if ( v5 )
      v5 = (Windows::UI::Composition::CompositionPointerEventRouter *)Windows::UI::Composition::CompositionPointerEventRouter::CompositionPointerEventRouter(v5);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionPointerEventRouter>::Attach(&v12, v5);
    v6 = v12;
    v13 = 0LL;
    v7 = v12;
    *((_QWORD *)v12 + 1) = &Windows::UI::Composition::CompositionPointerEventRouter::s_InterfaceType;
    v8 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(v7, *a2, 0x59u, 0);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
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
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return 2147942414LL;
  }
}
