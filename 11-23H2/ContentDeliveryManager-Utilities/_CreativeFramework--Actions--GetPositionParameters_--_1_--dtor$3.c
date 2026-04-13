/*
 * XREFs of _CreativeFramework::Actions::GetPositionParameters_::_1_::dtor$3 @ 0x1800DB7A1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Actions::GetPositionParameters_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(*(__int64 **)(a2 + 56));
  }
  return result;
}
