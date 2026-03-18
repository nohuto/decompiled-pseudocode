/*
 * XREFs of ??_GCBrushRenderingGraph@@MEAAPEAXI@Z @ 0x1800B9690
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800B93F8 (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  CBrushRenderingGraph::~CBrushRenderingGraph(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, 0xD8uLL);
  return this;
}
