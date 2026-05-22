/*
 * XREFs of ?SetPropertyChangedListener@Partner@RectangleClip@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EXPRESSION_NOTIFICATION_PROPERTY@@PEAUICompositionPropertyChangedListenerPartner@345@@Z @ 0x18018AD50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::RectangleClip::Partner::SetPropertyChangedListener(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _BYTE *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = (_BYTE *)(a1 - 200);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 200 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (v3[32] & 2) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)v3 + 304LL))(v3, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x1Bu);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
