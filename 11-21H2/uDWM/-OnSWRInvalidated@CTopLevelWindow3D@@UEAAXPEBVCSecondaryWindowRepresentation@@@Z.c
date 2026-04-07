/*
 * XREFs of ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180036450
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180034B64 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow3D::OnSWRInvalidated(
        CTopLevelWindow3D *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CVisual *v2; // rcx
  int v3; // eax

  v2 = (CTopLevelWindow3D *)((char *)this - 288);
  v3 = *((_DWORD *)v2 + 22);
  if ( (v3 & 0x80u) == 0 )
  {
    *((_DWORD *)v2 + 22) = v3 | 0x80;
    CVisual::PropagateDirtyChildren(v2);
  }
}
