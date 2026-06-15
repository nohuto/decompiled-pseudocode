/*
 * XREFs of _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14005B634
 * Callers:
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14005B950 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x140001FF0 (-reset@-$com_ptr_t@UIAudioEndpointRT@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_70348e31779f8b8cef919996b578f4f9_::operator()(_QWORD *a1)
{
  __int64 v2; // rsi
  void (__fastcall *v3)(__int64, _QWORD, __int64 *); // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = *(_QWORD *)(*a1 + 400LL);
  v3 = *(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v2 + 40LL);
  wil::com_ptr_t<IAudioEndpointRT,wil::err_returncode_policy>::reset(&v5);
  v3(v2, a1[1], &v5);
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v5);
}
