/*
 * XREFs of ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x18010BBC4
 * Callers:
 *     ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800DC5D0 (-ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindFirstEndpoint@CEndpointStoreCache@@QEAA?AV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@$$QEAV?$function@$$A6A_NAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18010F1FC (-FindFirstEndpoint@CEndpointStoreCache@@QEAA-AV-$com_ptr_t@VCEndpointStore@@Uerr_returncode_poli.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DeviceGraphStore::FindSaDeviceByResourceId(
        DeviceGraphStore *this,
        _QWORD *a2,
        struct ISaDeviceProxy **a3)
{
  __int64 (__fastcall ***v3)(); // rdx
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-19h] BYREF
  _QWORD *v7; // [rsp+30h] [rbp-9h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+40h] [rbp+7h] BYREF
  __int128 v9; // [rsp+48h] [rbp+Fh]
  __int64 (__fastcall ***v10)(); // [rsp+78h] [rbp+3Fh]
  DeviceGraphStore *v11; // [rsp+A0h] [rbp+67h] BYREF

  v11 = this;
  v7 = a2;
  *a2 = 0LL;
  *(_QWORD *)&v6 = &v11;
  *((_QWORD *)&v6 + 1) = &v7;
  v8 = off_18017C6D0;
  v9 = v6;
  v10 = &v8;
  CEndpointStoreCache::FindFirstEndpoint(this, &v6, &v8);
  if ( v10 )
  {
    v3 = &v8;
    LOBYTE(v3) = v10 != &v8;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v10)[4])(v10, v3);
  }
  v4 = (_QWORD)v6 == 0LL ? 0x887C001A : 0;
  if ( (_QWORD)v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v6);
  return v4;
}
