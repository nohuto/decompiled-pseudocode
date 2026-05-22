/*
 * XREFs of ?RuntimeClassInitialize@CompositionHoverPointerSource@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVVisual@234@@Z @ 0x18008923C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionHoverPointerSource@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionHoverPointerSource@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAVVisual@456@@Z @ 0x180089180 (--$MakeAndInitialize2@VCompositionHoverPointerSource@Composition@UI@Windows@@V1234@PEAVComposito.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44 (-GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUIComposition.c)
 *     ?RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z @ 0x180058D30 (-RuntimeClassInitialize@ProxyObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I_N@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetHoverPointerSource@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAXPEAVCompositionHoverPointerSource@234@@Z @ 0x180089300 (-SetHoverPointerSource@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAXPEAVCompositio.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionHoverPointerSource::RuntimeClassInitialize(
        struct Microsoft::WRL2::ContextSession **this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::Visual *a3)
{
  int NonDefaultPointerEventRouter; // eax
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  int v9; // edi
  __int64 v11; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v12[0] = 0LL;
  NonDefaultPointerEventRouter = Windows::UI::Composition::ProxyObject::RuntimeClassInitialize(
                                   (Windows::UI::Composition::ProxyObject *)this,
                                   a2,
                                   82,
                                   0);
  v6 = NonDefaultPointerEventRouter;
  if ( NonDefaultPointerEventRouter < 0 )
  {
    v11 = 55LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrthoverpointersource.cpp",
      (const char *)(unsigned int)NonDefaultPointerEventRouter);
LABEL_12:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v12);
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
  NonDefaultPointerEventRouter = Windows::UI::Composition::Visual::GetOrCreateNonDefaultPointerEventRouter(
                                   a3,
                                   (struct Windows::UI::Composition::ICompositionInteractionPartner **)&v14);
  v6 = NonDefaultPointerEventRouter;
  if ( NonDefaultPointerEventRouter < 0 )
  {
    v11 = 57LL;
    goto LABEL_10;
  }
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         this[3],
         v14,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionPointerEventRouter::s_InterfaceType,
         v12);
  v8 = v12[0];
  v9 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrthoverpointersource.cpp",
      (const char *)(unsigned int)v7);
    v6 = v9;
    goto LABEL_12;
  }
  Windows::UI::Composition::CompositionPointerEventRouter::SetHoverPointerSource(
    v12[0],
    (struct Windows::UI::Composition::CompositionHoverPointerSource *)this);
  if ( v8 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  v6 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v14);
  return v6;
}
