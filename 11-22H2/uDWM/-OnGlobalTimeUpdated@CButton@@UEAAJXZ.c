/*
 * XREFs of ?OnGlobalTimeUpdated@CButton@@UEAAJXZ @ 0x18006BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CButton::OnGlobalTimeUpdated(CButton *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x10000) == 0 )
  {
    *((_DWORD *)this + 22) = v1 | 0x10000;
    CVisual::PropagateDirtyChildren(this);
  }
  return 0LL;
}
