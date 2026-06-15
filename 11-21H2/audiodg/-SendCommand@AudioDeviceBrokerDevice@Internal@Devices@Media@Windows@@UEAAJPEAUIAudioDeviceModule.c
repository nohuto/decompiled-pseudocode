/*
 * XREFs of ?SendCommand@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14007EA80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x1400210A0 (-KsSendProperty@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@K.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z @ 0x14006ED44 (--$-0$0CD@@StringReference@Internal@Windows@@QEAA@AEAY0CD@$$CBG@Z.c)
 *     ??$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIDataWriter@Streams@Storage@1@@Z @ 0x14006F19C (--$ActivateInstance@UIDataWriter@Streams@Storage@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x140075CD0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::SendCommand(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        struct Windows::Media::Devices::IAudioDeviceModule *a2,
        struct Windows::Storage::Streams::IBuffer *a3,
        struct Windows::Storage::Streams::IBuffer **a4)
{
  struct KSIDENTIFIER *v7; // rbx
  void *v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rdx
  int ActivationFactory; // eax
  unsigned int v13; // r12d
  __int64 (__fastcall *v14)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *); // rsi
  const unsigned __int16 *v15; // rdx
  HSTRING *v16; // rax
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *); // r14
  const OLECHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v20; // r14
  int v21; // eax
  SIZE_T cb; // [rsp+30h] [rbp-49h] BYREF
  ULONG v24; // [rsp+38h] [rbp-41h] BYREF
  HSTRING string; // [rsp+40h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h] BYREF
  __int64 v27; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h] BYREF
  Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *v29; // [rsp+60h] [rbp-19h]
  HSTRING_HEADER v30; // [rsp+68h] [rbp-11h] BYREF
  __int64 v31; // [rsp+80h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v29 = this;
  cb = 0LL;
  v24 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  string = 0LL;
  if ( !a2 )
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 2618LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      (const char *)v10);
    goto LABEL_48;
  }
  if ( !a3 )
  {
    v9 = -2147024809;
    v10 = 2147942487LL;
    v11 = 2619LL;
    goto LABEL_46;
  }
  if ( !a4 )
  {
    v9 = -2147467261;
    v10 = 2147500035LL;
    v11 = 2620LL;
    goto LABEL_46;
  }
  *a4 = 0LL;
  ActivationFactory = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IBuffer *, char *))(*(_QWORD *)a3 + 56LL))(
                        a3,
                        (char *)&cb + 4);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2624LL;
LABEL_45:
    v10 = (unsigned int)ActivationFactory;
    goto LABEL_46;
  }
  v13 = HIDWORD(cb) + 48;
  v7 = (struct KSIDENTIFIER *)CoTaskMemAlloc((unsigned int)(HIDWORD(cb) + 48));
  if ( !v7 )
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 2628LL;
    goto LABEL_46;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, ULONG *))(*(_QWORD *)a2 + 64LL))(
                        a2,
                        &v24);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2632LL;
    goto LABEL_45;
  }
  v14 = *(__int64 (__fastcall **)(struct Windows::Media::Devices::IAudioDeviceModule *, HSTRING *))(*(_QWORD *)a2 + 48LL);
  WindowsDeleteString(string);
  ActivationFactory = v14(a2, &string);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2633LL;
    goto LABEL_45;
  }
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v16 = Windows::Internal::StringReference::StringReference((HSTRING *)&v30, (const unsigned __int16 (*)[35])v15);
  ActivationFactory = RoGetActivationFactory(*v16, &GUID_11fcbfc8_f93a_471b_b121_f379e349313c, &v28);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2634LL;
    goto LABEL_45;
  }
  v17 = v28;
  v18 = *(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer *, __int64 *))(*(_QWORD *)v28 + 48LL);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  ActivationFactory = v18(v17, a3, &v27);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2635LL;
    goto LABEL_45;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, struct KSIDENTIFIER *))(*(_QWORD *)v27 + 112LL))(
                        v27,
                        HIDWORD(cb),
                        v7 + 2);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2636LL;
    goto LABEL_45;
  }
  v7->Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  v7->Id = 2;
  v7->Flags = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  ActivationFactory = CLSIDFromString(StringRawBuffer, &v7[1].Set);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2640LL;
    goto LABEL_45;
  }
  v7[1].Id = v24;
  v20 = (RTL_SRWLOCK *)v29;
  v21 = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
          (RTL_SRWLOCK *)v29,
          v7,
          v13,
          0LL,
          0,
          (unsigned int *)&cb);
  v9 = v21;
  if ( (!v21 || v21 == -2147024662) && (_DWORD)cb )
  {
    v8 = CoTaskMemAlloc((unsigned int)cb);
    if ( !v8 )
    {
      v9 = -2147024882;
      v10 = 2147942414LL;
      v11 = 2657LL;
      goto LABEL_46;
    }
    ActivationFactory = Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::KsSendProperty(
                          v20,
                          v7,
                          v13,
                          v8,
                          cb,
                          (unsigned int *)&cb);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v11 = 2662LL;
      goto LABEL_45;
    }
  }
  else if ( v21 < 0 )
  {
    v10 = (unsigned int)v21;
    v11 = 2666LL;
    goto LABEL_46;
  }
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v30, L"Windows.Storage.Streams.DataWriter", 0x23u, 0x22u);
  ActivationFactory = Windows::Foundation::ActivateInstance<Windows::Storage::Streams::IDataWriter>(v31, &v26);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2670LL;
    goto LABEL_45;
  }
  if ( v8 )
  {
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, void *))(*(_QWORD *)v26 + 96LL))(
                          v26,
                          (unsigned int)cb,
                          v8);
    v9 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v11 = 2674LL;
      goto LABEL_45;
    }
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v26 + 248LL))(
                        v26,
                        a4);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v11 = 2676LL;
    goto LABEL_45;
  }
  v9 = 0;
LABEL_48:
  WindowsDeleteString(string);
  string = 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v27);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v26);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v28);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v7 )
    CoTaskMemFree(v7);
  return v9;
}
