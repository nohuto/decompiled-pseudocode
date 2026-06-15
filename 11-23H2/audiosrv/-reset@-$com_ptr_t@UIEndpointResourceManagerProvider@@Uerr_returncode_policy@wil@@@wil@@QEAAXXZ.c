/*
 * XREFs of ?reset@?$com_ptr_t@UIEndpointResourceManagerProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180065D58
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594F8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800F0C74 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 wil::com_ptr_t<IEndpointResourceManagerProvider,wil::err_returncode_policy>::reset()
{
  struct IEndpointResourceManagerProvider *v0; // rcx
  __int64 result; // rax

  v0 = g_CustomEndpointResourceManagerProvider;
  g_CustomEndpointResourceManagerProvider = 0LL;
  if ( v0 )
    return (*(__int64 (__fastcall **)(struct IEndpointResourceManagerProvider *))(*(_QWORD *)v0 + 16LL))(v0);
  return result;
}
