/*
 * XREFs of ?put_IsSiteVisible@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJE@Z @ 0x18008CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIslandSite::Api::put_IsSiteVisible(
        Windows::UI::Composition::VisualIslandSite::Api *this,
        char a2)
{
  char *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // edi

  v2 = (char *)this - 248;
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 28);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v6 = 0;
    LOBYTE(v5) = a2 != 0;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 328LL))(v2, v5);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
