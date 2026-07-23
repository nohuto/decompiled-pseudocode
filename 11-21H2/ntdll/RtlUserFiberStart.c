/*
 * XREFs of RtlUserFiberStart @ 0x18008B3A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800048A0 (RtlExitUserThread.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
