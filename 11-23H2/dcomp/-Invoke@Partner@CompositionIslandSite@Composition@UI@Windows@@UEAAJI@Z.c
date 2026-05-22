/*
 * XREFs of ?Invoke@Partner@CompositionIslandSite@Composition@UI@Windows@@UEAAJI@Z @ 0x18015BEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?NotifyToIsland_DeferTransformChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAX_N@Z @ 0x18015BF40 (-NotifyToIsland_DeferTransformChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAX_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandSite::Partner::Invoke(
        Windows::UI::Composition::CompositionIslandSite::Partner *this,
        int a2)
{
  Windows::UI::Composition::CompositionIslandSite *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::CompositionIslandSite::Partner *)((char *)this - 144);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    if ( a2 == *((_DWORD *)v2 + 54) )
      Windows::UI::Composition::CompositionIslandSite::NotifyToIsland_DeferTransformChanged(v2, 0);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
