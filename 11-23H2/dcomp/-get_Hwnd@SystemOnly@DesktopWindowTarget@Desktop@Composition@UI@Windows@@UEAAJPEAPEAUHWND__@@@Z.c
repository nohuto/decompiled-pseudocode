/*
 * XREFs of ?get_Hwnd@SystemOnly@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAPEAUHWND__@@@Z @ 0x18019FE70
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::SystemOnly::get_Hwnd(
        Windows::UI::Composition::Desktop::DesktopWindowTarget::SystemOnly *this,
        HWND *a2)
{
  char *v2; // rsi
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx

  v2 = (char *)this - 176;
  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 19);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v2[32] & 2) != 0 )
  {
    *a2 = (HWND)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 288LL))(v2);
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
