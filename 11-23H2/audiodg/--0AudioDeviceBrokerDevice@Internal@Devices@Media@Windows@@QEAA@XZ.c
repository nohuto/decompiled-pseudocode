/*
 * XREFs of ??0AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x140003FB4
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B204 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x14001C2FC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::AudioDeviceBrokerDevice(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable'{for `IWeakReferenceSource'};
  *v2 = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 20);
  InitializeSRWLock((PSRWLOCK)this + 21);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_BYTE *)this + 208) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 224) = 0;
  return this;
}
