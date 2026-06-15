/*
 * XREFs of ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x1800ED950
 * Callers:
 *     AudioServerGetEndpointVpoContext$dtor$4 @ 0x1800F25D1 (AudioServerGetEndpointVpoContext$dtor$4.c)
 *     AudioServerGetStreamVpoContext$dtor$6 @ 0x1800F3448 (AudioServerGetStreamVpoContext$dtor$6.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CVpoContextProxy@@QEAA@XZ @ 0x1800ED9C8 (--1CVpoContextProxy@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(CVpoContextProxy **a1)
{
  CVpoContextProxy *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CVpoContextProxy::~CVpoContextProxy(*a1);
    operator delete(v1);
  }
}
