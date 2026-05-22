/*
 * XREFs of ?OnDisconnecting@VisualIslandSite@Composition@UI@Windows@@UEAAXXZ @ 0x1800117C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z @ 0x18006A86C (-RemoveChild@Visual@Composition@UI@Windows@@QEAAJPEAV1234@@Z.c)
 *     ?GetConnectionVisual@CompositionIslandSite@Composition@UI@Windows@@IEAAPEAVVisual@234@XZ @ 0x18008D008 (-GetConnectionVisual@CompositionIslandSite@Composition@UI@Windows@@IEAAPEAVVisual@234@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall Windows::UI::Composition::VisualIslandSite::OnDisconnecting(Windows::UI::Composition::Visual **this)
{
  struct Windows::UI::Composition::Visual *ConnectionVisual; // rax
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ConnectionVisual = Windows::UI::Composition::CompositionIslandSite::GetConnectionVisual((Windows::UI::Composition::CompositionIslandSite *)this);
  v3 = Windows::UI::Composition::Visual::RemoveChild(this[35], ConnectionVisual);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB5,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualislandsite.cpp",
      (const char *)(unsigned int)v3,
      v4);
}
