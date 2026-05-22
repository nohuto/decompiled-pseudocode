/*
 * XREFs of ?BeginDraw@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180061980
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@@Z @ 0x180061B00 (-BeginDraw@DrawingSurfaceBase@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUta.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::Interop::BeginDraw(
        Windows::UI::Composition::CompositionDrawingSurface::Interop *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5)
{
  Windows::UI::Composition::DrawingSurfaceBase *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  *a4 = 0LL;
  v5 = (Windows::UI::Composition::CompositionDrawingSurface::Interop *)((char *)this - 224);
  *a5 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 25);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v9);
  if ( (*((_BYTE *)v5 + 32) & 2) != 0 )
  {
    v10 = Windows::UI::Composition::DrawingSurfaceBase::BeginDraw(v5, a2, a3, a4, a5);
    v11 = v10;
    if ( v10 < 0 )
      DoStackCaptureDirect(v10, 0x221u);
    else
      v11 = 0;
  }
  else
  {
    v11 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v9);
  return v11;
}
