/*
 * XREFs of ??$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@@Z @ 0x1800F4914
 * Callers:
 *     ?TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x180046FE0 (-TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharac.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CBtAudioResourceManager@@QEAA@XZ @ 0x1800F509C (--0CBtAudioResourceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBtAudioResourceManager,IBtAudioResourceManager,_GUID &>(
        _QWORD *a1,
        _OWORD *a2)
{
  void *v4; // rax
  CBtAudioResourceManager *v6; // rdi
  unsigned int v7; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = CBtAudioResourceManager::CBtAudioResourceManager((CBtAudioResourceManager *)v4);
    *((_OWORD *)v6 + 2) = *a2;
    v7 = (**(__int64 (__fastcall ***)(CBtAudioResourceManager *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_19c0b8fb_6913_4145_a14a_555adcca25cf,
           a1);
    (*(void (__fastcall **)(CBtAudioResourceManager *))(*(_QWORD *)v6 + 16LL))(v6);
    return v7;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v8);
    return 2147942414LL;
  }
}
