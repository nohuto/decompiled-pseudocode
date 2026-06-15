/*
 * XREFs of ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x1400707EC
 * Callers:
 *     ?GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z @ 0x14001796C (-GetDeviceGraphObjectCacheManager@@YAJPEAPEAUIDeviceGraphObjectCacheManager@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CDeviceGraphObjectCacheManager@@QEAA@XZ @ 0x1400708C0 (--0CDeviceGraphObjectCacheManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CDeviceGraphObjectCacheManager **__fastcall Microsoft::WRL::Details::Make<CDeviceGraphObjectCacheManager,>(
        CDeviceGraphObjectCacheManager **a1)
{
  CDeviceGraphObjectCacheManager *v2; // rax
  CDeviceGraphObjectCacheManager *v3; // rdi
  CDeviceGraphObjectCacheManager *v4; // rdi

  *a1 = 0LL;
  v2 = (CDeviceGraphObjectCacheManager *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    v4 = CDeviceGraphObjectCacheManager::CDeviceGraphObjectCacheManager(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CDeviceGraphObjectCacheManager *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
  }
  return a1;
}
