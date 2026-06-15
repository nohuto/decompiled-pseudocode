/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x140038558
 * Callers:
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x14006FF6C (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1400701BC (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::function<void (void)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
