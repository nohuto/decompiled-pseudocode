/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@WRL@Microsoft@@QEAA@XZ @ 0x140070868
 * Callers:
 *     ??0CDeviceGraphObjectCacheManager@@QEAA@XZ @ 0x1400708C0 (--0CDeviceGraphObjectCacheManager@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::`vftable'{for `IDeviceGraphObjectCacheManager'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioLogging>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
