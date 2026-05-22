/*
 * XREFs of ?OnConnected@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x18008CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z @ 0x180061E08 (-InsertChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@_N0@Z.c)
 *     ?GetConnectionVisual@CompositionIslandSite@Composition@UI@Windows@@IEAAPEAVVisual@234@XZ @ 0x18008D008 (-GetConnectionVisual@CompositionIslandSite@Composition@UI@Windows@@IEAAPEAVVisual@234@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::VisualIslandSite::OnConnected(Windows::UI::Composition::Visual **this)
{
  struct Windows::UI::Composition::Visual *ConnectionVisual; // rax
  int inserted; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ConnectionVisual = Windows::UI::Composition::CompositionIslandSite::GetConnectionVisual((Windows::UI::Composition::CompositionIslandSite *)this);
  inserted = Windows::UI::Composition::Visual::InsertChild(this[35], ConnectionVisual, 0, 0LL);
  if ( inserted < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA7,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualislandsite.cpp",
      (const char *)(unsigned int)inserted,
      v4);
}
