/*
 * XREFs of ?TryGetCoreWindow@SystemOnly@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICoreWindow@Core@45@@Z @ 0x180110D30
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::SystemOnly::TryGetCoreWindow(
        Windows::UI::Composition::Compositor::SystemOnly *this,
        struct Windows::UI::Core::ICoreWindow **a2)
{
  char *v2; // rsi
  unsigned int v4; // edi
  struct Windows::UI::Core::ICoreWindow *v5; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this - 1152;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1152));
  if ( (v2[32] & 2) != 0 )
  {
    v5 = (struct Windows::UI::Core::ICoreWindow *)*((_QWORD *)v2 + 59);
    v4 = 0;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)v2 + 59));
    v7 = 0LL;
    *a2 = v5;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v7);
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v4;
}
