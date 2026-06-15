/*
 * XREFs of _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14005EDC4
 * Callers:
 *     wil::details::lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___::_lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___ @ 0x14005EADC (wil--details--lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___--_lambda_call__lambda_7034.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140002CC8 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_70348e31779f8b8cef919996b578f4f9_::operator()(_QWORD *a1)
{
  __int64 v2; // rsi
  void (__fastcall *v3)(__int64, _QWORD, __int64 *); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *(_QWORD *)(*a1 + 392LL);
  v3 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 40LL);
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset(&v5);
  v3(v2, a1[1], &v5);
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v5);
}
