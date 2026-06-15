/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1800143D0
 * Callers:
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800228D0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800256F8 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
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
