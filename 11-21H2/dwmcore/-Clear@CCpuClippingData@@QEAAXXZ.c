/*
 * XREFs of ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1800D36C0
 * Callers:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800D3590 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CCpuClippingData@@QEAA@XZ @ 0x1800D3694 (--1CCpuClippingData@@QEAA@XZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18009504C (--$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClippingData::Clear(void **this)
{
  SAFE_DELETE<CMILMatrix>(this + 3);
  SAFE_DELETE<CMILMatrix>(this + 4);
  CShapePtr::Release((CShapePtr *)(this + 7));
  CShapePtr::Release((CShapePtr *)(this + 10));
}
