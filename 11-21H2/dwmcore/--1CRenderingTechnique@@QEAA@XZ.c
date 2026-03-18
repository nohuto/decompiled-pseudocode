/*
 * XREFs of ??1CRenderingTechnique@@QEAA@XZ @ 0x1800357CC
 * Callers:
 *     ??_GCRenderingTechnique@@QEAAPEAXI@Z @ 0x180035778 (--_GCRenderingTechnique@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800357A4 (--1-$com_ptr_t@VCExternalEffectGraph@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CRenderingTechniqueFragment@@QEAA@XZ @ 0x180035818 (--1CRenderingTechniqueFragment@@QEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ @ 0x180035914 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CRenderingTechnique::~CRenderingTechnique(CRenderingTechnique *this)
{
  CRenderingTechniqueFragment *v2; // rbx

  wil::com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>::~com_ptr_t<CExternalEffectGraph,wil::err_returncode_policy>((__int64 *)this + 32);
  CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>::~CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique>((char *)this + 16);
  v2 = (CRenderingTechniqueFragment *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CRenderingTechniqueFragment::~CRenderingTechniqueFragment(v2);
    operator delete(v2, 0x80uLL);
  }
}
