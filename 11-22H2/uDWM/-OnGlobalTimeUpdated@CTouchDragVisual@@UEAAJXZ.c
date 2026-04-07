/*
 * XREFs of ?OnGlobalTimeUpdated@CTouchDragVisual@@UEAAJXZ @ 0x18006E410
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CTouchDragVisual::OnGlobalTimeUpdated(CTouchDragVisual *this)
{
  int v1; // eax

  if ( *((_DWORD *)this + 88) > 1u )
  {
    v1 = *((_DWORD *)this + 22);
    if ( (v1 & 0x1000) == 0 )
    {
      *((_DWORD *)this + 22) = v1 | 0x1000;
      CVisual::PropagateDirtyChildren(this);
    }
  }
  return 0LL;
}
