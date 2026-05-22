/*
 * XREFs of ?SetPropertyChangedListener@Partner@InsetClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x180094170
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InsetClip::Partner::SetPropertyChangedListener(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _BYTE *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v3 = (_BYTE *)(a1 - 184);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 184 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v3[32] & 2) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)v3 + 304LL))(v3, a2, a3);
    v8 = v7;
    if ( v7 < 0 )
      DoStackCaptureDirect(v7, 0x1Bu);
    else
      v8 = 0;
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v8;
}
