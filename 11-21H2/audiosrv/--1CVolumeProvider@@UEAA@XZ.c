/*
 * XREFs of ??1CVolumeProvider@@UEAA@XZ @ 0x1800D0F98
 * Callers:
 *     ??_ECVolumeProvider@@UEAAPEAXI@Z @ 0x1800D1050 (--_ECVolumeProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x1800422B0 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVolumeProvider::~CVolumeProvider(CVolumeProvider *this)
{
  _QWORD *v2; // rdx
  _QWORD v3[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-20h]

  *(_QWORD *)this = &CVolumeProvider::`vftable';
  v3[0] = off_180176C70;
  v4 = v3;
  CEndpointStoreCache::ForEachEndpoint((__int64)this, (__int64)v3);
  if ( v4 )
  {
    v2 = v3;
    LOBYTE(v2) = v4 != v3;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 32LL))(v4, v2);
    v4 = 0LL;
  }
  *((_DWORD *)this + 3) = -1073741823;
}
