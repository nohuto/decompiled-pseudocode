/*
 * XREFs of ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18005570C
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18003B678 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     _KernelContextProvider::Create_::_1_::dtor$0 @ 0x18006E244 (_KernelContextProvider--Create_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180070030 (_InputConfigContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180070050 (_KernelContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x1800701E0 (_VirtualTouchpadContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180070200 (_DisplayOcclusionContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance_.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$1 @ 0x18019D0B6 (_DeviceDockServer--OnDockInput_--_1_--dtor$1.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$2 @ 0x18019D0C2 (_DeviceDockServer--OnDockInput_--_1_--dtor$2.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$3 @ 0x18019D0CE (_DeviceDockServer--OnDockInput_--_1_--dtor$3.c)
 *     _DisplayOcclusionContextProvider::Create_::_1_::dtor$0 @ 0x1801BCC79 (_DisplayOcclusionContextProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return RefCountedObject::Release((RefCountedObject *)(v1 + 8));
  return result;
}
