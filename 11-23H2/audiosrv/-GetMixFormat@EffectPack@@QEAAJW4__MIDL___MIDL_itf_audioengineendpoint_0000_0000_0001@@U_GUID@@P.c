/*
 * XREFs of ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800179D0
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18000DE94 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180013570 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800DF300 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114848 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180115F10 (-GetMixFormat@CPolicyConfig@@UEAAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x180117D40 (PolicyConfigGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180121070 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetMixFormat @ 0x1801221C0 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180123830 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180004494 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x180017C58 (-ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV-$unique_struct@UtagPROPVAR.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180017F5C (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800600D0 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::GetMixFormat(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  __int64 v7; // rax
  GUID v8; // xmm0
  DWORD v9; // eax
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  struct tWAVEFORMATEX *v11; // rbx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ebx
  int ProcessingModeSpecificMixFormatKey; // eax
  struct _RTL_CRITICAL_SECTION *v17; // rsi
  int refreshed; // eax
  struct _RTL_CRITICAL_SECTION *v19; // rbx
  int v20; // eax
  int v21; // edi
  int v22; // [rsp+20h] [rbp-60h]
  char *v23; // [rsp+28h] [rbp-58h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+48h] [rbp-38h]
  struct _GUID v27; // [rsp+50h] [rbp-30h] BYREF
  struct _tagpropertykey v28; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a4 = 0LL;
  if ( a2 == eOffloadConnector )
  {
    v8 = (GUID)PKEY_AudioEngine_HWMixFormat;
    v9 = 8;
    goto LABEL_6;
  }
  v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v7 )
  {
    v8 = (GUID)PKEY_AudioEngine_MixFormat;
    v9 = 0;
LABEL_6:
    v28.fmtid = v8;
    v28.pid = v9;
    goto LABEL_7;
  }
  v27 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(
                                         &v27,
                                         a2 == eKeywordDetectorConnector,
                                         &v28);
  v14 = ProcessingModeSpecificMixFormatKey;
  if ( ProcessingModeSpecificMixFormatKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A18,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProcessingModeSpecificMixFormatKey,
      v22);
    return v14;
  }
LABEL_7:
  *(_OWORD *)pvar = 0LL;
  Src = 0LL;
  v10 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 161) + 0x2000LL);
  EnterCriticalSection(v10);
  lpCriticalSection = v10;
  ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 161) + 72LL), &v28, pvar);
  v11 = 0LL;
  if ( LOWORD(pvar[0]) == 65 )
    v11 = Src;
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v11 )
    goto LABEL_12;
  (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
    g_policyConfigInternal,
    &lpCriticalSection,
    *(_QWORD *)(*((_QWORD *)this + 161) + 48LL));
  v17 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 161) + 0x2000LL);
  EnterCriticalSection(v17);
  *(_QWORD *)&v27.Data1 = v17;
  ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 161) + 72LL), &v28, pvar);
  if ( LOWORD(pvar[0]) == 65 )
    v11 = Src;
  if ( v17 )
    LeaveCriticalSection(v17);
  if ( !v11 )
  {
    refreshed = EffectPack::RefreshDeviceFormat(this, a2);
    v14 = refreshed;
    if ( refreshed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A3D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)refreshed,
        v22);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_15;
    }
    v19 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 161) + 0x2000LL);
    EnterCriticalSection(v19);
    *(_QWORD *)&v27.Data1 = v19;
    v20 = ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 161) + 72LL), &v28, pvar);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A42,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v20,
        v22);
    }
    else
    {
      if ( LOWORD(pvar[0]) == 65 )
      {
        if ( v19 )
          LeaveCriticalSection(v19);
        v11 = Src;
        goto LABEL_30;
      }
      LODWORD(v23) = LOWORD(pvar[0]);
      v21 = -2147024883;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x1A43,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000DLL,
        (unsigned __int64)"unexpected vartype 0x%x",
        v23);
    }
    if ( v19 )
      LeaveCriticalSection(v19);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v14 = v21;
    goto LABEL_15;
  }
LABEL_30:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_12:
  v12 = ValidateUncompressedWaveFormatEx(v11);
  if ( v12 )
  {
    LODWORD(v23) = v12;
    v14 = -2004287480;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x1A4D,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x88890008LL,
      (unsigned __int64)"ValidateUncompressedWaveFormatEx returned 0x%08x",
      v23);
  }
  else
  {
    v13 = CloneWaveFormat(v11, a4);
    v14 = v13;
    if ( v13 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A4F,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v13,
        v22);
    else
      v14 = 0;
  }
LABEL_15:
  PropVariantClear(pvar);
  return v14;
}
