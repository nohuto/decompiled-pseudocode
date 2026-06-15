/*
 * XREFs of ??$make_unique@VCAppSubmixContext@@PEAUIProcessSubmixProxy@@$0A@@std@@YA?AV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@0@$$QEAPEAUIProcessSubmixProxy@@@Z @ 0x180106E3C
 * Callers:
 *     asm_GetApplicationSubmixFromId @ 0x1801090C0 (asm_GetApplicationSubmixFromId.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixProxy@@@Z @ 0x1800FB854 (--0-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIProcessSubmixPr.c)
 */

_QWORD *__fastcall std::make_unique<CAppSubmixContext,IProcessSubmixProxy *,0>(_QWORD *a1, __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *result; // rax

  v4 = operator new(8uLL);
  v5 = v4;
  if ( v4 )
    wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>(
      v4,
      *a2);
  else
    v5 = 0LL;
  result = a1;
  *a1 = v5;
  return result;
}
