/*
 * XREFs of ?OnMouseLeave@CButton@@UEAAXXZ @ 0x180008940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseLeave(CButton *this)
{
  *((_BYTE *)this + 288) &= 0xF1u;
  CVisual::SetDirtyFlags(this, 0x8000u);
}
