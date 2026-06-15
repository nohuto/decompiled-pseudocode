/*
 * XREFs of ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x140080850
 * Callers:
 *     ??_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140081CE0 (--_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::~AudioDeviceBrokerChangedEventArgs(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this)
{
  volatile int *v2; // rdx

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v2);
}
