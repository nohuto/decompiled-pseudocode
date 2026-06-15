/*
 * XREFs of ??0CDeviceGraphObjectCacheManager@@QEAA@XZ @ 0x140070870
 * Callers:
 *     ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x14007079C (--$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDeviceGraphO.c)
 * Callees:
 *     ??0?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAA@IMMMI@Z @ 0x14000AB7C (--0-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElementTra.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@WRL@Microsoft@@QEAA@XZ @ 0x140070818 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAud.c)
 */

CDeviceGraphObjectCacheManager *__fastcall CDeviceGraphObjectCacheManager::CDeviceGraphObjectCacheManager(
        CDeviceGraphObjectCacheManager *this)
{
  __int64 v2; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>((__int64)this);
  *(_QWORD *)this = &CDeviceGraphObjectCacheManager::`vftable'{for `IDeviceGraphObjectCacheManager'};
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCacheManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioLogging>'};
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (__int64)this + 24,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  InitializeSRWLock((PSRWLOCK)this + 12);
  *((_QWORD *)this + 13) = 0LL;
  return this;
}
