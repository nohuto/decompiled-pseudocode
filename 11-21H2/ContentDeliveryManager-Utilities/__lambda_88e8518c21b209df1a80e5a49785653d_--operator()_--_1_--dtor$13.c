/*
 * XREFs of __lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::dtor$13 @ 0x1800EE5CB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028E6C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall _lambda_88e8518c21b209df1a80e5a49785653d_::operator()_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~8u;
    return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 128));
  }
  return result;
}
