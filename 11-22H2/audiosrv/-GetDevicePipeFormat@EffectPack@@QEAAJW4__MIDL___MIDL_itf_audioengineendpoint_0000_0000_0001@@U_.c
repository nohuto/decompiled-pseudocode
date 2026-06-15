/*
 * XREFs of ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E690
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18001796C (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x180017C58 (-ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV-$unique_struct@UtagPROPVAR.c)
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x180019B28 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800600C0 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::GetDevicePipeFormat(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  int ProcessingModeSpecificDevicePipeFormatKey; // eax
  unsigned int v8; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  int refreshed; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // r9
  __int64 v20; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-50h] BYREF
  struct _GUID v23; // [rsp+40h] [rbp-38h] BYREF
  struct _tagpropertykey v24; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]

  *a4 = 0LL;
  v23 = *a3;
  ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                &v23,
                                                a2 == eKeywordDetectorConnector,
                                                &v24);
  v8 = ProcessingModeSpecificDevicePipeFormatKey;
  if ( ProcessingModeSpecificDevicePipeFormatKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AAD,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProcessingModeSpecificDevicePipeFormatKey,
      (int)lpCriticalSection);
    return v8;
  }
  memset(&pvar, 0, sizeof(pvar));
  v9 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 161) + 0x2000LL);
  EnterCriticalSection(v9);
  lpCriticalSection = v9;
  ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 161) + 72LL), &v24, &pvar);
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( pvar.vt != 65 )
  {
    wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(&pvar);
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
      g_policyConfigInternal,
      &lpCriticalSection,
      *(_QWORD *)(*((_QWORD *)this + 161) + 48LL));
    v12 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 161) + 0x2000LL);
    EnterCriticalSection(v12);
    *(_QWORD *)&v23.Data1 = v12;
    ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 161) + 72LL), &v24, &pvar);
    if ( v12 )
      LeaveCriticalSection(v12);
    if ( pvar.vt == 65 )
      goto LABEL_36;
    refreshed = EffectPack::RefreshDeviceFormat(this, a2);
    v8 = refreshed;
    if ( refreshed < 0 )
    {
      v14 = (unsigned int)refreshed;
      v15 = 6857LL;
      goto LABEL_29;
    }
    v16 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 161) + 0x2000LL);
    EnterCriticalSection(v16);
    *(_QWORD *)&v23.Data1 = v16;
    v17 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL)
                                                                                               + 40LL))(
            *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
            &v24,
            &pvar);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1ACE,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v17,
        (int)lpCriticalSection);
      if ( v16 )
        LeaveCriticalSection(v16);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v8 = v18;
      goto LABEL_8;
    }
    if ( v16 )
      LeaveCriticalSection(v16);
    if ( pvar.vt == 65 )
    {
LABEL_36:
      if ( (unsigned int)IsValidWfxBlob(&pvar) )
      {
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        goto LABEL_5;
      }
    }
    v8 = -2004287480;
    v14 = 2290679816LL;
    v15 = 6866LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v14,
      (int)lpCriticalSection);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_8;
  }
LABEL_5:
  if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
  {
    v8 = -2004287480;
    v19 = 2290679816LL;
    v20 = 6870LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v19,
      (int)lpCriticalSection);
    goto LABEL_8;
  }
  v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a4);
  v8 = v10;
  if ( v10 < 0 )
  {
    v19 = (unsigned int)v10;
    v20 = 6872LL;
    goto LABEL_33;
  }
  v8 = 0;
LABEL_8:
  PropVariantClear((PROPVARIANT *)&pvar);
  return v8;
}
