/*
 * XREFs of _CreativeFramework::Actions::PinApp_::_1_::dtor$4 @ 0x1800F55A3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028E6C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Actions::PinApp_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)(a2 + 48));
  }
  return result;
}
