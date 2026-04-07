/*
 * XREFs of _CWindowList::SetBlurredWallpaperSurface_::_1_::dtor$1 @ 0x1800662D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowList::SetBlurredWallpaperSurface_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::~ComPtr<CVisualSurfaceProxy>(a2 + 120);
}
