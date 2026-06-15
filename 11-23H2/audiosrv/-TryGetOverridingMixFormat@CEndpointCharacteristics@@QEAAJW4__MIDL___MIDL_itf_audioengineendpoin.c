/*
 * XREFs of ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18015011C
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18008361E (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     AudioServerGetMixFormat @ 0x1801221C0 (AudioServerGetMixFormat.c)
 *     ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x180150C18 (-UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180004494 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180056114 (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x18014E570 (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x18014E594 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::TryGetOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int ProcessingModeSpecificOverridingMixFormatKey; // eax
  unsigned int v10; // ebx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  const char *v15; // r9
  BYTE *pData; // rbx
  int v17; // eax
  int v18; // eax
  char *v19; // [rsp+28h] [rbp-31h]
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+58h] [rbp-1h]
  struct _GUID v22; // [rsp+60h] [rbp+7h] BYREF
  struct _tagpropertykey v23; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 0x2000);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 0x2000));
  v21 = v8;
  v22 = *a3;
  ProcessingModeSpecificOverridingMixFormatKey = GetProcessingModeSpecificOverridingMixFormatKey(
                                                   &v22,
                                                   a2 == eKeywordDetectorConnector,
                                                   &v23);
  v10 = ProcessingModeSpecificOverridingMixFormatKey;
  if ( ProcessingModeSpecificOverridingMixFormatKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A6D,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ProcessingModeSpecificOverridingMixFormatKey);
LABEL_3:
    if ( v8 )
      LeaveCriticalSection(v8);
    return v10;
  }
  memset(&pvar, 0, sizeof(pvar));
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, struct tagPROPVARIANT *))(**((_QWORD **)this + 9)
                                                                                             + 40LL))(
          *((_QWORD *)this + 9),
          &v23,
          &pvar);
  if ( v12 >= 0 )
  {
    if ( pvar.vt )
    {
      if ( pvar.vt == 65 )
      {
        LOBYTE(v13) = IsValidWfxBlob(&pvar);
        if ( !v13 )
        {
          wil::details::in1diag3::Log_Win32(retaddr, 6783LL, v14, v15);
          goto LABEL_19;
        }
        pData = pvar.bstrblobVal.pData;
        if ( pvar.bstrblobVal.pData )
        {
          v17 = ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData);
          if ( v17 )
          {
            LODWORD(v19) = v17;
            v10 = -2004287480;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0x1A96,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL,
              (unsigned __int64)"ValidateUncompressedWaveFormatEx returned 0x%08x",
              v19);
          }
          else
          {
            v18 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, a4);
            v10 = v18;
            if ( v18 >= 0 )
              goto LABEL_19;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1A98,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v18);
          }
          PropVariantClear((PROPVARIANT *)&pvar);
          goto LABEL_3;
        }
      }
      else
      {
        LODWORD(v19) = pvar.vt;
        wil::details::in1diag3::Log_Win32Msg(
          retaddr,
          6796LL,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)0xD,
          (unsigned __int64)"unexpected vartype %d (0x%x)",
          v19,
          pvar.vt);
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A72,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12);
  }
LABEL_19:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
