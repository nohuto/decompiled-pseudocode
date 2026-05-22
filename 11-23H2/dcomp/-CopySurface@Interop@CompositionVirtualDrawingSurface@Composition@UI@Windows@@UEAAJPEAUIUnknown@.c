/*
 * XREFs of ?CopySurface@Interop@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x180195B00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z @ 0x180195930 (-CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUt.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionVirtualDrawingSurface::Interop::CopySurface(
        Windows::UI::Composition::CompositionVirtualDrawingSurface::Interop *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagRECT *a5)
{
  Windows::UI::Composition::CompositionVirtualDrawingSurface *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v10; // edi
  int v11; // eax

  v5 = (Windows::UI::Composition::CompositionVirtualDrawingSurface::Interop *)((char *)this - 232);
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 26);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)v5 + 32) & 2) != 0 )
  {
    v11 = Windows::UI::Composition::CompositionVirtualDrawingSurface::CopySurface(v5, a2, a3, a4, a5);
    v10 = v11;
    if ( v11 < 0 )
      DoStackCaptureDirect(v11, 0x2A7u);
    else
      v10 = 0;
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v10;
}
