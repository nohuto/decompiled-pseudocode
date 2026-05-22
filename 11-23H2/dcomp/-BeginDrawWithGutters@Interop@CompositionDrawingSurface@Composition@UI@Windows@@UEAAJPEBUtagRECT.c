/*
 * XREFs of ?BeginDrawWithGutters@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180109FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z @ 0x180109EF8 (-BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_G.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::Interop::BeginDrawWithGutters(
        Windows::UI::Composition::CompositionDrawingSurface::Interop *this,
        const struct tagRECT *a2,
        const struct _GUID *a3,
        void **a4,
        struct tagPOINT *a5,
        struct DCOMPOSITION_GUTTERS *a6)
{
  Windows::UI::Composition::CompositionDrawingSurface *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  unsigned int v11; // edi
  int v12; // eax

  *a4 = 0LL;
  v6 = (Windows::UI::Composition::CompositionDrawingSurface::Interop *)((char *)this - 224);
  *a5 = 0LL;
  *(_DWORD *)a6 = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 25);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v10);
  if ( (*((_BYTE *)v6 + 32) & 2) != 0 )
  {
    v12 = Windows::UI::Composition::CompositionDrawingSurface::BeginDrawWithGutters(v6, a2, a3, a4, a5, a6);
    v11 = v12;
    if ( v12 < 0 )
      DoStackCaptureDirect(v12, 0x243u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v10);
  return v11;
}
