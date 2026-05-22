/*
 * XREFs of ?Release@CDeviceTextureManager@DirectComposition@@UEAAKXZ @ 0x180098E10
 * Callers:
 *     ?Release@CDelegatedInkTrailImpl@DirectComposition@@WBA@EAAKXZ @ 0x1800A81B0 (-Release@CDelegatedInkTrailImpl@DirectComposition@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall DirectComposition::CDeviceTextureManager::Release(volatile signed __int32 *this)
{
  return CMILRefCountBaseT<IMILRefCount>::InternalRelease(this);
}
