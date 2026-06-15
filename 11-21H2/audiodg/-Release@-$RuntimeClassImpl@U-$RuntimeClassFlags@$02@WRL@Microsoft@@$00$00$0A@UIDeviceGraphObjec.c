/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140007380
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140006FC0 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140020B80 (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x140033F30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDev_ea_140033F30.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x140033F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDev_ea_140033F50.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x140033F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDev_ea_140033F70.c)
 *     ??1?$ComPtr@VCDeviceGraphObjectCache@@@WRL@Microsoft@@QEAA@XZ @ 0x140068900 (--1-$ComPtr@VCDeviceGraphObjectCache@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdx
  signed __int32 v2; // r8d
  unsigned __int32 v3; // ebx
  bool v5; // zf
  signed __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 5);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v6 = _InterlockedCompareExchange64(a1 + 5, v1 - 1, v1);
    v5 = v1 == v6;
    v1 = v6;
    if ( v5 )
      goto LABEL_6;
  }
  do
    v2 = *(_DWORD *)(2 * v1 + 0x10);
  while ( v2 != 0x7FFFFFFF && v2 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v1 + 16), v2 - 1, v2) );
  v3 = v2 - 1;
LABEL_6:
  if ( !v3 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v3;
}
