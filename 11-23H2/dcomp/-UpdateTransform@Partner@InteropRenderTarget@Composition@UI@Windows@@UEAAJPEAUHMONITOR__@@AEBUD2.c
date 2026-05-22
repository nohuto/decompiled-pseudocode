/*
 * XREFs of ?UpdateTransform@Partner@InteropRenderTarget@Composition@UI@Windows@@UEAAJPEAUHMONITOR__@@AEBUD2D_RECT_F@@MAEBUD2D_RECT_U@@W4DXGI_MODE_ROTATION@@@Z @ 0x180094700
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropRenderTarget::Partner::UpdateTransform(
        Windows::UI::Composition::InteropRenderTarget::Partner *this,
        HMONITOR a2,
        const struct D2D_RECT_F *a3,
        float a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, HMONITOR, const struct D2D_RECT_F *))(**((_QWORD **)this + 2) + 32LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
    v9 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x30u);
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
