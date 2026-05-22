/*
 * XREFs of ?ConnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180111890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?GetIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@@Z @ 0x1801128EC (-GetIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIslandSite@23.c)
 *     ?GetIsland_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIsland@234@PEAPEAV1234@@Z @ 0x1801129F8 (-GetIsland_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIsland@234@PEAPEA.c)
 *     ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C (-UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandStatics::ConnectIslandAsync(
        Windows::UI::Composition::CompositionIslandStatics *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  int IslandSite_NoLock; // eax
  unsigned int v7; // ebx
  int Island_NoLock; // eax
  struct Windows::UI::Composition::CompositionIsland *v9; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rbx
  int updated; // eax
  unsigned int v12; // edi
  struct Windows::UI::Composition::CompositionIsland *v14; // [rsp+20h] [rbp-18h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v15[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v15[0] = 0LL;
  IslandSite_NoLock = Windows::UI::Composition::CompositionIsland::GetIslandSite_NoLock(a2, v15);
  v7 = IslandSite_NoLock;
  if ( IslandSite_NoLock < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)IslandSite_NoLock);
LABEL_9:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v15);
    return v7;
  }
  v14 = 0LL;
  Island_NoLock = Windows::UI::Composition::CompositionIsland::GetIsland_NoLock(a3, &v14);
  v7 = Island_NoLock;
  if ( Island_NoLock < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)Island_NoLock);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
    goto LABEL_9;
  }
  v9 = v14;
  v10 = v15[0];
  if ( a4 )
    *a4 = 0LL;
  updated = Windows::UI::Composition::CompositionIsland::UpdateConnection_NoLock(
              (struct IUnknown *)(-(__int64)(v10 != 0LL) & ((unsigned __int64)v10 + 128)),
              (struct IUnknown *)(((unsigned __int64)v9 + 128) & -(__int64)(v9 != 0LL)),
              -(v10 != 0LL));
  v12 = updated;
  if ( updated < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3EA,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)updated);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x891,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)v12);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
    v7 = v12;
    goto LABEL_9;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v14);
  if ( v10 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
  return 0LL;
}
