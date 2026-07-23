/*
 * XREFs of RtlUserFiberStart @ 0x180088320
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
