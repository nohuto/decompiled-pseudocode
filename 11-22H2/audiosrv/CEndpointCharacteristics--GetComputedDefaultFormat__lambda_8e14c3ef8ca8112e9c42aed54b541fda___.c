/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180046258
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020AA8 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 * Callees:
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x18000518C (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abad.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180113B04 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180148B78 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda__.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x18014994C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U_ea_18014994C.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
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
  void *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  void *v25; // rcx
  void *v26; // rcx
  char *v27; // rdx
  int FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77; // eax
  _WORD *v29; // r9
  _DWORD *v30; // rcx
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // r9
  void *v34; // rcx
  int v35; // eax
  _WORD *v36; // r9
  _DWORD *v37; // rcx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // r9
  int v41; // ecx
  int v42; // r8d
  __int64 v43; // r9
  void *v44; // rcx
  __int64 v45; // r9
  __int64 v46; // rdx
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  LPVOID *p_pv; // rcx
  unsigned __int64 v50; // r9
  __int64 v51; // rdx
  int v52; // ecx
  int v53; // r8d
  __int64 v54; // r9
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
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v74; // [rsp+80h] [rbp-80h] BYREF
  int v75[2]; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v76; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v77; // [rsp+98h] [rbp-68h] BYREF
  int v78; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v79; // [rsp+A8h] [rbp-58h] BYREF
  LPVOID v80; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v81; // [rsp+B8h] [rbp-48h] BYREF
  GUID *v82; // [rsp+C0h] [rbp-40h] BYREF
  _WORD **v83; // [rsp+C8h] [rbp-38h] BYREF
  PROPVARIANT v84[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v85; // [rsp+E0h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-8h]
  _DWORD v88[6]; // [rsp+100h] [rbp+0h] BYREF
  struct _tagpropertykey v89; // [rsp+118h] [rbp+18h] BYREF
  GUID v90; // [rsp+130h] [rbp+30h] BYREF
  void *v91[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v92; // [rsp+150h] [rbp+50h]
  __int128 v93; // [rsp+160h] [rbp+60h]
  __int128 v94; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

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
    v89 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v89.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v89.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v89.pid = 1;
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
            &v89,
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
    }
    else
    {
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
      }
      else
      {
        v80 = 0LL;
        v19 = *v81;
        v91[0] = &v80;
        v91[1] = 0LL;
        LOBYTE(v92) = 1;
        v21 = (*(int (__fastcall **)(__int64 *, void **))(v19 + 32))(v81, &v91[1]) >= 0;
        if ( (_BYTE)v92 )
        {
          v20 = *(void **)v91[0];
          *(_QWORD *)v91[0] = v91[1];
          if ( v20 )
            CoTaskMemFree(v20);
        }
        if ( !v21 )
          goto LABEL_16;
        *(_OWORD *)v91 = *a3;
        v92 = a3[1];
        v93 = a3[2];
        v94 = a3[3];
        v35 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                v20,
                v91,
                v80,
                v83);
        v8 = v35;
        if ( v35 >= 0 )
        {
          v36 = *v83;
          if ( *v83 )
          {
            v37 = *(_DWORD **)(a1 + 8288);
            if ( *v36 == 0xFFFE )
            {
              if ( *v37 > 4u && tlgKeywordOn((__int64)v37, 16LL) )
              {
                v78 = *(_DWORD *)(v40 + 20);
                v76 = (LPVOID)(v40 + 24);
                v69 = *(_DWORD *)(v40 + 8);
                v70 = *(_DWORD *)(v40 + 4);
                v68[0] = *(_WORD *)(v40 + 2);
                pv = L"WAVEFORMATEXTENSIBLE";
                v71 = v6;
                v79 = *(const wchar_t **)(a1 + 48);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                  v38,
                  (unsigned int)&unk_1801956E1,
                  v39,
                  v40,
                  (__int64)&v79,
                  (__int64)&v71,
                  (__int64)&pv,
                  (__int64)v68,
                  (__int64)&v70,
                  (__int64)&v69,
                  (__int64)&v76,
                  (__int64)&v78);
              }
            }
            else
            {
              v90 = GUID_00000000_0000_0010_8000_00aa00389b71;
              v90.Data1 = (unsigned __int16)*v36;
              if ( *v37 > 4u && tlgKeywordOn((__int64)v37, 16LL) )
              {
                v79 = (const wchar_t *)&v90;
                v71 = *(_DWORD *)(v43 + 8);
                v70 = *(_DWORD *)(v43 + 4);
                v68[0] = *(_WORD *)(v43 + 2);
                v76 = L"WAVEFORMATEX";
                v69 = v6;
                pv = *(LPVOID *)(a1 + 48);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                  v41,
                  (unsigned int)&unk_180195839,
                  v42,
                  v43,
                  (__int64)&pv,
                  (__int64)&v69,
                  (__int64)&v76,
                  (__int64)v68,
                  (__int64)&v70,
                  (__int64)&v71,
                  (__int64)&v79);
              }
            }
            v44 = v80;
            v80 = 0LL;
            if ( v44 )
              CoTaskMemFree(v44);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v81);
            goto LABEL_33;
          }
