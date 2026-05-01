/*
 * XREFs of ?Inflate@CRect@Geometry@@QEAAXJJ@Z @ 0x180574AE0
 * Callers:
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall Geometry::CRect::Inflate(LPRECT lprc, int dx, int dy)
{
  return InflateRect(lprc, dx, dy);
}
