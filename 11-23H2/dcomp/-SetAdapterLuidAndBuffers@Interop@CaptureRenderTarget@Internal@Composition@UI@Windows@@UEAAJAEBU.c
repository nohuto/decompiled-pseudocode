/*
 * XREFs of ?SetAdapterLuidAndBuffers@Interop@CaptureRenderTarget@Internal@Composition@UI@Windows@@UEAAJAEBU_LUID@@IPEAPEAX@Z @ 0x1801803C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetAdapterLuidAndBuffers@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAJAEBU_LUID@@IPEAPEAX@Z @ 0x180180320 (-SetAdapterLuidAndBuffers@CaptureRenderTarget@Internal@Composition@UI@Windows@@QEAAJAEBU_LUID@@I.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::CaptureRenderTarget::Interop::SetAdapterLuidAndBuffers(
        Windows::UI::Composition::Internal::CaptureRenderTarget::Interop *this,
        const struct _LUID *a2,
        unsigned int a3,
        void **a4)
{
  Windows::UI::Composition::Internal::CaptureRenderTarget *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned int v9; // edi
  int v10; // eax

  v4 = (Windows::UI::Composition::Internal::CaptureRenderTarget::Interop *)((char *)this - 152);
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v10 = Windows::UI::Composition::Internal::CaptureRenderTarget::SetAdapterLuidAndBuffers(v4, a2, a3, a4);
    v9 = v10;
    if ( v10 < 0 )
      DoStackCaptureDirect(v10, 0x204u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v9;
}
