/*
 * XREFs of ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x140067B3C
 * Callers:
 *     _std::function_void___cdecl(void)_::function_void___cdecl(void)__::_1_::dtor$0 @ 0x140067AFA (_std--function_void___cdecl(void)_--function_void___cdecl(void)__--_1_--dtor$0.c)
 *     __WorkTask::Initialize_::_1_::dtor$0 @ 0x140068162 (__WorkTask--Initialize_--_1_--dtor$0.c)
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$0 @ 0x1400683C6 (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
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
