/*
 * XREFs of ?TryGetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18014FFBC
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18001796C (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::TryGetDevicePipeFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int ProcessingModeSpecificDevicePipeFormatKey; // eax
  int v10; // ebx
  __int64 v12; // rdx
  int v13; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-38h]
  struct _GUID v16; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v17; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 0x2000);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 0x2000));
  v15 = v8;
  v16 = *a3;
  ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                &v16,
                                                a2 == eKeywordDetectorConnector,
                                                &v17);
  v10 = ProcessingModeSpecificDevicePipeFormatKey;
  if ( ProcessingModeSpecificDevicePipeFormatKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B00,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProcessingModeSpecificDevicePipeFormatKey);
LABEL_3:
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)v10;
  }
  memset(&pvar, 0, sizeof(pvar));
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9)
                                                                                             + 40LL))(
          *((_QWORD *)this + 9),
          &v17,
          &pvar);
  if ( v10 < 0 )
  {
    v12 = 6915LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
    PropVariantClear((PROPVARIANT *)&pvar);
    goto LABEL_3;
  }
  if ( pvar.vt == 65 )
  {
    LOBYTE(v13) = IsValidWfxBlob(&pvar);
    if ( v13 )
    {
      if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
      {
        v10 = -2004287480;
        v12 = 6919LL;
        goto LABEL_8;
      }
      v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a4);
      if ( v10 < 0 )
      {
        v12 = 6921LL;
        goto LABEL_8;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
