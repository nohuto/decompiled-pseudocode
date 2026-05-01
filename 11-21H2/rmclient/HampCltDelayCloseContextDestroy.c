/*
 * XREFs of HampCltDelayCloseContextDestroy @ 0x18001DFB0
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     HampCltDelayCloseCallback @ 0x18001DEF0 (HampCltDelayCloseCallback.c)
 *     HampCltDelayCloseContextCreate @ 0x18001DF00 (HampCltDelayCloseContextCreate.c)
 * Callees:
 *     HampConnectionDestroy @ 0x180006630 (HampConnectionDestroy.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Close@HamActivityWrapper@@QEAAXXZ @ 0x18001C358 (-Close@HamActivityWrapper@@QEAAXXZ.c)
 */

BOOLEAN __fastcall HampCltDelayCloseContextDestroy(__int64 *a1)
{
  HamActivityWrapper *v2; // rcx

  v2 = (HamActivityWrapper *)a1[1];
  if ( v2 )
  {
    HamActivityWrapper::Close(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 16LL))(a1[1]);
  }
  if ( *a1 )
    HampConnectionDestroy(*a1);
  PsmTimerCleanup(a1 + 2);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
