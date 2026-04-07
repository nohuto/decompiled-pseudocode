/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x180026FFC
 * Callers:
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x18002459C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180024CB4 (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ??0CButton@@IEAA@XZ @ 0x180036570 (--0CButton@@IEAA@XZ.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800366A8 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037184 (-CreateFromSharedHandle@UdwmTopVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037264 (-CreateFromSharedHandle@UdwmBottomVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x180037344 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x180038C24 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow@@IEAA@XZ @ 0x180038F08 (--0CTopLevelWindow@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180046E0C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x1800B1B54 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x1800E0DF8 (--0CSystemBackdropVisual@@QEAA@XZ.c)
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1801074F0 (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1801075E4 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CVisual *__fastcall CVisual::CVisual(CVisual *this)
{
  CVisual *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CVisual::`vftable';
  *((_QWORD *)this + 4) = &VisualCollection::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 24) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 34) = 0x7FFFFFFF;
  *((_DWORD *)this + 36) = 0x7FFFFFFF;
  *((_DWORD *)this + 35) = 0x7FFFFFFF;
  *((_DWORD *)this + 37) = 0x7FFFFFFF;
  result = this;
  *((_DWORD *)this + 50) = -2;
  *((_QWORD *)this + 5) = this;
  return result;
}
