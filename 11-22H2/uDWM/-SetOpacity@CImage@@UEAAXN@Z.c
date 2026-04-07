/*
 * XREFs of ?SetOpacity@CImage@@UEAAXN@Z @ 0x1800C3E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CImage::SetOpacity(CVisualProxy **this, double a2)
{
  CVisual::SendSetOpacity(this, a2);
}
