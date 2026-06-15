/*
 * XREFs of ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x180064838
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594E8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DDCC (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristicsCache@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800659F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067078 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF388 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>(
        struct IVolumeProvider *a1)
{
  unsigned int v1; // edi
  struct IVolumeProvider *v2; // rax
  struct IVolumeProvider *v3; // rbx
  const struct _GUID *v4; // rcx
  struct IVolumeProvider *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = 0;
  g_pVolumeProvider = 0LL;
  v2 = (struct IVolumeProvider *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v6 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeProvider>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &CVolumeProvider::`vftable';
    g_pVolumeProvider = 0LL;
    if ( InlineIsEqualGUID(&GUID_b3fee2c6_7db6_4ab3_8c16_1882c580b851, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v4, v4) )
    {
      g_pVolumeProvider = v3;
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    else
    {
      v1 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristicsCache>::Release(v3);
    return v1;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v6);
    return 2147942414LL;
  }
}
