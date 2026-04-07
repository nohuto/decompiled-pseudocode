/*
 * XREFs of ?OnMouseEnter@CButton@@UEAAXXZ @ 0x1800AD060
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CButton::OnMouseEnter(CButton *this)
{
  int v1; // eax

  *((_BYTE *)this + 288) |= 2u;
  v1 = *((_DWORD *)this + 22);
  if ( (v1 & 0x8000) == 0 )
  {
    *((_DWORD *)this + 22) = v1 | 0x8000;
    CVisual::PropagateDirtyChildren(this);
  }
}
