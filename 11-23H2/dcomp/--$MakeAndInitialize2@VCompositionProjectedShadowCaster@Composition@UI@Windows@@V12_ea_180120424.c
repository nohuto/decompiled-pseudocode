/*
 * XREFs of ??$MakeAndInitialize2@VCompositionProjectedShadowCaster@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180120424
 * Callers:
 *     ?OpenClientProjectedShadowCasterFromHandle@VelocityPartnerProjectedShadow@CompositorCommon@Composition@UI@Windows@@UEAAJ_KPEAPEAUICompositionProjectedShadowCaster@345@@Z @ 0x1801286E0 (-OpenClientProjectedShadowCasterFromHandle@VelocityPartnerProjectedShadow@CompositorCommon@Compo.c)
 * Callees:
 *     ??0CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAA@XZ @ 0x1800072E4 (--0CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositionProjectedShadowCaster@Composition@UI@Windows@@@Z @ 0x180007968 (-Attach@-$ComPtr@VCompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL@Microsoft@@QEAAX.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?RuntimeClassInitialize@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z @ 0x180183E6C (-RuntimeClassInitialize@CompositionProjectedShadowCaster@Composition@UI@Windows@@QE_ea_180183E6C.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowCaster,Windows::UI::Composition::CompositionProjectedShadowCaster,Windows::UI::Composition::Compositor *,void * &>(
        Windows::UI::Composition::CompositionProjectedShadowCaster **a1,
        struct Windows::UI::Composition::Compositor **a2,
        void **a3)
{
  void *v6; // rax
  int v7; // edi
  Windows::UI::Composition::CompositionProjectedShadowCaster *v8; // rax
  Windows::UI::Composition::CompositionProjectedShadowCaster *v9; // rbx
  Windows::UI::Composition::CompositionProjectedShadowCaster *v10; // rcx
  Windows::UI::Composition::CompositionProjectedShadowCaster *v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v12 = 0LL;
  v6 = DefaultHeap::Alloc(0xD0uLL);
  v13 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
LABEL_6:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return (unsigned int)v7;
  }
  v8 = (Windows::UI::Composition::CompositionProjectedShadowCaster *)memset_0(v6, 0, 0xD0uLL);
  if ( v8 )
    v8 = Windows::UI::Composition::CompositionProjectedShadowCaster::CompositionProjectedShadowCaster(v8);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::CompositionProjectedShadowCaster>::Attach(&v12, v8);
  v9 = v12;
  v13 = 0LL;
  v10 = v12;
  *((_QWORD *)v12 + 1) = &Windows::UI::Composition::CompositionProjectedShadowCaster::s_InterfaceType;
  v7 = Windows::UI::Composition::CompositionProjectedShadowCaster::RuntimeClassInitialize(v10, *a2, *a3);
  if ( v7 < 0 )
    goto LABEL_6;
  *a1 = v9;
  return 0LL;
}
