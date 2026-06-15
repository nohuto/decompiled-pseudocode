/*
 * XREFs of ??0AudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@QEAA@PEAUIAudioDeviceModule@123@PEAUIBuffer@Streams@Storage@3@@Z @ 0x14007FF34
 * Callers:
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x14007E6C8 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x14001C2FC (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x140081034 (--4-$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PE.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *__fastcall Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::AudioDeviceModuleNotificationEventArgs(
        Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3)
{
  _QWORD *v6; // rsi

  v6 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v6 = &Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *))(*(_QWORD *)a2 + 8LL))(a2);
  wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_returncode_policy>::operator=((char *)this + 72, a3);
  return this;
}
