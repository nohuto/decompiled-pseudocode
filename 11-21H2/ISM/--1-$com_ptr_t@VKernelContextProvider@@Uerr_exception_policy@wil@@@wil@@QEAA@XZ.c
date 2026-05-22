/*
 * XREFs of ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800494A4
 * Callers:
 *     _KernelContextProvider::Create_::_1_::dtor$0 @ 0x180056EC4 (_KernelContextProvider--Create_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$0 @ 0x180058365 (_InputConfigContextProvider--Create_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058C40 (_InputConfigContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058C60 (_KernelContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _VirtualTouchpadContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058DD0 (_VirtualTouchpadContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance__.c)
 *     _DisplayOcclusionContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__ @ 0x180058DF0 (_DisplayOcclusionContextProvider--GetInstance_--_2_--_dynamic_atexit_destructor_for__s_instance_.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$1 @ 0x18017DEFA (_DeviceDockServer--OnDockInput_--_1_--dtor$1.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$2 @ 0x18017DF06 (_DeviceDockServer--OnDockInput_--_1_--dtor$2.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$3 @ 0x18017DF12 (_DeviceDockServer--OnDockInput_--_1_--dtor$3.c)
 *     _DisplayOcclusionContextProvider::Create_::_1_::dtor$0 @ 0x18019E95D (_DisplayOcclusionContextProvider--Create_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
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
