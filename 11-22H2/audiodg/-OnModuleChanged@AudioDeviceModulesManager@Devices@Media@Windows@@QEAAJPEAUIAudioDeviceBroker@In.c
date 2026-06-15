/*
 * XREFs of ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140088CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140058538 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x14007B9B8 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x14007BE2C (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ??$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_9d7fead59395791ab94fec2ef4162c73_@@@Z @ 0x14007E048 (--$DoInvoke@V_lambda_9d7fead59395791ab94fec2ef4162c73_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@@12@$$QEAPEAUIAudioDeviceModule@Devices@Media@Windows@@$$QEAPEAUIBuffer@Streams@Storage@7@@Z @ 0x14007E6C8 (--$Make@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@PEAUIAudioDeviceModule@23.c)
 *     ??1?$com_ptr_t@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1400806AC (--1-$com_ptr_t@VAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@Uerr_returncode_po.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140082E60 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPEAPEAU?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@4@@Z @ 0x1400833D0 (-FindAllByIdAndInstance@AudioDeviceModulesManager@Devices@Media@Windows@@AEAAJPEAUHSTRING__@@IPE.c)
 *     ?GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z @ 0x140086BE8 (-GuidToHString@@YAJU_GUID@@PEAPEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModuleNotificationEventArgs@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14008AB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAud_ea_14008AB30.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged(
        RTL_SRWLOCK *this,
        struct Windows::Media::Devices::Internal::IAudioDeviceBroker *a2,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *a3)
{
  RTL_SRWLOCK *v5; // r14
  __int64 v6; // rax
  int ActivationFactory; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  const unsigned __int16 *v11; // rdx
  int *v12; // rdi
  __int64 v13; // rcx
  HSTRING *v14; // rax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, __int64 *); // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, struct Windows::Media::Devices::IAudioDeviceModule **); // r15
  struct Windows::Media::Devices::IAudioDeviceModule *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, struct Windows::Storage::Streams::IBuffer **); // r15
  struct Windows::Storage::Streams::IBuffer *v25; // rcx
  __int64 *v26; // rax
  struct Windows::Storage::Streams::IBuffer *v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // esi
  SIZE_T cb; // [rsp+20h] [rbp-79h] BYREF
  HSTRING string; // [rsp+28h] [rbp-71h] BYREF
  struct Windows::Media::Devices::IAudioDeviceModule *v34; // [rsp+30h] [rbp-69h] BYREF
  __int64 v35; // [rsp+38h] [rbp-61h] BYREF
  __int64 v36; // [rsp+40h] [rbp-59h] BYREF
  struct Windows::Storage::Streams::IBuffer *v37; // [rsp+48h] [rbp-51h] BYREF
  __int64 v38; // [rsp+50h] [rbp-49h] BYREF
  __int64 v39; // [rsp+58h] [rbp-41h] BYREF
  __int64 v40; // [rsp+60h] [rbp-39h] BYREF
  int v41; // [rsp+68h] [rbp-31h] BYREF
  struct Windows::Storage::Streams::IBuffer *v42; // [rsp+70h] [rbp-29h] BYREF
  struct Windows::Storage::Streams::IBuffer *v43; // [rsp+78h] [rbp-21h] BYREF
  int *v44; // [rsp+80h] [rbp-19h] BYREF
  struct Windows::Media::Devices::IAudioDeviceModule *v45; // [rsp+88h] [rbp-11h] BYREF
  RTL_SRWLOCK *v46[2]; // [rsp+90h] [rbp-9h] BYREF
  HSTRING_HEADER v47; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v5 = this + 8;
  AcquireSRWLockExclusive(this + 8);
  v46[0] = v5;
  v40 = 0LL;
  v39 = 0LL;
  v36 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  string = 0LL;
  v41 = 0;
  if ( LOBYTE(this[16].Ptr) && this[14].Ptr )
  {
    v6 = *(_QWORD *)a3;
    v38 = 0LL;
    ActivationFactory = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs *, __int64 *))(v6 + 48))(
                          a3,
                          &v38);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 883LL;
LABEL_7:
      v10 = (unsigned int)ActivationFactory;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)v10);
LABEL_54:
      WindowsDeleteString(string);
      string = 0LL;
      wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v44);
      wil::com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>((__int64 *)&v42);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v34);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v35);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v37);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v38);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v40);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v46);
      return v8;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, SIZE_T *))(*(_QWORD *)v38 + 56LL))(v38, &cb);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 884LL;
      goto LABEL_7;
    }
    if ( (unsigned int)cb < 0x28 )
    {
      v8 = 0;
      goto LABEL_54;
    }
    v12 = (int *)CoTaskMemAlloc((unsigned int)cb);
    v44 = v12;
    if ( !v12 )
    {
      v8 = -2147024882;
      v10 = 2147942414LL;
      v9 = 892LL;
      goto LABEL_8;
    }
    v13 = v40;
    v40 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = Windows::Internal::StringReference::StringReference((HSTRING *)&v47, (const unsigned __int16 (*)[35])v11);
    ActivationFactory = RoGetActivationFactory(*v14, &GUID_11fcbfc8_f93a_471b_b121_f379e349313c, &v40);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 894LL;
      goto LABEL_7;
    }
    v15 = v40;
    v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v40 + 48LL);
    v17 = v39;
    v39 = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    ActivationFactory = v16(v15, v38, &v39);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 895LL;
      goto LABEL_7;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v39 + 112LL))(
                          v39,
                          (unsigned int)cb,
                          v12);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 896LL;
      goto LABEL_7;
    }
    WindowsDeleteString(string);
    string = 0LL;
    *(_OWORD *)&v47.Reserved.Reserved1 = *((_OWORD *)v12 + 1);
    ActivationFactory = GuidToHString((struct _GUID *)&v47, &string);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 900LL;
      goto LABEL_7;
    }
    v18 = v35;
    v35 = 0LL;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    ActivationFactory = Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance(
                          (__int64)this,
                          string,
                          v12[8],
                          &v35);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 901LL;
      goto LABEL_7;
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 56LL))(v35, &v41);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 905LL;
      goto LABEL_7;
    }
    if ( v41 != 1 )
    {
      v8 = -2147467259;
      v10 = 2147500037LL;
      v9 = 906LL;
      goto LABEL_8;
    }
    v19 = v35;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Media::Devices::IAudioDeviceModule **))(*(_QWORD *)v35 + 48LL);
    v21 = v34;
    v34 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *))(*(_QWORD *)v21 + 16LL))(v21);
    ActivationFactory = v20(v19, 0LL, &v34);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 909LL;
      goto LABEL_7;
    }
    if ( !v34 )
    {
      v8 = -2147467259;
      v10 = 2147500037LL;
      v9 = 910LL;
      goto LABEL_8;
    }
    v22 = v36;
    v36 = 0LL;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v48 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v47,
      L"Windows.Storage.Streams.DataWriter",
      0x23u,
      0x22u);
    ActivationFactory = Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v48, &v36);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 914LL;
      goto LABEL_7;
    }
    if ( v36 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v36 + 96LL))(
                            v36,
                            (unsigned int)(cb - 40),
                            v12 + 10);
      v8 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v9 = 918LL;
        goto LABEL_7;
      }
      v23 = v36;
      v24 = *(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v36 + 248LL);
      v25 = v37;
      v37 = 0LL;
      if ( v25 )
        (*(void (__fastcall **)(struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v25 + 16LL))(v25);
      ActivationFactory = v24(v23, &v37);
      v8 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v9 = 919LL;
        goto LABEL_7;
      }
    }
    v42 = v37;
    v45 = v34;
    v26 = Microsoft::WRL::Details::Make<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,Windows::Media::Devices::IAudioDeviceModule *,Windows::Storage::Streams::IBuffer *>(
            (__int64 *)&v43,
            &v45,
            &v42);
    v27 = (struct Windows::Storage::Streams::IBuffer *)*v26;
    *v26 = 0LL;
    v42 = v27;
    v28 = (__int64)v43;
    if ( v43 )
    {
      v43 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(v28);
    }
    v43 = v27;
    v45 = (struct Windows::Media::Devices::IAudioDeviceModule *)this;
    v47.Reserved.Reserved1 = &v45;
    *(_QWORD *)&v47.Reserved.Reserved2[8] = &v43;
    v29 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_9d7fead59395791ab94fec2ef4162c73_>(
            this + 10,
            (__int128 *)&v47);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39E,
        (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)(unsigned int)v29);
      v8 = v30;
      goto LABEL_54;
    }
    WindowsDeleteString(string);
    string = 0LL;
    CoTaskMemFree(v12);
    if ( v27 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::IAudioDeviceModuleNotificationEventArgs,Microsoft::WRL::FtmBase>::Release(v27);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v34);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v35);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v37);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v38);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v40);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
  }
  else
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v44);
    wil::com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>((__int64 *)&v42);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v34);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v35);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v37);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v38);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v36);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v40);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v46);
  }
  return 0LL;
}
