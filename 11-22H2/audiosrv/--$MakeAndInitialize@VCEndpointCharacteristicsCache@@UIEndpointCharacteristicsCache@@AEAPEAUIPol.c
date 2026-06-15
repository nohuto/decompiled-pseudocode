/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Z @ 0x180063EF8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x18006405C (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@PEAVEffectPackConfigurationManager@@PEAUIEndpointResourceManagerProvider@@PEBU_tlgProvider_t@@@Z @ 0x180064134 (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@PEAVEffec.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082450 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &,EffectPackConfigurationManager * &,IEndpointResourceManagerProvider * &,_tlgProvider_t const * &>(
        CEndpointCharacteristicsCache *a1,
        struct IPolicyConfigInternal **a2,
        struct EffectPackConfigurationManager **a3,
        struct IEndpointResourceManagerProvider **a4,
        const struct _tlgProvider_t **a5)
{
  CEndpointCharacteristicsCache *v8; // rax
  CEndpointCharacteristicsCache *v9; // rdi
  int v10; // ebx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  CEndpointCharacteristicsCache *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = a1;
  g_pEndpointCharacteristicsCache = 0LL;
  v8 = (CEndpointCharacteristicsCache *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v12[0] = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v13);
    return (unsigned int)v10;
  }
  v12[1] = v8;
  v9 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v8);
  v12[0] = v9;
  v13 = 0LL;
  v10 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v9, *a2, *a3, *a4, *a5);
  if ( v10 < 0 )
  {
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(v12);
    goto LABEL_7;
  }
  v10 = (**(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, PVOID *))v9)(
          v9,
          &GUID_e36f3578_1b06_4bb1_9661_3981c823ba47,
          &g_pEndpointCharacteristicsCache);
  (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v10;
}
