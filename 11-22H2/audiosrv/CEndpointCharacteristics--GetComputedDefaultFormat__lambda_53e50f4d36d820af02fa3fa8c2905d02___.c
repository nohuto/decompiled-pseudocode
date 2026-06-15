/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x1800541F0
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180054084 (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180113B04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180148A14 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x180148CE4 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x18014994C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U_ea_18014994C.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        __int64 a1,
        int a2,
        _OWORD *a3,
        _QWORD *a4)
{
  int v6; // r12d
  int v7; // eax
  int v8; // ebx
  int v10; // eax
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  void *v20; // rcx
  bool v21; // bl
  int v22; // eax
  _WORD *v23; // r9
  _DWORD *v24; // rcx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // r9
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // r9
  void *v31; // rcx
  void *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  void *v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rdx
  void *v38; // rcx
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
  LPVOID *v41; // rcx
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  char *v44; // rdx
  int FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710; // eax
  _WORD *v46; // r9
  _DWORD *v47; // rcx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // r9
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // r9
  void *v54; // rcx
  void *v55; // rcx
  __int64 v56; // rax
  void *v57; // rcx
  int v58; // eax
  _WORD *v59; // r9
  _DWORD *v60; // rcx
  int v61; // ecx
  int v62; // r8d
  __int64 v63; // r9
  int v64; // ecx
  int v65; // r8d
  __int64 v66; // r9
  void *v67; // rcx
  _WORD v68[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v69; // [rsp+64h] [rbp-9Ch] BYREF
  int v70; // [rsp+68h] [rbp-98h] BYREF
  int v71; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 *v72; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v73; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v74; // [rsp+80h] [rbp-80h] BYREF
  int v75[2]; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v76; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v77; // [rsp+98h] [rbp-68h] BYREF
  int v78; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v79; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v81; // [rsp+B8h] [rbp-48h] BYREF
  GUID *v82; // [rsp+C0h] [rbp-40h] BYREF
  _WORD **v83; // [rsp+C8h] [rbp-38h] BYREF
  PROPVARIANT v84[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v85; // [rsp+E0h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-8h]
  _DWORD v88[8]; // [rsp+100h] [rbp+0h] BYREF
  void *v89[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v90; // [rsp+130h] [rbp+30h]
  struct _tagpropertykey v91; // [rsp+140h] [rbp+40h] BYREF
  GUID v92; // [rsp+158h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v83 = (_WORD **)a4;
  *a4 = 0LL;
  v6 = 3;
  v88[0] = 590439624;
  v88[1] = 1283267372;
  v88[2] = 1907779772;
  v88[3] = 1730509416;
  v88[4] = 1;
  if ( a2 == 3 )
  {
    v91 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v91.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v91.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v91.pid = 1;
    v6 = 0;
  }
  *(_OWORD *)pvar = 0LL;
  v87 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
         *(_QWORD *)(a1 + 72),
         v88,
         pvar);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17BC,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_6;
  }
  if ( LOWORD(pvar[0]) == 31 )
  {
    *(_OWORD *)v84 = 0LL;
    v85 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**(_QWORD **)(a1 + 72) + 40LL))(
            *(_QWORD *)(a1 + 72),
            &v91,
            v84);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17C1,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10);
LABEL_90:
      PropVariantClear(v84);
      goto LABEL_6;
    }
    v72 = 0LL;
    lpVtbl = g_DeviceEnumerator->lpVtbl;
    v72 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, PROPVARIANT, __int64 **))lpVtbl->GetDevice)(
            g_DeviceEnumerator,
            pvar[1],
            &v72);
    v8 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17C4,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
LABEL_89:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v72);
      goto LABEL_90;
    }
    *(_QWORD *)v75 = 0LL;
    v13 = *v72;
    *(_QWORD *)v75 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v13 + 24))(
            v72,
            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
            23LL);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17C7,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v14);
LABEL_88:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v75);
      goto LABEL_89;
    }
    v74 = 0LL;
    v15 = **(_QWORD **)v75;
    v74 = 0LL;
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v15 + 56))(*(_QWORD *)v75, LODWORD(v84[1]), &v74);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17CA,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v16);
LABEL_87:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v74);
      goto LABEL_88;
    }
    v81 = 0LL;
    v17 = *v74;
    v81 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v17 + 104))(
            v74,
            1LL,
            &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
            &v81);
    v8 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17CF,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v18);
