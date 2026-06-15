/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18014164C
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x1801425C8 (CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18004AA38 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800E7A6C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18013FB9C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4___ @ 0x18013FCF8 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1e.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@4@Z @ 0x18014355C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U_ea_18014355C.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
        __int64 a1,
        int a2,
        _OWORD *a3,
        struct tWAVEFORMATEX **a4)
{
  int v6; // r12d
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  void *v19; // rcx
  bool v20; // bl
  int v21; // eax
  __int64 v22; // r9
  struct tWAVEFORMATEX *v23; // rcx
  __int64 v24; // r8
  void *v25; // rcx
  void *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  void *v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rdx
  void *v32; // rcx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  char *v35; // rdx
  int FirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4; // eax
  __int64 v37; // r9
  struct tWAVEFORMATEX *v38; // rcx
  __int64 v39; // r8
  void *v40; // rcx
  __int64 v41; // rax
  void *v42; // rcx
  int v43; // eax
  __int64 v44; // r9
  struct tWAVEFORMATEX *v45; // rcx
  __int64 v46; // r8
  void *v47; // rcx
  void *v48; // rcx
  WORD nChannels; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+70h] [rbp-90h] BYREF
  DWORD nSamplesPerSec; // [rsp+74h] [rbp-8Ch] BYREF
  DWORD v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+7Ch] [rbp-84h] BYREF
  void *v56; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v57; // [rsp+88h] [rbp-78h] BYREF
  void **v58; // [rsp+90h] [rbp-70h] BYREF
  struct tWAVEFORMATEX **v59; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v61; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v62; // [rsp+B0h] [rbp-50h] BYREF
  int v63[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v64; // [rsp+C0h] [rbp-40h] BYREF
  PROPVARIANT v65[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-28h]
  PROPVARIANT pvar[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-10h]
  void *v69[2]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v70; // [rsp+110h] [rbp+10h]
  _DWORD v71[6]; // [rsp+120h] [rbp+20h] BYREF
  struct _tagpropertykey v72; // [rsp+138h] [rbp+38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v59 = a4;
  *a4 = 0LL;
  v6 = 3;
  v71[0] = 590439624;
  v71[1] = 1283267372;
  v71[2] = 1907779772;
  v71[3] = 1730509416;
  v71[4] = 1;
  if ( a2 == 3 )
  {
    v72 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    v6 = 0;
    *(_QWORD *)&v72.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v72.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v72.pid = 1;
  }
  *(_OWORD *)v65 = 0LL;
  v66 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         v71,
         v65);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( LOWORD(v65[0]) != 31 )
    {
      v8 = -2004287484;
      goto LABEL_92;
    }
    *(_OWORD *)pvar = 0LL;
    v68 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
           *(_QWORD *)(a1 + 40),
           &v72,
           pvar);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164B,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9);
LABEL_91:
      PropVariantClear(pvar);
      goto LABEL_92;
    }
    v64 = 0LL;
    v10 = *(_QWORD *)g_DeviceEnumerator;
    v64 = 0LL;
    v11 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 **))(v10 + 40))(g_DeviceEnumerator, v65[1], &v64);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164E,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v11);
LABEL_90:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v64);
      goto LABEL_91;
    }
    *(_QWORD *)v63 = 0LL;
    v12 = *v64;
    *(_QWORD *)v63 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v12 + 24))(
            v64,
            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
            23LL);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1651,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v13);
LABEL_89:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v63);
      goto LABEL_90;
    }
    v62 = 0LL;
    v14 = **(_QWORD **)v63;
    v62 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v14 + 56))(*(_QWORD *)v63, LODWORD(pvar[1]), &v62);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1654,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v15);
LABEL_88:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v62);
      goto LABEL_89;
    }
    v60 = 0LL;
    v16 = *v62;
    v60 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v16 + 104))(
            v62,
            1LL,
            &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
            &v60);
    v8 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1659,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17);
