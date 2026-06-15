/*
 * XREFs of ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x1400731B4
 * Callers:
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140071998 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDevi.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x14001FF00 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140073E40 (--4-$com_ptr_t@UIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@Uerr_returncode_policy@.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x14007F018 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Media::Devices::AudioDeviceModule *__fastcall Windows::Media::Devices::AudioDeviceModule::AudioDeviceModule(
        Windows::Media::Devices::AudioDeviceModule *this,
        HSTRING a2,
        int a3,
        HSTRING a4,
        unsigned int a5,
        unsigned int a6,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *a7)
{
  _QWORD *v9; // rbx
  HSTRING v11; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a2;
  v9 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Media::Devices::AudioDeviceModule *)((char *)this + 16));
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModule::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `IWeakReferenceSource'};
  *v9 = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 10, &v11);
  *((_DWORD *)this + 18) = a3;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 11, &v12);
  *((_DWORD *)this + 16) = a5;
  *((_DWORD *)this + 17) = a6;
  wil::com_ptr_t<Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,wil::err_returncode_policy>::operator=(
    (char *)this + 96,
    a7);
  return this;
}
