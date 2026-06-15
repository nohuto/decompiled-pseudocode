/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140017E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ??4?$CComPtr@UIAudioProcessingObject@@@ATL@@QEAAPEAUIAudioProcessingObject@@AEBV01@@Z @ 0x140010600 (--4-$CComPtr@UIAudioProcessingObject@@@ATL@@QEAAPEAUIAudioProcessingObject@@AEBV01@@Z.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140011C40 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140017D24 (-TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140020CE8 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005A208 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
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
  __int64 v9; // rdx
  int ApoDeviceIdPKey; // r15d
  void *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v17; // rcx
  int APOProcessingHostInstance; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-B9h]
  int v21; // [rsp+20h] [rbp-B9h]
  char *v22; // [rsp+28h] [rbp-B1h]
  __int64 v23; // [rsp+30h] [rbp-A9h]
  void (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-51h] BYREF
  __int64 v26; // [rsp+90h] [rbp-49h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, _QWORD); // [rsp+98h] [rbp-41h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-39h] BYREF
  LPVOID *p_pv; // [rsp+A8h] [rbp-31h]
  unsigned __int16 *v30; // [rsp+B0h] [rbp-29h] BYREF
  char v31; // [rsp+B8h] [rbp-21h]
  __int128 v32; // [rsp+C0h] [rbp-19h]
  __int128 v33; // [rsp+D0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+4Fh]

  v32 = *a2;
  v33 = v32;
  EtwEventActivityIdControl(4LL, &v33);
  *a6 = 0LL;
  if ( !a4 )
  {
    ApoDeviceIdPKey = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)0x80070057LL,
      v20);
    goto LABEL_19;
  }
  pv = 0LL;
  p_pv = &pv;
  v30 = 0LL;
  v31 = 1;
  ApoDeviceIdPKey = TryGetApoDeviceIdPKey(a5, a3, &v30);
  if ( v31 )
  {
    v9 = (__int64)p_pv;
    v11 = *p_pv;
    *p_pv = v30;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( ApoDeviceIdPKey >= 0 )
  {
    v27 = 0LL;
    ApoDeviceIdPKey = CSystemEffectWrapper::Create(a5, v9, a3, a4, 0LL, (__int64)pv, (__int64 *)&v27);
    if ( ApoDeviceIdPKey < 0 )
    {
      LODWORD(v23) = a5->Data2;
      LODWORD(v22) = a5->Data1;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x66,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)ApoDeviceIdPKey,
        (int)"APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        v22,
        v23,
        a5->Data3,
        a5->Data4[0],
        a5->Data4[1],
        a5->Data4[2],
        a5->Data4[3],
        a5->Data4[4],
        a5->Data4[5],
        a5->Data4[6],
        a5->Data4[7]);
      goto LABEL_16;
    }
    v24 = 0LL;
    v12 = (**v27)(v27, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, &v24);
    ApoDeviceIdPKey = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v12,
        v21);
      goto LABEL_15;
    }
    v13 = 0LL;
    v26 = 0LL;
    if ( v24 )
    {
      (**v24)(v24, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b, &v26);
      v13 = v26;
    }
    if ( !v13 )
    {
      ApoDeviceIdPKey = -2147467262;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)0x80004002LL,
        v21);
      goto LABEL_14;
    }
    ATL::CComPtr<IAudioProcessingObject>::operator=((__int64 *)(a1 + 96), &v24);
    v14 = (a1 + 8) & -(__int64)(a1 != 0);
    *a6 = v14;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v28 = 0LL;
    if ( ((int (__fastcall *)(_QWORD, GUID *, __int64 *))**v24)(v24, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17, &v28) < 0 )
      goto LABEL_12;
    v17 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    APOProcessingHostInstance = GetAPOProcessingHostInstance((struct IAPOProcessingHost **)(a1 + 88));
    ApoDeviceIdPKey = APOProcessingHostInstance;
    if ( APOProcessingHostInstance < 0 )
    {
      v19 = 117LL;
    }
    else
    {
      APOProcessingHostInstance = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(**(_QWORD **)(a1 + 88) + 24LL))(
                                    *(_QWORD *)(a1 + 88),
                                    v24);
      ApoDeviceIdPKey = APOProcessingHostInstance;
      if ( APOProcessingHostInstance >= 0 )
      {
LABEL_12:
        ApoDeviceIdPKey = 0;
LABEL_13:
        ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v28);
LABEL_14:
        ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v26);
LABEL_15:
        ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>((__int64 *)&v24);
LABEL_16:
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v27);
        goto LABEL_17;
      }
      v19 = 119LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)APOProcessingHostInstance,
      v21);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)(unsigned int)ApoDeviceIdPKey,
    v20);
LABEL_17:
  v15 = pv;
  pv = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_19:
  EtwEventActivityIdControl(4LL, &v33);
  return (unsigned int)ApoDeviceIdPKey;
}
