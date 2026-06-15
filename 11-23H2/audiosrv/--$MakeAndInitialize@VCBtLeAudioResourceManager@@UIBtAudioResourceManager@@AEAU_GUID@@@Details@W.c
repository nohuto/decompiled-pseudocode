/*
 * XREFs of ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@@Z @ 0x1800F49C8
 * Callers:
 *     ?TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x180046FE0 (-TryGetResourceManagerService@CCustomAudioEndpointResourceManagerCache@@UEAAJPEAVCEndpointCharac.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800CF338 (--1-$MakeAllocator@VEffectPackConfigurationManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CBtLeAudioResourceManager@@QEAA@XZ @ 0x1800F5294 (--0CBtLeAudioResourceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@@Z @ 0x1800FCFF0 (-RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBtLeAudioResourceManager,IBtAudioResourceManager,_GUID &>(
        _QWORD *a1,
        struct _GUID *a2)
{
  void *v4; // rax
  int v5; // ebx
  CBtLeAudioResourceManager *v6; // rdi
  struct _GUID v8; // [rsp+20h] [rbp-18h] BYREF
  void *v9; // [rsp+40h] [rbp+8h] BYREF
  CBtLeAudioResourceManager *v10; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  if ( v4 )
  {
    v6 = CBtLeAudioResourceManager::CBtLeAudioResourceManager((CBtLeAudioResourceManager *)v4);
    v10 = v6;
    v9 = 0LL;
    v8 = *a2;
    v5 = CBtLeAudioResourceManager::RuntimeClassInitialize(v6, &v8);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(CBtLeAudioResourceManager *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_19c0b8fb_6913_4145_a14a_555adcca25cf,
             a1);
      (*(void (__fastcall **)(CBtLeAudioResourceManager *))(*(_QWORD *)v6 + 16LL))(v6);
      return (unsigned int)v5;
    }
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v10);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<EffectPackConfigurationManager>::~MakeAllocator<EffectPackConfigurationManager>(&v9);
  return (unsigned int)v5;
}
