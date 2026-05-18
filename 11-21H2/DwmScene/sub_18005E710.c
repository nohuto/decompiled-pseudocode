/*
 * XREFs of sub_18005E710 @ 0x18005E710
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005E710(void (__fastcall **lpMem)(_QWORD))
{
  lpMem[1](*lpMem);
  Cnd_do_broadcast_at_thread_exit();
  sub_18000B998(lpMem);
  return 0LL;
}