LABEL_16:
          v22 = v80;
          v80 = 0LL;
          if ( v22 )
            CoTaskMemFree(v22);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v81);
          v77 = 0LL;
          v23 = *v74;
          v77 = 0LL;
          v24 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v23 + 104))(
                  v74,
                  1LL,
                  &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                  &v77);
          v8 = v24;
          if ( v24 >= 0 )
          {
            pv = 0LL;
            v91[0] = &pv;
            v91[1] = 0LL;
            LOBYTE(v92) = 1;
            v8 = CTCoAllocPolicy::Alloc(v25, 1, 0x68uLL, &v91[1]);
            if ( (_BYTE)v92 )
            {
              v26 = *(void **)v91[0];
              *(_QWORD *)v91[0] = v91[1];
              if ( v26 )
                CoTaskMemFree(v26);
            }
            if ( v8 < 0 )
            {
              v47 = (unsigned int)v8;
              v48 = 6119LL;
            }
            else
            {
              *(_DWORD *)pv = 104;
              *((GUID *)pv + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
              *((GUID *)pv + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
              *((GUID *)pv + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
              v27 = (char *)pv + 64;
              *((_WORD *)pv + 32) = -2;
              *(GUID *)(v27 + 24) = GUID_00000000_0000_0010_8000_00aa00389b71;
              *((_DWORD *)v27 + 6) = 1;
              v91[0] = &v77;
              v91[1] = &pv;
              *(_QWORD *)&v92 = a3;
              *((_QWORD *)&v92 + 1) = &v83;
              FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77 = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___(
                                                                                        a1,
                                                                                        (__int64)v27,
                                                                                        (__int64)v91);
              v8 = FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77;
              if ( FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77 >= 0 )
              {
                v29 = *v83;
                if ( *v83 )
                {
                  v30 = *(_DWORD **)(a1 + 8288);
                  if ( *v29 == 0xFFFE )
                  {
                    if ( *v30 > 4u && tlgKeywordOn((__int64)v30, 16LL) )
                    {
                      v71 = *(_DWORD *)(v33 + 20);
                      v79 = (const wchar_t *)(v33 + 24);
                      v70 = *(_DWORD *)(v33 + 8);
                      v69 = *(_DWORD *)(v33 + 4);
                      v68[0] = *(_WORD *)(v33 + 2);
                      v76 = L"WAVEFORMATEXTENSIBLE";
                      v78 = v6;
                      v82 = *(GUID **)(a1 + 48);
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                        v31,
                        (unsigned int)&unk_18019578C,
                        v32,
                        v33,
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
                    v90 = GUID_00000000_0000_0010_8000_00aa00389b71;
                    v90.Data1 = (unsigned __int16)*v29;
                    if ( *v30 > 4u && tlgKeywordOn((__int64)v30, 16LL) )
                    {
                      v82 = &v90;
                      v71 = *(_DWORD *)(v54 + 8);
                      v70 = *(_DWORD *)(v54 + 4);
                      v68[0] = *(_WORD *)(v54 + 2);
                      v79 = L"WAVEFORMATEX";
                      v69 = v6;
                      v76 = *(LPVOID *)(a1 + 48);
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                        v52,
                        (unsigned int)&unk_18019559E,
                        v53,
                        v54,
                        (__int64)&v76,
                        (__int64)&v69,
                        (__int64)&v79,
                        (__int64)v68,
                        (__int64)&v70,
                        (__int64)&v71,
                        (__int64)&v82);
                    }
                  }
                  v34 = pv;
                  pv = 0LL;
LABEL_30:
                  if ( v34 )
                    CoTaskMemFree(v34);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v77);
LABEL_33:
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v74);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v75);
                  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v72);
                  PropVariantClear(v84);
                  v8 = 0;
                  goto LABEL_6;
                }
                v55 = pv;
                pv = 0LL;
                if ( v55 )
                  CoTaskMemFree(v55);
                v76 = 0LL;
                v56 = *v77;
                v91[0] = &v76;
                v91[1] = 0LL;
                LOBYTE(v92) = 1;
                v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v56 + 32))(v77, &v91[1]);
                if ( (_BYTE)v92 )
                {
                  v57 = *(void **)v91[0];
                  *(_QWORD *)v91[0] = v91[1];
                  if ( v57 )
                    CoTaskMemFree(v57);
                }
                if ( v8 < 0 )
                {
                  v50 = (unsigned int)v8;
                  v51 = 6161LL;
LABEL_60:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v51,
                    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                    (const char *)v50);
                  p_pv = &v76;
                  goto LABEL_61;
                }
                *(_OWORD *)v91 = *a3;
                v92 = a3[1];
                v93 = a3[2];
                v94 = a3[3];
                v58 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___(
                        v57,
                        v91,
                        v76,
                        v83);
                v8 = v58;
                if ( v58 < 0 )
                {
                  v50 = (unsigned int)v58;
                  v51 = 6163LL;
                  goto LABEL_60;
                }
                v59 = *v83;
                if ( *v83 )
                {
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
                      *(_QWORD *)&v90.Data1 = *(_QWORD *)(a1 + 48);
                      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                        v61,
                        (unsigned int)&unk_1801954EE,
                        v62,
                        v63,
                        (__int64)&v90,
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
                    *(GUID *)v91 = GUID_00000000_0000_0010_8000_00aa00389b71;
                    LODWORD(v91[0]) = (unsigned __int16)*v59;
                    if ( *v60 > 4u && tlgKeywordOn((__int64)v60, 16LL) )
                    {
                      *(_QWORD *)&v90.Data1 = v91;
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
                        (__int64)&v90);
                    }
                  }
                  v34 = v76;
                  v76 = 0LL;
                  goto LABEL_30;
                }
                v67 = v76;
                v76 = 0LL;
                if ( v67 )
                  CoTaskMemFree(v67);
                v8 = -2004287480;
                v45 = 2290679816LL;
                v46 = 6177LL;
LABEL_85:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v46,
                  (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (const char *)v45);
                goto LABEL_86;
              }
              v47 = (unsigned int)FirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77;
              v48 = 6147LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v48,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)v47);
            p_pv = &pv;
LABEL_61:
            wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(p_pv);
LABEL_86:
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v77);
            goto LABEL_87;
          }
          v45 = (unsigned int)v24;
          v46 = 6112LL;
          goto LABEL_85;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17D4,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v35);
        wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v80);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v81);
    }
LABEL_87:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v74);
    goto LABEL_88;
  }
  v8 = -2004287484;
LABEL_6:
  PropVariantClear(pvar);
  return (unsigned int)v8;
}
