/*
 * XREFs of ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800D8630
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$6 @ 0x18007C33E (_BuildDeviceGraphForStream_--_1_--dtor$6.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$10 @ 0x180114805 (_ConnectorSupportsFormat_--_1_--dtor$10.c)
 *     _ConnectorSupportsFormat_::_1_::dtor$14 @ 0x180114835 (_ConnectorSupportsFormat_--_1_--dtor$14.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    result = *a1;
    v3 = **a1;
    *result = (__int64)v1;
    if ( v3 )
      return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
