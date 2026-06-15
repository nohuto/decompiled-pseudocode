/*
 * XREFs of ??$make_unique@VCVpoContextProxy@@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEAPEAUISubmixProxy@@$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18011C318
 * Callers:
 *     AudioServerGetStreamVpoContext @ 0x180122F00 (AudioServerGetStreamVpoContext.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x18011C3E0 (--0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 */

CVpoContextProxy **__fastcall std::make_unique<CVpoContextProxy,ISubmixProxy *,ISaDeviceProxy *,IVpoContext *,0>(
        CVpoContextProxy **a1,
        struct ISubmixProxy **a2,
        struct ISaDeviceProxy **a3,
        struct IVpoContext **a4)
{
  CVpoContextProxy *v8; // rcx
  CVpoContextProxy *v9; // rax

  v8 = (CVpoContextProxy *)operator new(0x18uLL);
  v9 = 0LL;
  if ( v8 )
    v9 = CVpoContextProxy::CVpoContextProxy(v8, *a2, *a3, *a4);
  *a1 = v9;
  return a1;
}
