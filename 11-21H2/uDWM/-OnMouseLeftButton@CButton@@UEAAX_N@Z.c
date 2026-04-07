/*
 * XREFs of ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x180007140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseLeftButton(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 288) & 4) != 0) != a2 )
  {
    *((_BYTE *)this + 288) = (4 * a2) | *((_BYTE *)this + 288) & 0xFB;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
