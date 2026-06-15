/*
 * XREFs of ??0CDeviceGraphObjectCache@@QEAA@XZ @ 0x140003E08
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140003840 (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 * Callees:
 *     ??0?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x140006864 (--0-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CDeviceGraphObjectCache *__fastcall CDeviceGraphObjectCache::CDeviceGraphObjectCache(CDeviceGraphObjectCache *this)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCacheInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDeviceGraphObjectCache::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 64), 0, 0);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 10;
  CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>((char *)this + 160);
  *((_BYTE *)this + 320) = 0;
  *((_QWORD *)this + 41) = 0LL;
  return this;
}
