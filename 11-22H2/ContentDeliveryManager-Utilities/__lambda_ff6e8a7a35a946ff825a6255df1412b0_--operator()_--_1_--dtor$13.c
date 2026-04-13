/*
 * XREFs of __lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()_::_1_::dtor$13 @ 0x1800D55F9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall _lambda_ff6e8a7a35a946ff825a6255df1412b0_::operator()_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~8u;
    return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 96));
  }
  return result;
}
