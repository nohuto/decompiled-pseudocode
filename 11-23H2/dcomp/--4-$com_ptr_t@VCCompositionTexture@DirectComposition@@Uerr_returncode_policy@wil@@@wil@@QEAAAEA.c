/*
 * XREFs of ??4?$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A36E0
 * Callers:
 *     ?RuntimeClassInitialize@CompositionTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x1800A3858 (-RuntimeClassInitialize@CompositionTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVC.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
