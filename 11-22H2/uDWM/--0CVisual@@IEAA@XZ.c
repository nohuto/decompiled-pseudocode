/*
 * XREFs of ??0CVisual@@IEAA@XZ @ 0x1800221E0
 * Callers:
 *     ??0CDesktopThumbnailBase@@IEAA@XZ @ 0x180003388 (--0CDesktopThumbnailBase@@IEAA@XZ.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180010170 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180012C3C (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 *     ??0CSpriteVisual@@QEAA@XZ @ 0x1800191E0 (--0CSpriteVisual@@QEAA@XZ.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x1800195B8 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18001C538 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBorder@@SAJPEAPEAV1@@Z @ 0x18001E834 (-Create@CWindowBorder@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z @ 0x18001E944 (-Create@CWindowBackgroundTreatmentVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x18001EFE0 (--0CButton@@IEAA@XZ.c)
 *     ?Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18001F0A0 (-Create@CClientArea@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180036FEC (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180037EFC (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CDCompositionInteropVisual@@IEAA@XZ @ 0x180041994 (--0CDCompositionInteropVisual@@IEAA@XZ.c)
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x18010D910 (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x18010DA04 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
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
  result = this;
  *((_DWORD *)this + 50) = -2;
  *((_QWORD *)this + 5) = this;
  *((_DWORD *)this + 34) = 0x7FFFFFFF;
  *((_DWORD *)this + 36) = 0x7FFFFFFF;
  *((_DWORD *)this + 35) = 0x7FFFFFFF;
  *((_DWORD *)this + 37) = 0x7FFFFFFF;
  return result;
}
