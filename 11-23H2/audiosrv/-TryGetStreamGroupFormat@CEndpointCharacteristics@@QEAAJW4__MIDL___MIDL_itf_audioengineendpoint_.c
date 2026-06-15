/*
 * XREFs of ?TryGetStreamGroupFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000DA2C
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 * Callees:
 *     ?GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180017D78 (-GetProcessingModeSpecificStreamGroupFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::TryGetStreamGroupFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int ProcessingModeSpecificStreamGroupFormatKey; // eax
  int v10; // ebx
  __int64 v12; // rdx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-38h]
  struct _GUID v15; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v16; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 0x2000);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 0x2000));
  v14 = v8;
  v15 = *a3;
  ProcessingModeSpecificStreamGroupFormatKey = GetProcessingModeSpecificStreamGroupFormatKey(
                                                 &v15,
                                                 a2 == eKeywordDetectorConnector,
                                                 &v16);
  v10 = ProcessingModeSpecificStreamGroupFormatKey;
  if ( ProcessingModeSpecificStreamGroupFormatKey >= 0 )
  {
    memset(&pvar, 0, sizeof(pvar));
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9)
                                                                                               + 40LL))(
            *((_QWORD *)this + 9),
            &v16,
            &pvar);
    if ( v10 >= 0 )
    {
      if ( pvar.vt == 65 && (unsigned int)IsValidWfxBlob(&pvar) )
      {
        if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
        {
          v10 = -2004287480;
          v12 = 6894LL;
          goto LABEL_9;
        }
        v10 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a4);
        if ( v10 < 0 )
        {
          v12 = 6896LL;
          goto LABEL_9;
        }
      }
      PropVariantClear((PROPVARIANT *)&pvar);
      if ( v8 )
        LeaveCriticalSection(v8);
      return 0LL;
    }
    v12 = 6890LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10,
      *(int *)&pvar.vt);
    PropVariantClear((PROPVARIANT *)&pvar);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AE7,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProcessingModeSpecificStreamGroupFormatKey,
    *(int *)&pvar.vt);
LABEL_10:
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v10;
}
