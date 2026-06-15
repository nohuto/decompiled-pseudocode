/*
 * XREFs of ?NotifySessionTerminate@AudioSessionManagerProvider@@YAXK@Z @ 0x1800EA194
 * Callers:
 *     VADServerUserSessionChanged @ 0x180043418 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AudioSessionManagerProvider::NotifySessionTerminate(AudioSessionManagerProvider *this)
{
  _QWORD *v1; // rdx
  _QWORD v2[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+80h] [rbp+8h] BYREF

  v4 = (int)this;
  v2[0] = off_18017B6F0;
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
