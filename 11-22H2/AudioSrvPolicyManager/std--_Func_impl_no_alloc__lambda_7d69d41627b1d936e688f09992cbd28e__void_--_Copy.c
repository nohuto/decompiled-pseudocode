/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Copy @ 0x18001EE00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000BCD0 (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r11
  __int64 result; // rax

  *a2 = off_18004E778;
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  result = v3;
  *(_BYTE *)(v3 + 16) = *(_BYTE *)(v2 + 8);
  return result;
}
