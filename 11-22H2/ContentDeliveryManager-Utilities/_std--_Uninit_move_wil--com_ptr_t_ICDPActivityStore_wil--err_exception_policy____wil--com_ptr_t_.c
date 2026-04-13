/*
 * XREFs of _std::_Uninit_move_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____::_1_::catch$0 @ 0x1800D7853
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180022B0C (_CxxThrowException_0.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall __noreturn std::_Uninit_move_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____std::allocator_wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____wil::com_ptr_t_ICDPActivityStore_wil::err_exception_policy____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 *i; // rbx

  for ( i = *(__int64 **)(a2 + 72); i != *(__int64 **)(a2 + 64); ++i )
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(i);
  throw;
}
