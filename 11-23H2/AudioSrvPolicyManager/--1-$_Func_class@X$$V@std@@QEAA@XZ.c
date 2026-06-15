/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180012C50
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x180047760 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$5 @ 0x1800477B0 (_QueueGenericWorkItem_--_1_--dtor$5.c)
 *     _QueueGenericWorkItem_::_1_::dtor$13 @ 0x180047840 (_QueueGenericWorkItem_--_1_--dtor$13.c)
 *     _std::make_shared_std::function_void___cdecl(void)__std::function_void___cdecl(void)__&__::_1_::dtor$2 @ 0x180048130 (_std--make_shared_std--function_void___cdecl(void)__std--function_void___cdecl(void_ea_180048130.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)__::_1_::dtor$0 @ 0x180048370 (_std--function_void___cdecl(void)_--function_void___cdecl(void)__--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x180048E02 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 *     _CApplication::CApplication_::_1_::dtor$12 @ 0x1800494F3 (_CApplication--CApplication_--_1_--dtor$12.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$4 @ 0x18004956A (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
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
