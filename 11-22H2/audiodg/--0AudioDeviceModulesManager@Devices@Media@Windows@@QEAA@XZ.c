/*
 * XREFs of ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x140003D40
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x14001B550 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x14001C2FC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi

  v2 = this + 2;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&this[2]);
  this[7].Ptr = (PVOID)1;
  this->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable';
  this[1].Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  v2->Ptr = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  this->Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  this[1].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  v2->Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[8].Ptr = 0LL;
  this[9].Ptr = 0LL;
  this[10].Ptr = 0LL;
  InitializeSRWLock(this + 11);
  InitializeSRWLock(this + 12);
  this[13].Ptr = 0LL;
  this[14].Ptr = 0LL;
  this[15].Ptr = 0LL;
  LOBYTE(this[16].Ptr) = 0;
  return this;
}
