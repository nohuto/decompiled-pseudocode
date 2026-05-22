/*
 * XREFs of ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18005649C
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18003762C (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     _KernelContextProvider::Create_::_1_::dtor$0 @ 0x18008089D (_KernelContextProvider--Create_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180083BB0 (_InputConfigContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180083BD0 (_KernelContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180083D60 (_VirtualTouchpadContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180083D80 (_DisplayOcclusionContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance_.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$1 @ 0x1801AB096 (_DeviceDockServer--OnDockInput_--_1_--dtor$1.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$2 @ 0x1801AB0A2 (_DeviceDockServer--OnDockInput_--_1_--dtor$2.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$3 @ 0x1801AB0AE (_DeviceDockServer--OnDockInput_--_1_--dtor$3.c)
 *     _DisplayOcclusionContextProvider::Create_::_1_::dtor$0 @ 0x1801CA4E1 (_DisplayOcclusionContextProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
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
