/*
 * XREFs of ?get_IsSiteVisible@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJPEAE@Z @ 0x18015AC00
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIslandSite::Api::get_IsSiteVisible(
        Windows::UI::Composition::VisualIslandSite::Api *this,
        unsigned __int8 *a2)
{
  char *v2; // rsi
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v2 = (char *)this - 248;
  v3 = 0;
  *a2 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 28);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v2[32] & 2) != 0 )
  {
    *a2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 320LL))(v2);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