LABEL_20:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v81);
      goto LABEL_87;
    }
    pv = 0LL;
    v19 = *v81;
    v89[0] = &pv;
    v89[1] = 0LL;
    LOBYTE(v90) = 1;
    v21 = (*(int (__fastcall **)(__int64 *, void **))(v19 + 32))(v81, &v89[1]) >= 0;
    if ( (_BYTE)v90 )
    {
      v20 = *(void **)v89[0];
      *(_QWORD *)v89[0] = v89[1];
      if ( v20 )
        CoTaskMemFree(v20);
    }
    if ( v21 )
    {
      *(_OWORD *)v89 = *a3;
      v90 = a3[1];
      v22 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
              v20,
              v89,
              pv,
              v83);
      v8 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17D4,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v22);
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
        goto LABEL_20;
      }
      v23 = *v83;
      if ( *v83 )
      {
        v24 = *(_DWORD **)(a1 + 8288);
        if ( *v23 == 0xFFFE )
        {
          if ( *v24 > 4u && tlgKeywordOn((__int64)v24, 16LL) )
          {
            v78 = *(_DWORD *)(v27 + 20);
            v76 = (LPVOID)(v27 + 24);
            v69 = *(_DWORD *)(v27 + 8);
            v70 = *(_DWORD *)(v27 + 4);
            v68[0] = *(_WORD *)(v27 + 2);
            v73 = L"WAVEFORMATEXTENSIBLE";
            v71 = v6;
            v79 = *(const wchar_t **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v25,
              (unsigned int)&unk_1801956E1,
              v26,
              v27,
              (__int64)&v79,
              (__int64)&v71,
              (__int64)&v73,
              (__int64)v68,
              (__int64)&v70,
              (__int64)&v69,
              (__int64)&v76,
              (__int64)&v78);
          }
        }
        else
        {
          v92 = GUID_00000000_0000_0010_8000_00aa00389b71;
          v92.Data1 = (unsigned __int16)*v23;
          if ( *v24 > 4u && tlgKeywordOn((__int64)v24, 16LL) )
          {
            v79 = (const wchar_t *)&v92;
            v71 = *(_DWORD *)(v30 + 8);
            v70 = *(_DWORD *)(v30 + 4);
            v68[0] = *(_WORD *)(v30 + 2);
            v76 = L"WAVEFORMATEX";
            v69 = v6;
            v73 = *(LPVOID *)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v28,
              (unsigned int)&unk_180195839,
              v29,
              v30,
              (__int64)&v73,
              (__int64)&v69,
              (__int64)&v76,
              (__int64)v68,
              (__int64)&v70,
              (__int64)&v71,
              (__int64)&v79);
          }
        }
        v31 = pv;
        pv = 0LL;
        if ( v31 )
          CoTaskMemFree(v31);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v81);
LABEL_38:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v74);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v75);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v72);
        PropVariantClear(v84);
        v8 = 0;
        goto LABEL_6;
      }
    }
    v32 = pv;
    pv = 0LL;
    if ( v32 )
      CoTaskMemFree(v32);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v81);
    v77 = 0LL;
    v33 = *v74;
    v77 = 0LL;
    v34 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v33 + 104))(
            v74,
            1LL,
            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
            &v77);
    v8 = v34;
    if ( v34 < 0 )
    {
      v36 = (unsigned int)v34;
      v37 = 6112LL;
LABEL_85:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v36);
      goto LABEL_86;
    }
    v73 = 0LL;
    v89[0] = &v73;
    v89[1] = 0LL;
    LOBYTE(v90) = 1;
    v8 = CTCoAllocPolicy::Alloc(v35, 1, 0x68uLL, &v89[1]);
    if ( (_BYTE)v90 )
    {
      v38 = *(void **)v89[0];
      *(_QWORD *)v89[0] = v89[1];
      if ( v38 )
        CoTaskMemFree(v38);
    }
    if ( v8 < 0 )
    {
      v39 = (unsigned int)v8;
      v40 = 6119LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v39);
      v41 = &v73;
