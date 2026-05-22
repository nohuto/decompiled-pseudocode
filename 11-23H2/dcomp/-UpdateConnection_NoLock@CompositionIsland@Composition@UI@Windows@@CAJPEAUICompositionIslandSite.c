/*
 * XREFs of ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C
 * Callers:
 *     ?ConnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180111890 (-ConnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIsland.c)
 *     ?DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180112418 (-DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@23.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@PEAPEAV1234@PEAV1234@PEA_NPEAPEAX@Z @ 0x1801119D8 (-Connection_2_ReconfigureIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICom.c)
 *     ?Connection_3_ReconfigureOldIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAV1234@_N@Z @ 0x180111CB8 (-Connection_3_ReconfigureOldIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAV1234@.c)
 *     ?Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@PEAX@Z @ 0x180111E48 (-Connection_4_ReconfigureIsland_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVComposit.c)
 *     ?Connection_5_CompleteIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVCompositionIslandSite@234@PEAV1234@@Z @ 0x18011206C (-Connection_5_CompleteIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAVComposi.c)
 *     ?GetIsland_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIsland@234@PEAPEAV1234@@Z @ 0x1801129F8 (-GetIsland_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIsland@234@PEAPEA.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::UpdateConnection_NoLock(
        struct IUnknown *a1,
        struct IUnknown *a2,
        bool a3)
{
  struct Windows::UI::Composition::Compositor **v3; // rdi
  int Island_NoLock; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v9; // rbx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // edi
  struct Windows::UI::Composition::CompositionIsland *v15; // [rsp+30h] [rbp-10h] BYREF
  void *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::UI::Composition::CompositionIsland *v18; // [rsp+68h] [rbp+28h] BYREF
  bool v19; // [rsp+70h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v20; // [rsp+78h] [rbp+38h] BYREF

  v19 = a3;
  v3 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    Island_NoLock = Windows::UI::Composition::CompositionIsland::GetIsland_NoLock(a2, &v15);
    v6 = Island_NoLock;
    if ( Island_NoLock < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x326,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)Island_NoLock);
      goto LABEL_20;
    }
    v3 = (struct Windows::UI::Composition::Compositor **)v15;
  }
  v20 = 0LL;
  v18 = 0LL;
  v7 = Windows::UI::Composition::CompositionIsland::Connection_2_ReconfigureIslandSite_NoLock(
         a1,
         &v20,
         &v18,
         v3,
         &v19,
         &v16);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = 826LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
    goto LABEL_20;
  }
  if ( v18 )
  {
    v7 = Windows::UI::Composition::CompositionIsland::Connection_3_ReconfigureOldIsland_NoLock((struct IUnknown *)v18);
    v6 = v7;
    if ( v7 < 0 )
    {
      v8 = 832LL;
      goto LABEL_7;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
  }
  v9 = v20;
  if ( v19 )
  {
    v10 = Windows::UI::Composition::CompositionIsland::Connection_4_ReconfigureIsland_NoLock(
            v20,
            (struct Windows::UI::Composition::CompositionIsland *)v3,
            v16);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
      v6 = v11;
      goto LABEL_20;
    }
    v12 = Windows::UI::Composition::CompositionIsland::Connection_5_CompleteIslandSite_NoLock(
            v9,
            (struct Windows::UI::Composition::CompositionIsland *)v3);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x357,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v20);
      v6 = v13;
      goto LABEL_20;
    }
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v18);
  if ( v9 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  v6 = 0;
LABEL_20:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v15);
  return v6;
}
