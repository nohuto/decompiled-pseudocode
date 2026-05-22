/*
 * XREFs of ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18008ABA4
 * Callers:
 *     ?OpenSharedInteractionFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUICompositionInteractionPartner@345@@Z @ 0x18008AAD0 (-OpenSharedInteractionFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CompositionPointerEventRouter@Composition@UI@Windows@@QEAA@XZ @ 0x18001CBE4 (--0CompositionPointerEventRouter@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCompositionPointerEventRouter@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionPointerEventRouter@Composition@UI@Windows@@@Z @ 0x18001CC34 (-Attach@-$ComPtr@VCompositionPointerEventRouter@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEA.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z @ 0x18005C110 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@IPEAX_N@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::Compositor *,void * &>(
        Windows::UI::Composition::ProxyObject **a1,
        DirectComposition::CDevice ***a2,
        void **a3)
{
  void *v6; // rax
  Windows::UI::Composition::CompositionPointerEventRouter *v7; // rax
  Windows::UI::Composition::ProxyObject *v8; // rbx
  Windows::UI::Composition::ProxyObject *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Windows::UI::Composition::ProxyObject *v14; // [rsp+50h] [rbp+8h] BYREF
  void *v15; // [rsp+68h] [rbp+20h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v6 = DefaultHeap::Alloc(0xB8uLL);
  v15 = v6;
  if ( v6 )
  {
    v7 = (Windows::UI::Composition::CompositionPointerEventRouter *)memset_0(v6, 0, 0xB8uLL);
    if ( v7 )
      v7 = Windows::UI::Composition::CompositionPointerEventRouter::CompositionPointerEventRouter(v7);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionPointerEventRouter>::Attach(&v14, v7);
    v8 = v14;
    v15 = 0LL;
    v9 = v14;
    *((_QWORD *)v14 + 1) = &Windows::UI::Composition::CompositionPointerEventRouter::s_InterfaceType;
    v10 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(v9, *a2, 89, *a3, 0);
    v11 = v10;
    if ( v10 >= 0 )
    {
      *((_BYTE *)v8 + 176) |= 2u;
      result = 0LL;
      *a1 = v8;
      return result;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
  return v11;
}
