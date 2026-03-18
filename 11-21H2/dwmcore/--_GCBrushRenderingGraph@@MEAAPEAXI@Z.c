/*
 * XREFs of ??_GCBrushRenderingGraph@@MEAAPEAXI@Z @ 0x180035480
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800356EC (--1CBrushRenderingGraph@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::`scalar deleting destructor'(
        CBrushRenderingGraph *this,
        char a2)
{
  CBrushRenderingGraph::~CBrushRenderingGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD8uLL);
  return this;
}
