/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x1800088C0
 * Callers:
 *     _std::make_shared_std::function_void___cdecl(void)__std::function_void___cdecl(void)__&__::_1_::dtor$2 @ 0x180044C13 (_std--make_shared_std--function_void___cdecl(void)__std--function_void___cdecl(void_ea_180044C13.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x180044FF5 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$5 @ 0x180045019 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$12 @ 0x180045890 (_CApplication--CApplication_--_1_--dtor$12.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$4 @ 0x180045971 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$4.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$24 @ 0x180045983 (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$24.c)
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x1800462C9 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$5 @ 0x180046304 (_QueueGenericWorkItem_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<void,>::~_Func_class<void,>(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
