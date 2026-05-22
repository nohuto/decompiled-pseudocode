/*
 * XREFs of ?RuntimeClassInitialize@VisualTreeIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C848
 * Callers:
 *     ??$MakeAndInitialize2@VVisualTreeIsland@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualTreeIsland@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18006C420 (--$MakeAndInitialize2@VVisualTreeIsland@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Detail.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@_N@Z @ 0x18006BE40 (-AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivat.c)
 *     ?RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x18006C024 (-RuntimeClassInitialize@CompositionIsland@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 *     ??$MakeAndInitialize2@VCompositionAnchor@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnchor@Composition@UI@Windows@@$$QEAPEAVVisual@456@@Z @ 0x18006C734 (--$MakeAndInitialize2@VCompositionAnchor@Composition@UI@Windows@@V1234@PEAVVisual@234@@Details@W.c)
 *     ?CreateContainerVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVContainerVisual@234@@Z @ 0x18006C950 (-CreateContainerVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVContainerVisual@234@.c)
 *     ?NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z @ 0x18006D31C (-NotifyAnchorListening@Visual@Composition@UI@Windows@@QEAAXPEAVCompositionAnchor@234@_N@Z.c)
 *     ?SetBorderMode@Visual@Composition@UI@Windows@@QEAAJW4CompositionBorderMode@234@@Z @ 0x18006D7D0 (-SetBorderMode@Visual@Composition@UI@Windows@@QEAAJW4CompositionBorderMode@234@@Z.c)
 *     ?Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUnknown@@1_N@Z @ 0x18008002C (-Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUn.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::RuntimeClassInitialize(
        struct IUnknown *this,
        RTL_SRWLOCK **a2)
{
  int ContainerVisual; // ebx
  struct IUnknown **v5; // rsi
  struct CReadWriteLock *v6; // rdx
  struct Windows::UI::Composition::Compositor **v7; // rsi
  struct IUnknownVtbl *v8; // rbx
  int v9; // eax
  struct Windows::UI::Composition::CompositionAnchor *v10; // rdx
  const char *v11; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::UI::Composition::CompositionAnchor *v15; // [rsp+60h] [rbp+18h] BYREF
  struct Windows::UI::Composition::Compositor **v16; // [rsp+68h] [rbp+20h] BYREF

  ContainerVisual = Windows::UI::Composition::CompositionIsland::RuntimeClassInitialize(
                      (Windows::UI::Composition::CompositionIsland *)this,
                      a2);
  if ( ContainerVisual < 0 )
  {
    v13 = 48LL;
  }
  else
  {
    v5 = (struct IUnknown **)&this[68];
    ContainerVisual = Windows::UI::Composition::CompositorCommon::CreateContainerVisual(
                        (Windows::UI::Composition::CompositorCommon *)a2,
                        (struct Windows::UI::Composition::ContainerVisual **)&this[68]);
    if ( ContainerVisual < 0 )
    {
      v13 = 54LL;
    }
    else
    {
      LODWORD((*v5)[4].lpVtbl) |= 0x40u;
      HIDWORD((*v5)[32].lpVtbl) |= 0x10000u;
      Windows::UI::Composition::Visual::SetBorderMode(*v5, 1LL);
      Windows::UI::Composition::MapWeakPeerForWeakTargetBase::Configure(
        (Windows::UI::Composition::MapWeakPeerForWeakTargetBase *)&Windows::UI::Composition::CompositionIsland::s_mapWeakPeerToWeakIsland,
        v6,
        *v5,
        this,
        1);
      v7 = (struct Windows::UI::Composition::Compositor **)*v5;
      v15 = 0LL;
      v8 = (struct IUnknownVtbl *)v7[35];
      if ( v8 )
      {
        Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v7[35]);
        goto LABEL_6;
      }
      v16 = v7;
      v9 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionAnchor,Windows::UI::Composition::CompositionAnchor,Windows::UI::Composition::Visual *>(
             &v15,
             &v16);
      ContainerVisual = v9;
      if ( v9 >= 0 )
      {
        v8 = (struct IUnknownVtbl *)v15;
        v10 = v15;
        v7[35] = v15;
        Windows::UI::Composition::Visual::NotifyAnchorListening((Windows::UI::Composition::Visual *)v7, v10, 1);
LABEL_6:
        this[69].lpVtbl = v8;
        Windows::UI::Composition::CompositionAnchor::AddListener(
          (Windows::UI::Composition::Visual **)v8,
          (struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate *)((unsigned __int64)&this[66] & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
          0,
          v11);
        LOBYTE(this[70].lpVtbl) &= ~1u;
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualg.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v15);
      v13 = 61LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualtreeisland.cpp",
    (const char *)(unsigned int)ContainerVisual);
  return (unsigned int)ContainerVisual;
}
