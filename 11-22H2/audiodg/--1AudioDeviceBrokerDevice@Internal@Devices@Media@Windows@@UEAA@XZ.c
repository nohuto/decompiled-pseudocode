/*
 * XREFs of ??1AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x1400808E8
 * Callers:
 *     ??_GAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140039970 (--_GAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F1C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140037E6E (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x14008E554 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::~AudioDeviceBrokerDevice(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this)
{
  _QWORD *v2; // rsi
  void *v3; // rdx
  wil::details *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rcx
  volatile int *v7; // rdx

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable';
  v2 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
    (char *)this + 144,
    0LL);
  if ( *((_QWORD *)this + 22) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 27);
    *((_BYTE *)this + 224) = 1;
    if ( this != (Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *)-216LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 27);
    SetThreadpoolWait(*((PTP_WAIT *)this + 22), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 22), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  *((_BYTE *)this + 208) = 1;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 14,
    0LL);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 24);
  v4 = (wil::details *)*((_QWORD *)this + 23);
  if ( v4 )
    wil::details::CloseHandle(v4, v3);
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    *((_QWORD *)this + 19) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
      v5,
      (volatile int *)v3);
  }
  if ( *v2 )
    CM_Unregister_Notification();
  v6 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 13);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)this + 12);
  WindowsDeleteString(*((HSTRING *)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v7);
}
