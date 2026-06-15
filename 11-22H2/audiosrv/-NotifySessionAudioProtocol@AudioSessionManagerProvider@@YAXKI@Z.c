/*
 * XREFs of ?NotifySessionAudioProtocol@AudioSessionManagerProvider@@YAXKI@Z @ 0x180043678
 * Callers:
 *     VADServerUserSessionChanged @ 0x180043418 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x180025F54 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AudioSessionManagerProvider::NotifySessionAudioProtocol(AudioSessionManagerProvider *this, int a2)
{
  __int64 (__fastcall ***v2)(); // rdx
  __int128 v3; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v4)(); // [rsp+30h] [rbp-58h] BYREF
  __int128 v5; // [rsp+38h] [rbp-50h]
  __int64 (__fastcall ***v6)(); // [rsp+68h] [rbp-20h]
  int v7; // [rsp+90h] [rbp+8h] BYREF
  int v8; // [rsp+98h] [rbp+10h] BYREF

  v8 = a2;
  v7 = (int)this;
  *(_QWORD *)&v3 = &v7;
  *((_QWORD *)&v3 + 1) = &v8;
  v4 = off_18017ADC8;
  v5 = v3;
  v6 = &v4;
  CEndpointStoreCache::ForEachEndpoint((__int64)this, (__int64)&v4);
  if ( v6 )
  {
    v2 = &v4;
    LOBYTE(v2) = v6 != &v4;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v6)[4])(v6, v2);
  }
}
