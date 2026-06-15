/*
 * XREFs of ??0EffectPackConfigurationManager@@QEAA@XZ @ 0x18005B574
 * Callers:
 *     ??$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEffectPackConfigurationManager@@@Z @ 0x18005B4B8 (--$MakeAndInitialize@VEffectPackConfigurationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVEf.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

EffectPackConfigurationManager *__fastcall EffectPackConfigurationManager::EffectPackConfigurationManager(
        EffectPackConfigurationManager *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMediaNotificationCallback>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &EffectPackConfigurationManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 16), 0, 0);
  *((_BYTE *)this + 56) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return this;
}
