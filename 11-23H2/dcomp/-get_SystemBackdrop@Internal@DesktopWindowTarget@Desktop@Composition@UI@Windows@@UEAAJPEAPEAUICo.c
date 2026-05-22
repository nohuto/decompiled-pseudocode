/*
 * XREFs of ?get_SystemBackdrop@Internal@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@456@@Z @ 0x180010E80
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::Internal::get_SystemBackdrop(
        Windows::UI::Composition::Desktop::DesktopWindowTarget::Internal *this,
        struct Windows::UI::Composition::ICompositionBrush **a2)
{
  char *v2; // rbx
  unsigned int v3; // esi
  Microsoft::WRL2::ContextSession *v5; // rdi
  __int64 v6; // rax
  struct Windows::UI::Composition::ICompositionBrush *v7; // rbx

  v2 = (char *)this - 144;
  v3 = 0;
  *a2 = 0LL;
  v5 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v2[32] & 2) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 296LL))(v2);
    v7 = (struct Windows::UI::Composition::ICompositionBrush *)v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *a2 = v7;
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
