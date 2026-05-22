/*
 * XREFs of ?put_SystemBackdrop@Internal@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@456@@Z @ 0x1800104B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Desktop::DesktopWindowTarget::Internal::put_SystemBackdrop(
        Windows::UI::Composition::Desktop::DesktopWindowTarget::Internal *this,
        struct Windows::UI::Composition::ICompositionBrush *a2)
{
  char *v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi

  v2 = (char *)this - 144;
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 15);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = (*(__int64 (__fastcall **)(char *, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v2 + 304LL))(
           v2,
           a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x9Fu);
    else
      v6 = 0;
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
