/*
 * XREFs of ??$MakeAndInitialize2@VCompositionProjectedShadowReceiver@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiver@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x180006870
 * Callers:
 *     ?CreateProjectedShadowReceiver@VelocityProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiver@345@@Z @ 0x1800067B0 (-CreateProjectedShadowReceiver@VelocityProjectedShadow@CompositorCommon@Composition@UI@Windows@@.c)
 * Callees:
 *     ??0CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAA@XZ @ 0x18000799C (--0CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowReceiver,Windows::UI::Composition::CompositionProjectedShadowReceiver,Windows::UI::Composition::Compositor *>(
        Windows::UI::Composition::ProxyObject **a1,
        struct Windows::UI::Composition::Compositor **a2)
{
  void *v4; // rax
  Windows::UI::Composition::CompositionProjectedShadowReceiver *v5; // rax
  Windows::UI::Composition::ProxyObject *v6; // rbx
  struct Windows::UI::Composition::Compositor *v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v13; // [rsp+30h] [rbp+8h] BYREF
  Windows::UI::Composition::ProxyObject *v14; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v14 = 0LL;
  v4 = DefaultHeap::Alloc(0xC0uLL);
  v13 = v4;
  if ( v4 )
  {
    v5 = (Windows::UI::Composition::CompositionProjectedShadowReceiver *)memset_0(v4, 0, 0xC0uLL);
    if ( v5 )
      v6 = (Windows::UI::Composition::ProxyObject *)Windows::UI::Composition::CompositionProjectedShadowReceiver::CompositionProjectedShadowReceiver(v5);
    else
      v6 = 0LL;
    v13 = 0LL;
    *((_QWORD *)v6 + 1) = &Windows::UI::Composition::CompositionProjectedShadowReceiver::s_InterfaceType;
    v7 = *a2;
    v14 = v6;
    v8 = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(v6, v7, 0x84u, 0);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionprojectedshadowreceiver.cpp",
        (const char *)(unsigned int)v8,
        v11);
      Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
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
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v14);
    return 2147942414LL;
  }
}
