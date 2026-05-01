/*
 * XREFs of ??$_Invoke@V?$tuple@P6AXPEAVStartupAppMonitor@@@_EPEAV1@@std@@$0A@$00@thread@std@@CAIPEAX@Z @ 0x18063DA50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ____Invoke_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___0A__00_thread_std__CAIPEAX_Z(
        void (__fastcall **a1)(_QWORD))
{
  a1[1](*a1);
  _Cnd_do_broadcast_at_thread_exit();
  operator delete(a1);
  return 0LL;
}
