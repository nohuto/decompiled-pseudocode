/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Copy @ 0x18002AF80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BC80 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9

  *a2 = off_18004E680;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  return v2;
}
