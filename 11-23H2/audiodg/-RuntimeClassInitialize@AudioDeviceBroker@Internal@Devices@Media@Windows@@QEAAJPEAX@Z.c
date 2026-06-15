/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x14001BFB0
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B10C (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001B204 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@$0?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@@Z @ 0x14001C1F0 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Med.c)
 *     ??0?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUEventRegistrationTokenEqual@1Devices@Media@4@Upermission@01234@@Z @ 0x140021A48 (--0-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows.c)
 *     ??0?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140021ADC (--0-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPredic.c)
 *     ?InternalRelease@?$ComPtr@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140023E68 (-InternalRelease@-$ComPtr@U-$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Fou.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        void *a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  int v7; // esi
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v14; // rdi
  int v15; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int128 v19; // [rsp+20h] [rbp-30h]
  Windows::Media::Devices::Internal::AudioDeviceBroker *v20; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v23; // [rsp+80h] [rbp+30h] BYREF
  HANDLE v24; // [rsp+88h] [rbp+38h] BYREF
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+48h] BYREF

  v24 = a2;
  v23 = 0LL;
  *(_QWORD *)&v19 = Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged;
  DWORD2(v19) = 0;
  v20 = this;
  v21 = v19;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
           v4,
           &v20);
  else
    v5 = 0LL;
  v26 = v5;
  if ( !a2 )
  {
    v7 = -2147467261;
    v17 = 1375LL;
LABEL_25:
    v18 = (unsigned int)v7;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v18,
      (int)Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged);
    goto LABEL_19;
  }
  v6 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 8) = 0LL;
  v7 = 0;
  v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8
    && (v9 = Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>::Vector<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *>>(v8)) != 0 )
  {
    *((_QWORD *)this + 8) = v9;
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v7 < 0 )
  {
    v17 = 1376LL;
    goto LABEL_25;
  }
  v10 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *((_QWORD *)this + 9) = 0LL;
  v7 = 0;
  v11 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11
    && (v12 = Windows::Foundation::Collections::Internal::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>::Vector<EventRegistrationToken,Windows::Media::Devices::Internal::EventRegistrationTokenEqual,XWinRT::PodLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<EventRegistrationToken>>(v11)) != 0 )
  {
    *((_QWORD *)this + 9) = v12;
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v7 < 0 )
  {
    v17 = 1377LL;
    goto LABEL_25;
  }
  v23 = 0LL;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,void * &>(
          &v23,
          &v24);
  v7 = v13;
  if ( v13 < 0 )
  {
    v18 = (unsigned int)v13;
    v17 = 1378LL;
    goto LABEL_27;
  }
  v14 = v23;
  v15 = (*(__int64 (__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *, __int64, __int64 *))(*(_QWORD *)v23 + 64LL))(
          v23,
          v5,
          &v25);
  v7 = v15;
  if ( v15 < 0 )
  {
    v18 = (unsigned int)v15;
    v17 = 1379LL;
    goto LABEL_27;
  }
  (*(void (__fastcall **)(_QWORD, Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *))(**((_QWORD **)this + 8)
                                                                                               + 104LL))(
    *((_QWORD *)this + 8),
    v14);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 104LL))(*((_QWORD *)this + 9), v25);
  v7 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Media::Devices::ModuleCommandResult *>>::InternalRelease(&v26);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v23);
  return (unsigned int)v7;
}
