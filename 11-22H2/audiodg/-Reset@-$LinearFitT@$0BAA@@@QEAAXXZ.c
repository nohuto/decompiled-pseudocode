/*
 * XREFs of ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140008E4C
 * Callers:
 *     ??0CAudioPump@@QEAA@XZ @ 0x1400048CC (--0CAudioPump@@QEAA@XZ.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140008D70 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x140008E04 (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14000B480 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LinearFitT<256>::Reset(__int64 a1)
{
  __int64 result; // rax

  (**(void (__fastcall ***)(__int64))a1)(a1);
  result = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  return result;
}
