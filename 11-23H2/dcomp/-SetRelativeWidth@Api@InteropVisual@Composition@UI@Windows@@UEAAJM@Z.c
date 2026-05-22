/*
 * XREFs of ?SetRelativeWidth@Api@InteropVisual@Composition@UI@Windows@@UEAAJM@Z @ 0x18000B3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::Api::SetRelativeWidth(
        Windows::UI::Composition::InteropVisual::Api *this,
        float a2)
{
  Microsoft::WRL2::ContextSession *v2; // rbx
  int v4; // eax
  unsigned int v5; // edi

  v2 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 320LL))(*((_QWORD *)this + 2));
    v5 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x23Du);
    else
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
