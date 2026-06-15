/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Copy @ 0x18001EBD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BC80 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 result; // rax

  *a2 = off_18004D748;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  result = v3;
  *(_BYTE *)(v3 + 16) = *(_BYTE *)(v2 + 8);
  return result;
}
