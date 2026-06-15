/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_::_Copy @ 0x18010E500
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffectPackConfigurationManager@@@Z @ 0x18010D940 (--0-$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffec.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_1801707A0;
  wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
    (_QWORD *)(a2 + 8),
    *(_QWORD *)(a1 + 8));
  result = a2;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  return result;
}
