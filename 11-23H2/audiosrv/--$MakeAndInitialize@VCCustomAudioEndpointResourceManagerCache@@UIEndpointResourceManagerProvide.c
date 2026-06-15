/*
 * XREFs of ??$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x18005AECC
 * Callers:
 *     ?InitializeCustomEndpointResourceManagerProvider@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x18005ADF0 (-InitializeCustomEndpointResourceManagerProvider@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z.c)
 * Callees:
 *     ??0CCustomAudioEndpointResourceManagerCache@@QEAA@XZ @ 0x18005AF5C (--0CCustomAudioEndpointResourceManagerCache@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCustomAudioEndpointResourceManagerCache,IEndpointResourceManagerProvider,>(
        _QWORD *a1)
{
  CCustomAudioEndpointResourceManagerCache *v2; // rax
  CCustomAudioEndpointResourceManagerCache *v3; // rdi
  unsigned int v4; // ebx
  CCustomAudioEndpointResourceManagerCache *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (CCustomAudioEndpointResourceManagerCache *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v3 = CCustomAudioEndpointResourceManagerCache::CCustomAudioEndpointResourceManagerCache(v2);
    v4 = (**(__int64 (__fastcall ***)(CCustomAudioEndpointResourceManagerCache *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_f4f46e04_decd_4a21_961b_5de15d9870a3,
           a1);
    (*(void (__fastcall **)(CCustomAudioEndpointResourceManagerCache *))(*(_QWORD *)v3 + 16LL))(v3);
    return v4;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v6);
    return 2147942414LL;
  }
}
