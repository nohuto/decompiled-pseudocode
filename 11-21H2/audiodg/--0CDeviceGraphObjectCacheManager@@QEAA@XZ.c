/*
 * XREFs of ??0CDeviceGraphObjectCacheManager@@QEAA@XZ @ 0x140002760
 * Callers:
 *     ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x1400026F8 (--$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDeviceGraphO.c)
 * Callees:
 *     ??0?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAA@IMMMI@Z @ 0x1400027D0 (--0-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElementTra.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@WRL@Microsoft@@QEAA@XZ @ 0x140002934 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAud.c)
 */

CDeviceGraphObjectCacheManager *__fastcall CDeviceGraphObjectCacheManager::CDeviceGraphObjectCacheManager(
        CDeviceGraphObjectCacheManager *this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>();
  *(_QWORD *)this = &CDeviceGraphObjectCacheManager::`vftable'{for `IDeviceGraphObjectCacheManager'};
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCacheManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioLogging>'};
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (_DWORD)this + 24,
    v2,
    v3,
    v4,
    LODWORD(FLOAT_2_25));
  InitializeSRWLock((PSRWLOCK)this + 12);
  *((_QWORD *)this + 13) = 0LL;
  return this;
}
