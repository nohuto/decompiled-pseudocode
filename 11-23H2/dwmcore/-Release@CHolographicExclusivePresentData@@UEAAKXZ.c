/*
 * XREFs of ?Release@CHolographicExclusivePresentData@@UEAAKXZ @ 0x1802AEE70
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x180121730 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::Release(CHolographicExclusivePresentData *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)this + 2);
}
