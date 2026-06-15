/*
 * XREFs of std::_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_::_Copy @ 0x18010E4F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffectPackConfigurationManager@@@Z @ 0x18010D990 (--0-$com_ptr_t@VEffectPackConfigurationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVEffec.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_677f1f97be281aa35bb205656a45fbf6__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = off_180170770;
  wil::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>::com_ptr_t<EffectPackConfigurationManager,wil::err_returncode_policy>(
    (_QWORD *)(a2 + 8),
    *(_QWORD *)(a1 + 8));
  result = a2;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 16);
  return result;
}
