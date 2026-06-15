/*
 * XREFs of ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14008BE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x14001C688 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x14007B9B8 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x14007BE2C (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140082E60 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  void *v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned __int64 v10; // r9
  int v12; // eax
  unsigned int v13; // r12d
  struct KSIDENTIFIER *v14; // rsi
  __int64 (__fastcall *v15)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *); // rdi
  int v16; // eax
  const unsigned __int16 *v17; // rdx
  HSTRING *v18; // rax
  int ActivationFactory; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *); // r14
  int v22; // eax
  __int64 v23; // rdx
  const OLECHAR *StringRawBuffer; // rax
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v25; // r14
  int v26; // eax
  __int64 v27; // r9
  HSTRING string; // [rsp+30h] [rbp-59h] BYREF
  SIZE_T cb; // [rsp+38h] [rbp-51h] BYREF
  __int64 v30; // [rsp+40h] [rbp-49h] BYREF
  __int64 v31; // [rsp+48h] [rbp-41h] BYREF
  __int64 v32; // [rsp+50h] [rbp-39h] BYREF
  ULONG v33; // [rsp+58h] [rbp-31h] BYREF
  void *v34; // [rsp+60h] [rbp-29h] BYREF
  struct KSIDENTIFIER *v35; // [rsp+68h] [rbp-21h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v36; // [rsp+70h] [rbp-19h]
  HSTRING_HEADER v37; // [rsp+78h] [rbp-11h] BYREF
  __int64 v38; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v36 = this;
  cb = 0LL;
  v33 = 0;
  v35 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  string = 0LL;
  if ( !a2 )
  {
    v8 = 2539LL;
LABEL_3:
    v9 = -2147024809;
LABEL_4:
    v10 = v9;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v10);
    WindowsDeleteString(string);
LABEL_6:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v31);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v30);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v32);
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v34);
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)&v35);
    return v9;
  }
  if ( !a3 )
  {
    v8 = 2540LL;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v9 = -2147467261;
    v8 = 2541LL;
    goto LABEL_4;
  }
  *a4 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IBuffer *, char *))(*(_QWORD *)a3 + 56LL))(
          a3,
          (char *)&cb + 4);
  v9 = v12;
  if ( v12 < 0 )
  {
    v8 = 2545LL;
LABEL_17:
    v10 = (unsigned int)v12;
    goto LABEL_5;
  }
  v13 = HIDWORD(cb) + 48;
  v14 = (struct KSIDENTIFIER *)CoTaskMemAlloc((unsigned int)(HIDWORD(cb) + 48));
  v35 = v14;
  if ( !v14 )
  {
    v9 = -2147024882;
    v8 = 2549LL;
    goto LABEL_4;
  }
  v12 = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, ULONG *))(*(_QWORD *)a2 + 64LL))(
          a2,
          &v33);
  v9 = v12;
  if ( v12 < 0 )
  {
    v8 = 2553LL;
    goto LABEL_17;
  }
  v15 = *(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *))(*(_QWORD *)a2 + 48LL);
  WindowsDeleteString(string);
  v16 = v15(a2, &string);
  v9 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9FA,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)v16);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_6;
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  v18 = Windows::Internal::StringReference::StringReference((HSTRING *)&v37, (const unsigned __int16 (*)[35])v17);
  ActivationFactory = RoGetActivationFactory(*v18, &GUID_11fcbfc8_f93a_471b_b121_f379e349313c, &v32);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9FB,
      (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)(unsigned int)ActivationFactory);
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_6;
  }
  v20 = v32;
  v21 = *(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *))(*(_QWORD *)v32 + 48LL);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v22 = v21(v20, a3, &v31);
  v9 = v22;
  if ( v22 < 0 )
  {
    v23 = 2556LL;
LABEL_50:
    v27 = (unsigned int)v22;
    goto LABEL_51;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct KSIDENTIFIER *))(*(_QWORD *)v31 + 112LL))(
          v31,
          HIDWORD(cb),
          v14 + 2);
  v9 = v22;
  if ( v22 < 0 )
  {
    v23 = 2557LL;
    goto LABEL_50;
  }
  v14->Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  v14->Id = 2;
  v14->Flags = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v22 = CLSIDFromString(StringRawBuffer, &v14[1].Set);
  v9 = v22;
  if ( v22 < 0 )
  {
    v23 = 2561LL;
    goto LABEL_50;
  }
  v14[1].Id = v33;
  v25 = v36;
  v26 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
          (RTL_SRWLOCK *)v36,
          v14,
          v13,
          0LL,
          0,
          (unsigned int *)&cb);
  v9 = v26;
  if ( (!v26 || v26 == -2147024662) && (_DWORD)cb )
  {
    v7 = CoTaskMemAlloc((unsigned int)cb);
    v34 = v7;
    if ( !v7 )
    {
      v9 = -2147024882;
      v27 = 2147942414LL;
      v23 = 2578LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
        (const char *)v27);
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_6;
    }
    v22 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
            (RTL_SRWLOCK *)v25,
            v14,
            v13,
            v7,
            cb,
            (unsigned int *)&cb);
    v9 = v22;
    if ( v22 < 0 )
    {
      v23 = 2583LL;
      goto LABEL_50;
    }
  }
  else if ( v26 < 0 )
  {
    v27 = (unsigned int)v26;
    v23 = 2587LL;
    goto LABEL_51;
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  v38 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v37, L"Windows.Storage.Streams.DataWriter", 0x23u, 0x22u);
  v22 = Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v38, &v30);
  v9 = v22;
  if ( v22 < 0 )
  {
    v23 = 2591LL;
    goto LABEL_50;
  }
  if ( v7 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v30 + 96LL))(v30, (unsigned int)cb, v7);
    v9 = v22;
    if ( v22 < 0 )
    {
      v23 = 2595LL;
      goto LABEL_50;
    }
  }
  v22 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v30 + 248LL))(
          v30,
          a4);
  v9 = v22;
  if ( v22 < 0 )
  {
    v23 = 2597LL;
    goto LABEL_50;
  }
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v30);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v32);
  if ( v7 )
    CoTaskMemFree(v7);
  CoTaskMemFree(v14);
  return 0LL;
}
