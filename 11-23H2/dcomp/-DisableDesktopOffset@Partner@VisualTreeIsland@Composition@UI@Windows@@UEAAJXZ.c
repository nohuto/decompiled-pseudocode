/*
 * XREFs of ?DisableDesktopOffset@Partner@VisualTreeIsland@Composition@UI@Windows@@UEAAJXZ @ 0x180159D40
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::Partner::DisableDesktopOffset(
        Windows::UI::Composition::VisualTreeIsland::Partner *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // edi

  v1 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 61);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v1);
  if ( (*((_BYTE *)this - 480) & 2) != 0 )
  {
    *((_BYTE *)this + 48) &= ~1u;
    v3 = 0;
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v1);
  return v3;
}