LABEL_52:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(v41);
LABEL_86:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v77);
      goto LABEL_87;
    }
    *(_DWORD *)v73 = 104;
    *((GUID *)v73 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
    *((GUID *)v73 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    *((GUID *)v73 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
    v44 = (char *)v73 + 64;
    *((_WORD *)v73 + 32) = -2;
    *(GUID *)(v44 + 24) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *((_DWORD *)v44 + 6) = 1;
    v89[0] = &v77;
    v89[1] = &v73;
    *(_QWORD *)&v90 = a3;
    *((_QWORD *)&v90 + 1) = &v83;
    FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710 = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___(
                                                                              a1,
                                                                              v44,
                                                                              v89);
    v8 = FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710;
    if ( FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710 < 0 )
    {
      v39 = (unsigned int)FirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710;
      v40 = 6147LL;
      goto LABEL_49;
    }
    v46 = *v83;
    if ( *v83 )
    {
      v47 = *(_DWORD **)(a1 + 8288);
      if ( *v46 == 0xFFFE )
      {
        if ( *v47 > 4u && tlgKeywordOn((__int64)v47, 16LL) )
        {
          v71 = *(_DWORD *)(v50 + 20);
          v79 = (const wchar_t *)(v50 + 24);
          v70 = *(_DWORD *)(v50 + 8);
          v69 = *(_DWORD *)(v50 + 4);
          v68[0] = *(_WORD *)(v50 + 2);
          v76 = L"WAVEFORMATEXTENSIBLE";
          v78 = v6;
          v82 = *(GUID **)(a1 + 48);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
            v48,
            (unsigned int)&unk_18019578C,
            v49,
            v50,
            (__int64)&v82,
            (__int64)&v78,
            (__int64)&v76,
            (__int64)v68,
            (__int64)&v69,
            (__int64)&v70,
            (__int64)&v79,
            (__int64)&v71);
        }
      }
      else
      {
        v92 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v92.Data1 = (unsigned __int16)*v46;
        if ( *v47 > 4u && tlgKeywordOn((__int64)v47, 16LL) )
        {
          v82 = &v92;
          v71 = *(_DWORD *)(v53 + 8);
          v70 = *(_DWORD *)(v53 + 4);
          v68[0] = *(_WORD *)(v53 + 2);
          v79 = L"WAVEFORMATEX";
          v69 = v6;
          v76 = *(LPVOID *)(a1 + 48);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            v51,
            (unsigned int)&unk_18019559E,
            v52,
            v53,
            (__int64)&v76,
            (__int64)&v69,
            (__int64)&v79,
            (__int64)v68,
            (__int64)&v70,
            (__int64)&v71,
            (__int64)&v82);
        }
      }
      v54 = v73;
      v73 = 0LL;
      goto LABEL_64;
    }
    v55 = v73;
    v73 = 0LL;
    if ( v55 )
      CoTaskMemFree(v55);
    v76 = 0LL;
    v56 = *v77;
    v89[0] = &v76;
    v89[1] = 0LL;
    LOBYTE(v90) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v56 + 32))(v77, &v89[1]);
    if ( (_BYTE)v90 )
    {
      v57 = *(void **)v89[0];
      *(_QWORD *)v89[0] = v89[1];
      if ( v57 )
        CoTaskMemFree(v57);
    }
    if ( v8 < 0 )
    {
      v42 = (unsigned int)v8;
      v43 = 6161LL;
    }
    else
    {
      *(_OWORD *)v89 = *a3;
      v90 = a3[1];
      v58 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
              v57,
              v89,
              v76,
              v83);
      v8 = v58;
      if ( v58 >= 0 )
      {
        v59 = *v83;
        if ( !*v83 )
        {
          v67 = v76;
          v76 = 0LL;
          if ( v67 )
            CoTaskMemFree(v67);
          v8 = -2004287480;
          v36 = 2290679816LL;
          v37 = 6177LL;
          goto LABEL_85;
        }
        v60 = *(_DWORD **)(a1 + 8288);
        if ( *v59 == 0xFFFE )
        {
          if ( *v60 > 4u && tlgKeywordOn((__int64)v60, 16LL) )
          {
            v71 = *(_DWORD *)(v63 + 20);
            v82 = (GUID *)(v63 + 24);
            v70 = *(_DWORD *)(v63 + 8);
            v69 = *(_DWORD *)(v63 + 4);
            v68[0] = *(_WORD *)(v63 + 2);
            v79 = L"WAVEFORMATEXTENSIBLE";
            v78 = v6;
            *(_QWORD *)&v92.Data1 = *(_QWORD *)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v61,
              (unsigned int)&unk_1801954EE,
              v62,
              v63,
              (__int64)&v92,
              (__int64)&v78,
              (__int64)&v79,
              (__int64)v68,
              (__int64)&v69,
              (__int64)&v70,
              (__int64)&v82,
              (__int64)&v71);
          }
        }
        else
        {
          *(GUID *)v89 = GUID_00000000_0000_0010_8000_00aa00389b71;
          LODWORD(v89[0]) = (unsigned __int16)*v59;
          if ( *v60 > 4u && tlgKeywordOn((__int64)v60, 16LL) )
          {
            *(_QWORD *)&v92.Data1 = v89;
            v71 = *(_DWORD *)(v66 + 8);
            v70 = *(_DWORD *)(v66 + 4);
            v68[0] = *(_WORD *)(v66 + 2);
            v82 = (GUID *)L"WAVEFORMATEX";
            v69 = v6;
            v79 = *(const wchar_t **)(a1 + 48);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v64,
              (unsigned int)&unk_18019563E,
              v65,
              v66,
              (__int64)&v79,
              (__int64)&v69,
              (__int64)&v82,
              (__int64)v68,
              (__int64)&v70,
              (__int64)&v71,
              (__int64)&v92);
          }
        }
        v54 = v76;
        v76 = 0LL;
LABEL_64:
        if ( v54 )
          CoTaskMemFree(v54);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v77);
        goto LABEL_38;
      }
      v42 = (unsigned int)v58;
      v43 = 6163LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v43,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v42);
    v41 = &v76;
    goto LABEL_52;
  }
  v8 = -2004287484;
LABEL_6:
  PropVariantClear(pvar);
  return (unsigned int)v8;
}
