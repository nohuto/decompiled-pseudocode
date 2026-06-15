/*
 * XREFs of ?Shutdown@AudioSessionManagerProvider@@YAXXZ @ 0x1800EA3D4
 * Callers:
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800F0C74 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSessionManagerProvider::Shutdown(AudioSessionManagerProvider *this)
{
  _QWORD *v1; // rdx
  _QWORD v2[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v3; // [rsp+58h] [rbp-20h]

  v2[0] = off_18017B720;
  v3 = v2;
  CEndpointStoreCache::ForEachEndpoint((__int64)this, (__int64)v2);
  if ( v3 )
  {
    v1 = v2;
    LOBYTE(v1) = v3 != v2;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v3 + 32LL))(v3, v1);
    v3 = 0LL;
  }
  if ( g_PolicyEventsHandler )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)g_PolicyEventsHandler + 16LL))(g_PolicyEventsHandler);
    g_PolicyEventsHandler = 0LL;
  }
  if ( g_DuckingManager )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 16LL))(g_DuckingManager);
    g_DuckingManager = 0LL;
  }
  if ( g_PolicyManager )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 152LL))(g_PolicyManager);
    if ( g_PolicyManager )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
      g_PolicyManager = 0LL;
    }
  }
  if ( g_TelephonyControl )
  {
    ((void (__fastcall *)(struct IUnknown *))g_TelephonyControl->lpVtbl->Release)(g_TelephonyControl);
    g_TelephonyControl = 0LL;
  }
}
