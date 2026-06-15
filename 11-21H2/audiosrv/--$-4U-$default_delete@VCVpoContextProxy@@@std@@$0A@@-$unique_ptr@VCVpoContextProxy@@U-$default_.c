/*
 * XREFs of ??$?4U?$default_delete@VCVpoContextProxy@@@std@@$0A@@?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800ECC6C
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x1800F2B70 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVpoContextProxy@@QEAA@XZ @ 0x1800ED9C8 (--1CVpoContextProxy@@QEAA@XZ.c)
 */

CVpoContextProxy **__fastcall std::unique_ptr<CVpoContextProxy>::operator=<std::default_delete<CVpoContextProxy>,0>(
        CVpoContextProxy **a1,
        CVpoContextProxy **a2)
{
  CVpoContextProxy *v3; // rax
  CVpoContextProxy *v4; // rdi

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
    {
      CVpoContextProxy::~CVpoContextProxy(v4);
      operator delete(v4);
    }
  }
  return a1;
}
