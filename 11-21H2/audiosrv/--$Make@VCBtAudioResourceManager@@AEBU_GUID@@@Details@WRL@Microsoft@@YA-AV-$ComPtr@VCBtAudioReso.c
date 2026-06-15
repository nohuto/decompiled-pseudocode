/*
 * XREFs of ??$Make@VCBtAudioResourceManager@@AEBU_GUID@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCBtAudioResourceManager@@@12@AEBU_GUID@@@Z @ 0x1801135C8
 * Callers:
 *     ?GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GUID@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18011597C (-GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GU.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CBtAudioResourceManager@@QEAA@U_GUID@@@Z @ 0x18011379C (--0CBtAudioResourceManager@@QEAA@U_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
CBtAudioResourceManager **__fastcall Microsoft::WRL::Details::Make<CBtAudioResourceManager,_GUID const &>(
        CBtAudioResourceManager **a1,
        struct _GUID *a2)
{
  CBtAudioResourceManager *v4; // rax
  CBtAudioResourceManager *v5; // rdi
  struct _GUID v7; // [rsp+30h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = (CBtAudioResourceManager *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v7 = *a2;
    v5 = CBtAudioResourceManager::CBtAudioResourceManager(v4, &v7);
    if ( *a1 )
      (*(void (__fastcall **)(CBtAudioResourceManager *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
