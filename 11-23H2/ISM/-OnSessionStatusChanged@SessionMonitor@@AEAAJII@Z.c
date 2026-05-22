/*
 * XREFs of ?OnSessionStatusChanged@SessionMonitor@@AEAAJII@Z @ 0x18005900C
 * Callers:
 *     ?WndProc@SessionMonitor@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800590C0 (-WndProc@SessionMonitor@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     std::unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___::_unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___ @ 0x180058BD0 (std--unique_ptr__SessionMonitor--OnSessionStatusChanged_--_2_--DeferInvokeContext_std--default_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SessionMonitor::OnSessionStatusChanged(SessionMonitor *this, int a2, int a3)
{
  struct SessionMonitor *v5; // rsi
  _DWORD *v6; // rax
  void *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v5 = SessionMonitor::_instance;
  v6 = operator new(8uLL);
  *v6 = a2;
  v6[1] = a3;
  v8 = v6;
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(unsigned int *), _DWORD *, __int64))(**((_QWORD **)v5 + 2)
                                                                                            + 152LL))(
    *((_QWORD *)v5 + 2),
    lambda_62513fe2106ea5be335490f61af9321d_::_lambda_invoker_cdecl_,
    v6,
    3LL);
  v8 = 0LL;
  std::unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___::_unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___(&v8);
  return 0LL;
}
