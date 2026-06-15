/*
 * XREFs of ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002E8D0
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180002DA0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     AudioServerGetMixFormat @ 0x180010C40 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18002BC80 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800D6B10 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800E9A90 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x1800EB9E0 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800C8FE4 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18013F2C0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18014B678 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18014B69C (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BDD4 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CEndpointCharacteristics::GetMixFormat(
        struct _RTL_CRITICAL_SECTION *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v7; // r14d
  struct _RTL_CRITICAL_SECTION *v8; // r15
  _QWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // eax
  BYTE *pData; // rbx
  int v17; // eax
  unsigned int v18; // r8d
  const char *v19; // r9
  int v20; // edx
  int v21; // r11d
  int v22; // esi
  __int64 v23; // r10
  __int16 v24; // cx
  int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int16 v29; // ax
  unsigned __int16 v30; // cx
  unsigned __int16 v31; // ax
  int v32; // ecx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdi
  struct tWAVEFORMATEX *v36; // rax
  struct tWAVEFORMATEX *v37; // rsi
  int refreshed; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // eax
  int v43; // esi
  unsigned int v44; // [rsp+20h] [rbp-79h]
  char *v45; // [rsp+28h] [rbp-71h]
  struct tagPROPVARIANT pvar; // [rsp+50h] [rbp-49h] BYREF
  PROPVARIANT v48[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v49; // [rsp+78h] [rbp-21h]
  __int128 v50; // [rsp+80h] [rbp-19h]
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+90h] [rbp-9h]
  __int128 v52; // [rsp+98h] [rbp-1h] BYREF
  int v53; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v7 = 0;
  *a4 = 0LL;
  v8 = this + 242;
  EnterCriticalSection(this + 242);
  v51 = v8;
  if ( a2 == eOffloadConnector )
  {
    v13 = PKEY_AudioEngine_HWMixFormat;
    v15 = 8;
  }
  else
  {
    v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v10 )
    {
      v50 = (__int128)*a3;
      v11 = 0;
      v9 = qword_18017E3E0;
      while ( 1 )
      {
        v12 = qword_18017E3E0[2 * v11] - v50;
        if ( !v12 )
          v12 = qword_18017E3E0[2 * v11 + 1] - *((_QWORD *)&v50 + 1);
        if ( !v12 )
          break;
        if ( ++v11 >= 0xA )
        {
          v7 = -2147023728;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1876,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x80070490LL,
            v44);
          goto LABEL_50;
        }
      }
      v13 = PKEY_AudioEngine_SignalProcessingMode_Specific_MixFormat;
      v14 = 2;
      if ( a2 == eKeywordDetectorConnector )
        v14 = 602;
      v15 = v11 + v14;
    }
    else
    {
      v13 = PKEY_AudioEngine_MixFormat;
      v15 = 0;
    }
  }
  v52 = v13;
  v53 = v15;
  pData = 0LL;
  *(_OWORD *)v48 = 0LL;
  v49 = 0LL;
  v17 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int128 *, PROPVARIANT *, _QWORD *))(*(_QWORD *)this[1].DebugInfo + 40LL))(
          this[1].DebugInfo,
          &v52,
          v48,
          v9);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x187D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v17,
      v44);
  }
  else if ( LOWORD(v48[0]) )
  {
    if ( LOWORD(v48[0]) == 65 )
    {
      if ( LODWORD(v48[1]) >= 0x12 && LODWORD(v48[1]) == *(unsigned __int16 *)(v49 + 16) + 18LL )
        pData = (BYTE *)v49;
      else
        wil::details::in1diag3::Log_Win32(retaddr, (void *)0x188A, v18, v19, v44);
    }
    else
    {
      LODWORD(v45) = LOWORD(v48[0]);
      wil::details::in1diag3::Log_Win32Msg(
        retaddr,
        (void *)0x1897,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0xD,
        (unsigned int)"unexpected vartype %d (0x%x)",
        v45);
    }
  }
  memset(&pvar, 0, sizeof(pvar));
  if ( pData )
    goto LABEL_19;
  refreshed = CEndpointCharacteristics::RefreshDeviceFormat((CEndpointCharacteristics *)this, a2);
  v40 = refreshed;
  if ( refreshed < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A1,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)refreshed,
      v44);
LABEL_76:
    v7 = v40;
    goto LABEL_49;
  }
  v41 = (*(__int64 (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, __int128 *, struct tagPROPVARIANT *))(*(_QWORD *)this[1].DebugInfo + 40LL))(
          this[1].DebugInfo,
          &v52,
          &pvar);
  v40 = v41;
  if ( v41 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A4,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v41,
      v44);
    goto LABEL_76;
  }
  if ( pvar.vt != 65 )
  {
    LODWORD(v45) = pvar.vt;
    v40 = -2147024883;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x18A5,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL,
      (int)"unexpected vartype %d (0x%x)",
      v45,
      pvar.vt);
    goto LABEL_76;
  }
  if ( !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    v40 = -2147024883;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A6,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000DLL,
      v44);
    goto LABEL_76;
  }
  pData = pvar.bstrblobVal.pData;
  if ( !pvar.bstrblobVal.pData )
  {
    v42 = -2147467261;
LABEL_75:
    LODWORD(v45) = v42;
    v40 = -2004287480;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x18AE,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL,
      (int)"ValidateUncompressedWaveFormatEx returned 0x%08x",
      v45);
    goto LABEL_76;
  }
LABEL_19:
  if ( !*((_WORD *)pData + 1) )
    goto LABEL_74;
  v20 = *((_DWORD *)pData + 1);
  if ( !v20 )
    goto LABEL_74;
  v21 = *((_DWORD *)pData + 2);
  if ( !v21 )
    goto LABEL_74;
  v22 = *((unsigned __int16 *)pData + 6);
  if ( !(_WORD)v22 )
    goto LABEL_74;
  v23 = *((unsigned __int16 *)pData + 8);
  if ( (unsigned __int16)v23 > 0x400u )
    goto LABEL_74;
  v24 = *(_WORD *)pData;
  v25 = *((unsigned __int16 *)pData + 1);
  if ( ((*(_WORD *)pData - 1) & 0xFFFD) != 0 )
  {
    if ( v24 != -2 )
    {
LABEL_84:
      v42 = 1;
      goto LABEL_75;
    }
    if ( (unsigned __int16)v23 < 0x16u )
      goto LABEL_74;
    v26 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v26 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v26 )
      goto LABEL_33;
    v27 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
      v27 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( !v27 )
    {
LABEL_33:
      v28 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pData + 3) )
        v28 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
      if ( v28 )
      {
        v29 = *((_WORD *)pData + 7);
        v30 = v29;
        if ( v29 == 32 || v29 == 64 )
        {
LABEL_37:
          v31 = *((_WORD *)pData + 9);
          if ( v31 )
          {
            if ( v30 >= v31 )
            {
              v32 = (unsigned __int16)v25 * v30;
              if ( v21 == (unsigned int)(v20 * v32) >> 3 && v22 == v32 / 8 )
                goto LABEL_41;
            }
          }
        }
      }
      else
      {
        v30 = *((_WORD *)pData + 7);
        LOWORD(v25) = *((_WORD *)pData + 1);
        if ( ((v30 - 8) & 0xFFE7) == 0 )
          goto LABEL_37;
      }
LABEL_74:
      v42 = -2147024809;
      goto LABEL_75;
    }
  }
  else
  {
    if ( (_WORD)v23 )
      goto LABEL_74;
    v43 = *((unsigned __int16 *)pData + 7);
    if ( (v43 & 7) != 0 || (unsigned __int16)v25 > 2u || v21 != (unsigned int)(v20 * v43 * v25) >> 3 )
      goto LABEL_74;
    if ( ((v24 - 1) & 0xFFFD) == 0 )
      goto LABEL_47;
    if ( v24 != -2 )
      goto LABEL_84;
  }
LABEL_41:
  v33 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
  if ( !v33 )
    v33 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
  if ( v33 )
  {
    v34 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *((_QWORD *)pData + 3);
    if ( !v34 )
      v34 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *((_QWORD *)pData + 4);
    if ( v34 )
      goto LABEL_84;
  }
LABEL_47:
  v35 = *((unsigned __int16 *)pData + 8);
  v36 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v23 + 18);
  v37 = v36;
  if ( !v36 )
  {
    *a4 = 0LL;
    v40 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18B0,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL,
      v44);
    goto LABEL_76;
  }
  memcpy_0(v36, pData, v35 + 18);
  *a4 = v37;
LABEL_49:
  PropVariantClear((PROPVARIANT *)&pvar);
  PropVariantClear(v48);
LABEL_50:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v7;
}
