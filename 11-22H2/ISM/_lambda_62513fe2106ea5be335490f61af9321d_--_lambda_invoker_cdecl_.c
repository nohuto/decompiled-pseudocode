/*
 * XREFs of _lambda_62513fe2106ea5be335490f61af9321d_::_lambda_invoker_cdecl_ @ 0x18005A230
 * Callers:
 *     <none>
 * Callees:
 *     std::unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___::_unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___ @ 0x18005A380 (std--unique_ptr__SessionMonitor--OnSessionStatusChanged_--_2_--DeferInvokeContext_std--default_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_62513fe2106ea5be335490f61af9321d_::_lambda_invoker_cdecl_(unsigned int *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64); // rcx
  unsigned int v4; // ebx
  unsigned int *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = a1[1];
  v2 = *a1;
  if ( SessionMonitor::_instance
    && (v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))*((_QWORD *)SessionMonitor::_instance + 1)) != 0LL )
  {
    v4 = (**v3)(v3, v2, v1);
  }
  else
  {
    v4 = 1;
  }
  std::unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___::_unique_ptr__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext_std::default_delete__SessionMonitor::OnSessionStatusChanged_::_2_::DeferInvokeContext___(&v6);
  return v4;
}
