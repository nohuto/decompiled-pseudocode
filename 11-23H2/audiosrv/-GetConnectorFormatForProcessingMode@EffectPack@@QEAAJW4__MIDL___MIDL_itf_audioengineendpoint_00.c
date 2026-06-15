/*
 * XREFs of ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180017DDC
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000E010 (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056210 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     AudioServerGetDevicePeriod @ 0x180121A80 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180020D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800291A8 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::GetConnectorFormatForProcessingMode(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int v8; // edx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 result; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // [rsp+20h] [rbp-60h]
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v17 = *a3;
  v8 = 0;
  while ( 1 )
  {
    v9 = (_QWORD *)((char *)&unk_180182D30 + 16 * v8);
    v10 = *v9 - *(_QWORD *)&v17.Data1;
    if ( *v9 == *(_QWORD *)&v17.Data1 )
      v10 = v9[1] - *(_QWORD *)v17.Data4;
    if ( !v10 )
      break;
    if ( ++v8 >= 0xA )
      goto LABEL_12;
  }
  v17 = (struct _GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_ConnectorFormat;
  v11 = 602;
  if ( a2 != eKeywordDetectorConnector )
    v11 = 2;
  v18 = v8 + v11;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, struct _GUID *, struct tagPROPVARIANT *))(**((_QWORD **)this[161] + 9) + 40LL))(
         *((_QWORD *)this[161] + 9),
         &v17,
         &pvar) < 0
    || pvar.vt != 65
    || !(unsigned int)IsValidWfxBlob(&pvar) )
  {
    PropVariantClear((PROPVARIANT *)&pvar);
LABEL_12:
    v17 = *a3;
    result = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(this[161], a2, &v17, a4);
    if ( (int)result < 0 )
      return EffectPack::GetDeviceFormat((EffectPack *)this, 0, 0, a2, a4);
    return result;
  }
  v13 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a4);
  v14 = v13;
  if ( v13 >= 0 )
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191D,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v13,
      v15);
  PropVariantClear((PROPVARIANT *)&pvar);
  return v14;
}
