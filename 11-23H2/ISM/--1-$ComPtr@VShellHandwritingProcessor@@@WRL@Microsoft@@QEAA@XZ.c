/*
 * XREFs of ??1?$ComPtr@VShellHandwritingProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180063F00
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ShellHandwritingProcessor_IContextualProcessor__::_1_::dtor$1 @ 0x180063D6A (_Microsoft--WRL--Details--MakeAndInitialize_ShellHandwritingProcessor_IContextualPr_ea_180063D6A.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<ShellHandwritingProcessor>::~ComPtr<ShellHandwritingProcessor>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
