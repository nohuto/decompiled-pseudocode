/*
 * XREFs of ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x18012AD60
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVolumeProvider::NotifyAudioDGTerminated(CVolumeProvider *this)
{
  _QWORD *v1; // rdx
  _QWORD v2[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v3; // [rsp+58h] [rbp-20h]

  v2[0] = off_18017CD70;
  v3 = v2;
  CEndpointStoreCache::ForEachEndpoint((__int64)this, (__int64)v2);
  if ( v3 )
  {
    v1 = v2;
    LOBYTE(v1) = v3 != v2;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v3 + 32LL))(v3, v1);
  }
}
