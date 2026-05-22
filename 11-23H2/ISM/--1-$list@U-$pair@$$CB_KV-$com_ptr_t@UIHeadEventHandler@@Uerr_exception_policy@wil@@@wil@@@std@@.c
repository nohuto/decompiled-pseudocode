/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CB_KV?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x1800D1F4C
 * Callers:
 *     _PenDeviceManager::PenDeviceManager_::_1_::dtor$20 @ 0x18006E2DC (_PenDeviceManager--PenDeviceManager_--_1_--dtor$20.c)
 *     _MPCHeadUpdateListener::MPCHeadUpdateListener_::_1_::dtor$11 @ 0x1800D1EE7 (_MPCHeadUpdateListener--MPCHeadUpdateListener_--_1_--dtor$11.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D1AD0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAXV-$com_ptr_t@VPenInterface@@Uerr_except.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>::~list<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>>(
        void **a1)
{
  std::_List_node<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<void * const,wil::com_ptr_t<PenInterface,wil::err_exception_policy>>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x20uLL);
}
