/*
 * XREFs of ?GetVisualProxyForStructure@CVisual@@UEAAPEAVCVisualProxy@@XZ @ 0x180058600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CVisualProxy *__fastcall CVisual::GetVisualProxyForStructure(CVisual *this)
{
  return (struct CVisualProxy *)*((_QWORD *)this + 2);
}
