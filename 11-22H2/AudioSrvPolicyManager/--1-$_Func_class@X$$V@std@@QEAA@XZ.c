/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180012C60
 * Callers:
 *     _QueueGenericWorkItem_::_1_::dtor$0 @ 0x180048BF0 (_QueueGenericWorkItem_--_1_--dtor$0.c)
 *     _QueueGenericWorkItem_::_1_::dtor$5 @ 0x180048C40 (_QueueGenericWorkItem_--_1_--dtor$5.c)
 *     _QueueGenericWorkItem_::_1_::dtor$13 @ 0x180048CD0 (_QueueGenericWorkItem_--_1_--dtor$13.c)
 *     _std::make_shared_std::function_void___cdecl(void)__std::function_void___cdecl(void)__&__::_1_::dtor$2 @ 0x1800495C0 (_std--make_shared_std--function_void___cdecl(void)__std--function_void___cdecl(void_ea_1800495C0.c)
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)__::_1_::dtor$0 @ 0x180049800 (_std--function_void___cdecl(void)_--function_void___cdecl(void)__--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x18004A292 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 *     _CApplication::CApplication_::_1_::dtor$12 @ 0x18004A983 (_CApplication--CApplication_--_1_--dtor$12.c)
 *     _CApplicationManager::ProcessInteractivityNotification_::_1_::dtor$4 @ 0x18004A9FA (_CApplicationManager--ProcessInteractivityNotification_--_1_--dtor$4.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
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
