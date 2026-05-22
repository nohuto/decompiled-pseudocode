/*
 * XREFs of ?DisconnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180112480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180112418 (-DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@23.c)
 *     ?GetIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIslandSite@234@PEAPEAVCompositionIslandSite@234@@Z @ 0x1801128EC (-GetIslandSite_NoLock@CompositionIsland@Composition@UI@Windows@@SAJPEAUICompositionIslandSite@23.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandStatics::DisconnectIslandAsync(
        Windows::UI::Composition::CompositionIslandStatics *this,
        struct IUnknown *a2,
        struct Windows::UI::Composition::ICompositionIsland *a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  int IslandSite_NoLock; // eax
  struct Windows::UI::Composition::CompositionIsland *v6; // rdx
  unsigned int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rbx
  int v9; // eax
  int v10; // edi
  Microsoft::WRL2::NestableRuntimeClass *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v12[0] = 0LL;
  IslandSite_NoLock = Windows::UI::Composition::CompositionIsland::GetIslandSite_NoLock(a2, v12);
  v7 = IslandSite_NoLock;
  if ( IslandSite_NoLock < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)IslandSite_NoLock);
LABEL_5:
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(v12);
    return v7;
  }
  v8 = v12[0];
  v9 = Windows::UI::Composition::CompositionIsland::DisconnectIslandAsync(v12[0], v6, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8AC,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
      (const char *)(unsigned int)v9);
    v7 = v10;
    goto LABEL_5;
  }
  if ( v8 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  return 0LL;
}
