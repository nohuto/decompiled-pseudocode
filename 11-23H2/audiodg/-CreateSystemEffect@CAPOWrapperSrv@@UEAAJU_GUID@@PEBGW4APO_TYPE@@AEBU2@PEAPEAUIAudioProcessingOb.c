/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140015CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x1400033FC (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140015694 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140016174 (-TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A200 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14004A22C (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005CDEC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        const unsigned __int16 *a3,
        int a4,
        struct _GUID *a5,
        __int64 *a6)
{
  unsigned __int16 *v9; // rdx
  int ApoDeviceIdPKey; // r15d
  void *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  struct IUnknown *v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 v18; // rcx
  int APOProcessingHostInstance; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-A9h]
  int v23; // [rsp+20h] [rbp-A9h]
  char *v24; // [rsp+28h] [rbp-A1h]
  __int64 v25; // [rsp+30h] [rbp-99h]
  struct IUnknown *v26; // [rsp+80h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-41h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, struct IUnknown **); // [rsp+90h] [rbp-39h] BYREF
  __int64 v29; // [rsp+98h] [rbp-31h] BYREF
  LPVOID *p_pv; // [rsp+A0h] [rbp-29h]
  unsigned __int16 *v31; // [rsp+A8h] [rbp-21h] BYREF
  char v32; // [rsp+B0h] [rbp-19h]
  __int128 v33; // [rsp+B8h] [rbp-11h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v33 = *a2;
  v34 = v33;
  EtwEventActivityIdControl(4LL, &v34);
  *a6 = 0LL;
  if ( !a4 )
  {
    ApoDeviceIdPKey = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)0x80070057LL,
      v22);
LABEL_33:
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v33);
    return (unsigned int)ApoDeviceIdPKey;
  }
  pv = 0LL;
  p_pv = &pv;
  v31 = 0LL;
  v32 = 1;
  ApoDeviceIdPKey = TryGetApoDeviceIdPKey(a5, a3, &v31);
  if ( v32 )
  {
    v11 = *p_pv;
    v9 = v31;
    *p_pv = v31;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( ApoDeviceIdPKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)ApoDeviceIdPKey,
      v22);
LABEL_32:
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_33;
  }
  v28 = 0LL;
  ApoDeviceIdPKey = CSystemEffectWrapper::Create(
                      (__int64)a5,
                      (__int64)v9,
                      (__int64)a3,
                      a4,
                      0LL,
                      (__int64)pv,
                      (__int64)&v28);
  if ( ApoDeviceIdPKey < 0 )
  {
    LODWORD(v25) = a5->Data2;
    LODWORD(v24) = a5->Data1;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x69,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)ApoDeviceIdPKey,
      (int)"APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v24,
      v25,
      a5->Data3,
      a5->Data4[0],
      a5->Data4[1],
      a5->Data4[2],
      a5->Data4[3],
      a5->Data4[4],
      a5->Data4[5],
      a5->Data4[6],
      a5->Data4[7]);
LABEL_31:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v28);
    goto LABEL_32;
  }
  v26 = 0LL;
  v12 = (**v28)(v28, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v26);
  ApoDeviceIdPKey = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v12,
      v23);
LABEL_30:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v26);
    goto LABEL_31;
  }
  v13 = 0LL;
  v29 = 0LL;
  v14 = v26;
  if ( v26 )
  {
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v26->lpVtbl->QueryInterface)(
      v26,
      &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
      &v29);
    v14 = v26;
    v13 = v29;
  }
  if ( !v13 )
  {
    ApoDeviceIdPKey = -2147467262;
    v20 = 2147500034LL;
    v21 = 111LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)v20,
      v23);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
    goto LABEL_30;
  }
  if ( *(struct IUnknown **)(a1 + 96) != v14 )
    ATL::AtlComPtrAssign((struct IUnknown **)(a1 + 96), v14);
  v15 = (a1 + 8) & -(__int64)(a1 != 0);
  *a6 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v26->lpVtbl->QueryInterface)(
         v26,
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         a1 + 112) < 0 )
    goto LABEL_14;
  v18 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  APOProcessingHostInstance = GetAPOProcessingHostInstance((struct IAPOProcessingHost **)(a1 + 88));
  ApoDeviceIdPKey = APOProcessingHostInstance;
  if ( APOProcessingHostInstance < 0 )
  {
    v21 = 119LL;
    goto LABEL_28;
  }
  APOProcessingHostInstance = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(a1 + 88) + 24LL))(
                                *(_QWORD *)(a1 + 88),
                                v26);
  ApoDeviceIdPKey = APOProcessingHostInstance;
  if ( APOProcessingHostInstance < 0 )
  {
    v21 = 121LL;
LABEL_28:
    v20 = (unsigned int)APOProcessingHostInstance;
    goto LABEL_29;
  }
LABEL_14:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v26);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v28);
  v16 = pv;
  pv = 0LL;
  if ( v16 )
    CoTaskMemFree(v16);
  EtwEventActivityIdControl(4LL, &v34);
  return 0LL;
}
