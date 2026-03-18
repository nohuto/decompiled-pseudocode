/*
 * XREFs of ??1CCpuClippingData@@QEAA@XZ @ 0x1800D3694
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x18008E62C (--1CTreeData@@UEAA@XZ.c)
 * Callees:
 *     ?Clear@CCpuClippingData@@QEAAXXZ @ 0x1800D36C0 (-Clear@CCpuClippingData@@QEAAXXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClippingData::~CCpuClippingData(CCpuClippingData *this)
{
  CCpuClippingData::Clear(this);
  CShapePtr::Release((CCpuClippingData *)((char *)this + 80));
  CShapePtr::Release((CCpuClippingData *)((char *)this + 56));
}
