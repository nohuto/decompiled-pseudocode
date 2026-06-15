/*
 * XREFs of ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800FC4B4
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x180101470 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18011341C (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeviceGraphStore::FindSaDeviceByResourceId(
        DeviceGraphStore *this,
        __int64 a2,
        struct ISaDeviceProxy **a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall **v7)(); // [rsp+30h] [rbp-50h] BYREF
  __int128 v8; // [rsp+38h] [rbp-48h]
  __int64 (__fastcall ***v9)(); // [rsp+68h] [rbp-18h]
  DeviceGraphStore *v10; // [rsp+90h] [rbp+10h] BYREF
  __int64 v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = a2;
  v10 = this;
  *(_QWORD *)&v6 = &v10;
  *((_QWORD *)&v6 + 1) = &v11;
  v7 = off_180177640;
  v8 = v6;
  v9 = &v7;
  CEndpointStoreCache::FindFirstEndpoint(this, &v6, &v7);
  if ( v9 )
  {
    v3 = &v7;
    LOBYTE(v3) = v9 != &v7;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v9)[4])(v9, v3);
  }
  v4 = (_QWORD)v6 == 0LL ? 0x887C001A : 0;
  if ( (_QWORD)v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  return v4;
}
