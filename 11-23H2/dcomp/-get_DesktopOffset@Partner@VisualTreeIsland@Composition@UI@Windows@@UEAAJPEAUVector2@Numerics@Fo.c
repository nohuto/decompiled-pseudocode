/*
 * XREFs of ?get_DesktopOffset@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z @ 0x180159E30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x180159DA8 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::Partner::get_DesktopOffset(
        Windows::UI::Composition::VisualTreeIsland::Partner *this,
        struct Windows::Foundation::Numerics::Vector2 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  const char *v7; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 61);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 480) & 2) != 0 )
  {
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0xC0,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualtreeisland.cpp",
      (const char *)((*((_BYTE *)this + 48) & 1) == 0),
      (__int64)"Must EnableDesktopOffset before using",
      v7);
    *(_QWORD *)a2 = *(_QWORD *)(*((_QWORD *)this + 5) + 164LL);
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
