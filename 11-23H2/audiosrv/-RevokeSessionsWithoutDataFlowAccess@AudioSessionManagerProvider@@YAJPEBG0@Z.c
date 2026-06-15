/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z @ 0x1800EA320
 * Callers:
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800E9F7C (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess(
        AudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  __int128 v5; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v6)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v7; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v8)(); // [rsp+68h] [rbp-20h]
  AudioSessionManagerProvider *v9; // [rsp+90h] [rbp+8h] BYREF
  const unsigned __int16 *v10; // [rsp+98h] [rbp+10h] BYREF

  v10 = a2;
  v9 = this;
  *(_QWORD *)&v5 = &v9;
  *((_QWORD *)&v5 + 1) = &v10;
  v6 = off_18017B660;
  v7 = v5;
  v8 = &v6;
  CEndpointStoreCache::ForEachEndpoint((__int64)this, (__int64)&v6);
  if ( v8 )
  {
    v3 = &v6;
    LOBYTE(v3) = v8 != &v6;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v8)[4])(v8, v3);
  }
  return 0LL;
}
