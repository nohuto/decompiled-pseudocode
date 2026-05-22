/*
 * XREFs of ?RedirectMouseToHwnd@Api@InteropVisual@Composition@UI@Windows@@UEAAJPEAUHWND__@@KK@Z @ 0x180157DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropVisual::Api::RedirectMouseToHwnd(
        Windows::UI::Composition::InteropVisual::Api *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v9; // edi
  int v10; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 34);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 264) & 2) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 392LL))(
            *((_QWORD *)this + 2),
            a2,
            a3,
            a4);
    v9 = v10;
    if ( v10 < 0 )
      DoStackCaptureDirect(v10, 0x296u);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v9;
}
