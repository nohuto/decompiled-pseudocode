/*
 * XREFs of ??0CBtAudioResourceManager@@QEAA@U_GUID@@@Z @ 0x18011379C
 * Callers:
 *     ??$Make@VCBtAudioResourceManager@@AEBU_GUID@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCBtAudioResourceManager@@@12@AEBU_GUID@@@Z @ 0x1801135C8 (--$Make@VCBtAudioResourceManager@@AEBU_GUID@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCBtAudioReso.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISaDeviceResourceManager@@UIBtAudioResourceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18006667C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISaDeviceResourceManager@@UIBtAudioRe.c)
 *     ??0?$map@_KV?$function@$$A6AX_N@Z@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x180066728 (--0-$map@_KV-$function@$$A6AX_N@Z@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_KV-$function@$$A6A.c)
 */

// Hidden C++ exception states: #wind=7
CBtAudioResourceManager *__fastcall CBtAudioResourceManager::CBtAudioResourceManager(
        CBtAudioResourceManager *this,
        struct _GUID *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISaDeviceResourceManager,IBtAudioResourceManager>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISaDeviceResourceManager,IBtAudioResourceManager>((__int64)this);
  *(_QWORD *)this = &CBtAudioResourceManager::`vftable'{for `ISaDeviceResourceManager'};
  *((_QWORD *)this + 1) = &CBtAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IBtAudioResourceManager>'};
  *(struct _GUID *)((char *)this + 24) = *a2;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 72), 0, 0);
  *((_QWORD *)this + 14) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 3, 0, 0);
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  std::map<unsigned __int64,std::function<void (bool)>>::map<unsigned __int64,std::function<void (bool)>>((_QWORD *)this + 22);
  return this;
}
