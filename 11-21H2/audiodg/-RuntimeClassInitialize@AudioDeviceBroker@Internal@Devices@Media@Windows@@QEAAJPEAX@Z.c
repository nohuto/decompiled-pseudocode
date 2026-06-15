/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140021424
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400217C0 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@V_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@$0?0PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAUIAudioDeviceBrokerChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_@@@Z @ 0x14001FE94 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVAudioDeviceBrokerDevice@Internal@Devices@Med.c)
 *     ??$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBrokerDevice@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x140021330 (--$MakeAndInitialize@VAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UIAudioDeviceBroke.c)
 *     ??0?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@QEAA@AEBUEventRegistrationTokenEqual@1Devices@Media@4@Upermission@01234@@Z @ 0x140024F24 (--0-$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows.c)
 *     ??0?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140024FB8 (--0-$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U-$DefaultEqualityPredic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1400295BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
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
  void **v14; // rdi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-30h]
  Windows::Media::Devices::Internal::AudioDeviceBroker *v19; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void **v22; // [rsp+80h] [rbp+30h] BYREF
  void *v23; // [rsp+88h] [rbp+38h] BYREF
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v23 = a2;
  v22 = 0LL;
  *(_QWORD *)&v18 = Windows::Media::Devices::Internal::AudioDeviceBroker::OnModuleChanged;
  DWORD2(v18) = 0;
  v19 = this;
  v20 = v18;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v5 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *>,Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>>::*)(Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,_lambda_29cc984d3fc8a0f639482bc84a6e6ba6_,-1,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *>(
           (__int64)v4,
           (__int64)&v19);
  else
    v5 = 0LL;
  v25 = v5;
  if ( !a2 )
  {
    v7 = -2147467261;
    v16 = 2147500035LL;
    v17 = 1454LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v16,
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
    v16 = (unsigned int)v7;
    v17 = 1455LL;
    goto LABEL_29;
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
    v16 = (unsigned int)v7;
    v17 = 1456LL;
    goto LABEL_29;
  }
  v22 = 0LL;
  v13 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBrokerDevice,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,void * &>(
          &v22,
          &v23);
  v7 = v13;
  if ( v13 < 0 )
  {
    v17 = 1457LL;
LABEL_28:
    v16 = (unsigned int)v13;
    goto LABEL_29;
  }
  v14 = v22;
  v13 = (*((__int64 (__fastcall **)(void **, __int64, __int64 *))*v22 + 8))(v22, v5, &v24);
  v7 = v13;
  if ( v13 < 0 )
  {
    v17 = 1458LL;
    goto LABEL_28;
  }
  (*(void (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 8) + 104LL))(*((_QWORD *)this + 8), v14);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 104LL))(*((_QWORD *)this + 9), v24);
  v7 = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v22);
  return (unsigned int)v7;
}
