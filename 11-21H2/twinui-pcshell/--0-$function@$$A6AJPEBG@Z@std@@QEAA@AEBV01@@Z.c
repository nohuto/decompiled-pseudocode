/*
 * XREFs of ??0?$function@$$A6AJPEBG@Z@std@@QEAA@AEBV01@@Z @ 0x18045A88C
 * Callers:
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::_lambda_3f7c4ca579c2955647d5fca56c9af8c5_ @ 0x1801AF080 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--_lambda_3f7c4ca579c2955647d5fca56c9af8c5_.c)
 *     ??4?$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18045B61C (--4-$function@$$A6AJPEBG@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804647B0 (-RetryGettingInputAppIdTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<long (unsigned short const *)>::function<long (unsigned short const *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
