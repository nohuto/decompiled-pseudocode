/*
 * XREFs of ?CreateCompositionSurfaceForHandle@CompositorCommon@Composition@UI@Windows@@QEAAJPEAXPEAPEAUICompositionSurface@234@@Z @ 0x1801255A8
 * Callers:
 *     ?CreateCompositionSurfaceForHandle@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAXPEAPEAUICompositionSurface@345@@Z @ 0x18010ECB0 (-CreateCompositionSurfaceForHandle@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAXPEAPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ??$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionSwapChain@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x180120774 (--$MakeAndInitialize2@VCompositionSwapChain@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEA.c)
 *     ??$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionSwapChain@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801223CC (--$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionSwapChain@Composition@UI@Windo.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::CreateCompositionSurfaceForHandle(
        Windows::UI::Composition::CompositorCommon *this,
        void *a2,
        struct Windows::UI::Composition::ICompositionSurface **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::ICompositionSurface *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionSurface *v10; // [rsp+40h] [rbp+20h] BYREF
  void *v11; // [rsp+48h] [rbp+28h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+50h] [rbp+30h] BYREF
  struct Windows::UI::Composition::Compositor *v13; // [rsp+58h] [rbp+38h] BYREF

  v11 = a2;
  *a3 = 0LL;
  v12 = 0LL;
  v13 = this;
  v4 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionSwapChain,Windows::UI::Composition::CompositionSwapChain,Windows::UI::Composition::Compositor *,void * &>(
         &v12,
         &v13,
         &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v12;
    v10 = 0LL;
    Windows::UI::Composition::CompositionSwapChain::ToApi<Windows::UI::Composition::ICompositionSurface>(
      v12,
      (__int64 *)&v10);
    v8 = v10;
    v10 = 0LL;
    *a3 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
    if ( v7 )
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D5,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v12);
    return v5;
  }
}
