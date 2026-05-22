/*
 * XREFs of ?DisconnectIslandAsync@CompositionIsland@Composition@UI@Windows@@SAJPEAVCompositionIslandSite@234@PEAV1234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180112418
 * Callers:
 *     ?Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ @ 0x1800098E0 (-Destroy@CompositionIsland@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800105AC (-Destroy@CompositionIslandSite@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?DisconnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@PEAPEAUIAsyncAction@Foundation@4@@Z @ 0x180112480 (-DisconnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIsl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@_N@Z @ 0x18011348C (-UpdateConnection_NoLock@CompositionIsland@Composition@UI@Windows@@CAJPEAUICompositionIslandSite.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIsland::DisconnectIslandAsync(
        struct Windows::UI::Composition::CompositionIslandSite *a1,
        struct Windows::UI::Composition::CompositionIsland *a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  int updated; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
    *a3 = 0LL;
  updated = Windows::UI::Composition::CompositionIsland::UpdateConnection_NoLock(
              (struct IUnknown *)(((unsigned __int64)a1 + 128) & -(__int64)(a1 != 0LL)),
              0LL,
              (bool)a3);
  v4 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x406,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositionisland.cpp",
    (const char *)(unsigned int)updated);
  return v4;
}
