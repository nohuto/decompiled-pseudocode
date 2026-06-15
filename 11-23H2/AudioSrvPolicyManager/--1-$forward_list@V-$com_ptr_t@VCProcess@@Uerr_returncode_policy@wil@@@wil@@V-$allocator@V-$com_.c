/*
 * XREFs of ??1?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180033DBC
 * Callers:
 *     _TSSession::TSSession_::_1_::dtor$2 @ 0x180049846 (_TSSession--TSSession_--_1_--dtor$2.c)
 *     _SetNotificationData_::_1_::dtor$0 @ 0x1800499DA (_SetNotificationData_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>(
        void **a1)
{
  std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::clear(a1);
}