LABEL_37:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v60);
      goto LABEL_88;
    }
    pv = 0LL;
    v18 = *v60;
    v69[0] = &pv;
    v69[1] = 0LL;
    LOBYTE(v70) = 1;
    v20 = (*(int (__fastcall **)(__int64 *, void **))(v18 + 32))(v60, &v69[1]) >= 0;
    if ( (_BYTE)v70 )
    {
      v19 = *(void **)v69[0];
      *(_QWORD *)v69[0] = v69[1];
      if ( v19 )
        CoTaskMemFree(v19);
    }
    if ( v20 )
    {
      *(_OWORD *)v69 = *a3;
      v70 = a3[1];
      v21 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
              (__int64)v19,
              (__int64)v69,
              (unsigned int *)pv,
              v59);
      v8 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x165E,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v21);
LABEL_35:
        v25 = pv;
        pv = 0LL;
        if ( v25 )
          CoTaskMemFree(v25);
        goto LABEL_37;
      }
      v23 = *v59;
      if ( *v59 )
      {
        v24 = *(_QWORD *)(a1 + 9784);
        if ( v23->wFormatTag == 0xFFFE )
        {
          if ( *(_DWORD *)v24 > 4u
            && (*(_BYTE *)(v24 + 16) & 0x10) != 0
            && (*(_QWORD *)(v24 + 24) & 0x10LL) == *(_QWORD *)(v24 + 24) )
          {
            v55 = *(_DWORD *)&v23[1].nChannels;
            v56 = (char *)&v23[1].nSamplesPerSec + 2;
            nAvgBytesPerSec = v23->nAvgBytesPerSec;
            nSamplesPerSec = v23->nSamplesPerSec;
            nChannels = v23->nChannels;
            v57 = L"WAVEFORMATEXTENSIBLE";
            v54 = v6;
            v58 = *(void ***)(a1 + 24);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              v24,
              (unsigned int)&unk_18018E7EE,
              v24,
              v22,
              (__int64)&v58,
              (__int64)&v54,
              (__int64)&v57,
              (__int64)&nChannels,
              (__int64)&nSamplesPerSec,
              (__int64)&nAvgBytesPerSec,
              (__int64)&v56,
              (__int64)&v55);
          }
        }
        else
        {
          *(GUID *)v69 = GUID_00000000_0000_0010_8000_00aa00389b71;
          LODWORD(v69[0]) = v23->wFormatTag;
          if ( *(_DWORD *)v24 > 4u
            && (*(_BYTE *)(v24 + 16) & 0x10) != 0
            && (*(_QWORD *)(v24 + 24) & 0x10LL) == *(_QWORD *)(v24 + 24) )
          {
            v58 = v69;
            v54 = v23->nAvgBytesPerSec;
            nSamplesPerSec = v23->nSamplesPerSec;
            nChannels = v23->nChannels;
            v57 = L"WAVEFORMATEX";
            nAvgBytesPerSec = v6;
            v56 = *(void **)(a1 + 24);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
              v24,
              byte_18018E899,
              v24,
              v22,
              &v56,
              (__int64)&nAvgBytesPerSec,
              (void **)&v57,
              (__int64)&nChannels,
              (__int64)&nSamplesPerSec,
              (__int64)&v54,
              (__int64 *)&v58);
          }
        }
        v8 = 0;
        goto LABEL_35;
      }
    }
    v26 = pv;
    pv = 0LL;
    if ( v26 )
      CoTaskMemFree(v26);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v60);
    v61 = 0LL;
    v27 = *v62;
    v61 = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v27 + 104))(
            v62,
            1LL,
            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
            &v61);
    v8 = v28;
    if ( v28 < 0 )
    {
      v30 = (unsigned int)v28;
      v31 = 5738LL;
LABEL_86:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v30);
LABEL_87:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v61);
      goto LABEL_88;
    }
    pv = 0LL;
    v69[0] = &pv;
    v69[1] = 0LL;
    LOBYTE(v70) = 1;
    v8 = CTCoAllocPolicy::Alloc(v29, 1, 0x68uLL, &v69[1]);
    if ( (_BYTE)v70 )
    {
      v32 = *(void **)v69[0];
      *(_QWORD *)v69[0] = v69[1];
      if ( v32 )
        CoTaskMemFree(v32);
    }
    if ( v8 >= 0 )
    {
      *(_DWORD *)pv = 104;
      *((GUID *)pv + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
      *((GUID *)pv + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      *((GUID *)pv + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
      v35 = (char *)pv + 64;
      *((_WORD *)pv + 32) = -2;
      *(GUID *)(v35 + 24) = GUID_00000000_0000_0010_8000_00aa00389b71;
      *((_DWORD *)v35 + 6) = 1;
      v69[0] = &v61;
      v69[1] = &pv;
      *(_QWORD *)&v70 = a3;
      *((_QWORD *)&v70 + 1) = &v59;
      FirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4 = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4___(
                                                                                a1,
                                                                                (__int64)v35,
                                                                                (__int64)v69);
      v8 = FirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4;
      if ( FirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4 >= 0 )
      {
        v38 = *v59;
        if ( *v59 )
        {
          v39 = *(_QWORD *)(a1 + 9784);
          if ( v38->wFormatTag == 0xFFFE )
          {
            if ( *(_DWORD *)v39 > 4u
              && (*(_BYTE *)(v39 + 16) & 0x10) != 0
              && (*(_QWORD *)(v39 + 24) & 0x10LL) == *(_QWORD *)(v39 + 24) )
            {
              v54 = *(_DWORD *)&v38[1].nChannels;
              v58 = (void **)((char *)&v38[1].nSamplesPerSec + 2);
              nSamplesPerSec = v38->nAvgBytesPerSec;
              nAvgBytesPerSec = v38->nSamplesPerSec;
              nChannels = v38->nChannels;
              v57 = L"WAVEFORMATEXTENSIBLE";
              v55 = v6;
              v56 = *(void **)(a1 + 24);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                v39,
                (unsigned int)&unk_18018E6A1,
                v39,
                v37,
                (__int64)&v56,
                (__int64)&v55,
                (__int64)&v57,
                (__int64)&nChannels,
                (__int64)&nAvgBytesPerSec,
                (__int64)&nSamplesPerSec,
                (__int64)&v58,
                (__int64)&v54);
            }
          }
          else
          {
            *(GUID *)v69 = GUID_00000000_0000_0010_8000_00aa00389b71;
            LODWORD(v69[0]) = v38->wFormatTag;
            if ( *(_DWORD *)v39 > 4u
              && (*(_BYTE *)(v39 + 16) & 0x10) != 0
              && (*(_QWORD *)(v39 + 24) & 0x10LL) == *(_QWORD *)(v39 + 24) )
            {
              v58 = v69;
              v54 = v38->nAvgBytesPerSec;
              nSamplesPerSec = v38->nSamplesPerSec;
              nChannels = v38->nChannels;
              v57 = L"WAVEFORMATEX";
              nAvgBytesPerSec = v6;
              v56 = *(void **)(a1 + 24);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                v39,
                byte_18018E74E,
                v39,
                v37,
                &v56,
                (__int64)&nAvgBytesPerSec,
                (void **)&v57,
                (__int64)&nChannels,
                (__int64)&nSamplesPerSec,
                (__int64)&v54,
                (__int64 *)&v58);
            }
          }
          v8 = 0;
          goto LABEL_81;
        }
        v40 = pv;
        pv = 0LL;
        if ( v40 )
          CoTaskMemFree(v40);
        pv = 0LL;
        v41 = *v61;
        v69[0] = &pv;
        v69[1] = 0LL;
        LOBYTE(v70) = 1;
        v8 = (*(__int64 (__fastcall **)(__int64 *, void **))(v41 + 32))(v61, &v69[1]);
        if ( (_BYTE)v70 )
        {
          v42 = *(void **)v69[0];
          *(_QWORD *)v69[0] = v69[1];
          if ( v42 )
            CoTaskMemFree(v42);
        }
        if ( v8 >= 0 )
        {
          *(_OWORD *)v69 = *a3;
          v70 = a3[1];
          v43 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                  (__int64)v42,
                  (__int64)v69,
                  (unsigned int *)pv,
                  v59);
          v8 = v43;
          if ( v43 >= 0 )
          {
            v45 = *v59;
            if ( !*v59 )
            {
              v48 = pv;
              pv = 0LL;
              if ( v48 )
                CoTaskMemFree(v48);
              v8 = -2004287480;
              v30 = 2290679816LL;
              v31 = 5803LL;
              goto LABEL_86;
            }
            v46 = *(_QWORD *)(a1 + 9784);
            if ( v45->wFormatTag == 0xFFFE )
            {
              if ( *(_DWORD *)v46 > 4u
                && (*(_BYTE *)(v46 + 16) & 0x10) != 0
                && (*(_QWORD *)(v46 + 24) & 0x10LL) == *(_QWORD *)(v46 + 24) )
              {
                v54 = *(_DWORD *)&v45[1].nChannels;
                v58 = (void **)((char *)&v45[1].nSamplesPerSec + 2);
                nSamplesPerSec = v45->nAvgBytesPerSec;
                nAvgBytesPerSec = v45->nSamplesPerSec;
                nChannels = v45->nChannels;
                v57 = L"WAVEFORMATEXTENSIBLE";
                v55 = v6;
                v56 = *(void **)(a1 + 24);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
                  v46,
                  (unsigned int)&unk_18018E54E,
                  v46,
                  v44,
                  (__int64)&v56,
                  (__int64)&v55,
                  (__int64)&v57,
                  (__int64)&nChannels,
                  (__int64)&nAvgBytesPerSec,
                  (__int64)&nSamplesPerSec,
                  (__int64)&v58,
                  (__int64)&v54);
              }
            }
            else
            {
              *(GUID *)v69 = GUID_00000000_0000_0010_8000_00aa00389b71;
              LODWORD(v69[0]) = v45->wFormatTag;
              if ( *(_DWORD *)v46 > 4u
                && (*(_BYTE *)(v46 + 16) & 0x10) != 0
                && (*(_QWORD *)(v46 + 24) & 0x10LL) == *(_QWORD *)(v46 + 24) )
              {
                v58 = v69;
                v54 = v45->nAvgBytesPerSec;
                nSamplesPerSec = v45->nSamplesPerSec;
                nChannels = v45->nChannels;
                v57 = L"WAVEFORMATEX";
                nAvgBytesPerSec = v6;
                v56 = *(void **)(a1 + 24);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
                  v46,
                  byte_18018E5FE,
                  v46,
                  v44,
                  &v56,
                  (__int64)&nAvgBytesPerSec,
                  (void **)&v57,
                  (__int64)&nChannels,
                  (__int64)&nSamplesPerSec,
                  (__int64)&v54,
                  (__int64 *)&v58);
              }
            }
            v8 = 0;
LABEL_81:
            v47 = pv;
            pv = 0LL;
            if ( v47 )
              CoTaskMemFree(v47);
            goto LABEL_87;
          }
          v33 = (unsigned int)v43;
          v34 = 5789LL;
        }
        else
        {
          v33 = (unsigned int)v8;
          v34 = 5787LL;
        }
      }
      else
      {
        v33 = (unsigned int)FirstMatchingPreferredFormat__lambda_42183860914b42c471786558e7d1eac4;
        v34 = 5773LL;
      }
    }
    else
    {
      v33 = (unsigned int)v8;
      v34 = 5745LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v33);
    goto LABEL_81;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1646,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7);
LABEL_92:
  PropVariantClear(v65);
  return (unsigned int)v8;
}
