/*
 * XREFs of ?NotifyAudioDGTerminated@AudioSessionManagerProvider@@YAX_N@Z @ 0x1800E28DC
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x1800C3ED0 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800422B0 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSessionManagerProvider::NotifyAudioDGTerminated(AudioSessionManagerProvider *this)
{
  _QWORD *v1; // rdx
  _QWORD v2[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v3; // [rsp+58h] [rbp-20h]
  char v4; // [rsp+80h] [rbp+8h] BYREF

  v4 = (char)this;
  v2[0] = off_1801771B8;
  v2[1] = &v4;
  v3 = v2;
  CEndpointStoreCache::ForEachEndpoint((__int64)this, (__int64)v2);
  if ( v3 )
  {
    v1 = v2;
    LOBYTE(v1) = v3 != v2;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v3 + 32LL))(v3, v1);
  }
}
