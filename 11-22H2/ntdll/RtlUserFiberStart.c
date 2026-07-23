/*
 * XREFs of RtlUserFiberStart @ 0x180087B20
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
