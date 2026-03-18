/*
 * XREFs of ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800B9484
 * Callers:
 *     ?CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAI@Z @ 0x1800B444C (-CreateTechniqueForFragment@CBrushRenderingGraphBuilder@@IEAAJ$$QEAV-$unique_ptr@VCRenderingTech.c)
 *     ??1CBrushRenderingGraph@@MEAA@XZ @ 0x1800B93F8 (--1CBrushRenderingGraph@@MEAA@XZ.c)
 * Callees:
 *     ??1CRenderingTechnique@@QEAA@XZ @ 0x1800B94B0 (--1CRenderingTechnique@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

CRenderingTechnique *__fastcall CRenderingTechnique::`scalar deleting destructor'(CRenderingTechnique *this)
{
  CRenderingTechnique::~CRenderingTechnique(this);
  operator delete(this, 0x120uLL);
  return this;
}
