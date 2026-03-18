/*
 * XREFs of ??1CRenderingTechnique@@QEAA@XZ @ 0x1800B94B0
 * Callers:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x1800B9484 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B2BB8 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x1800B94FC (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ @ 0x1800B955C (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CRenderingTechnique::~CRenderingTechnique(CRenderingTechnique *this)
{
  CRenderingTechniqueFragment *v2; // rbx

  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)this + 34);
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>((char *)this + 16);
  v2 = (CRenderingTechniqueFragment *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v2);
    operator delete(v2, 0x80uLL);
  }
}
