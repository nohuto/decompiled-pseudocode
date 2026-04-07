/*
 * XREFs of ?OnGlobalTimeUpdated@CTouchDragVisual@@UEAAJXZ @ 0x1800E6F90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CTouchDragVisual::OnGlobalTimeUpdated(CTouchDragVisual *this)
{
  if ( *((_DWORD *)this + 88) > 1u )
    CVisual::SetDirtyFlags(this, 4096);
  return 0LL;
}
