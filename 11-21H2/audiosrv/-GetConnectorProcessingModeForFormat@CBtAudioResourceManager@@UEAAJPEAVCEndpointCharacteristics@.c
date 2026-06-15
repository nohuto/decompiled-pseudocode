/*
 * XREFs of ?GetConnectorProcessingModeForFormat@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@PEAU_GUID@@@Z @ 0x180115CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBtAudioResourceManager::GetConnectorProcessingModeForFormat(
        CBtAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        const struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  struct _GUID v7; // xmm0
  __int128 v9; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = xmmword_180195198;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity((__int64)a2, 0, a3, &v9, 0, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v7 = (struct _GUID)xmmword_180195198;
LABEL_5:
    *a4 = v7;
    return 0LL;
  }
  v9 = xmmword_1801951A8;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity((__int64)a2, 0, a3, &v9, 0, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v7 = (struct _GUID)xmmword_1801951A8;
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x473,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
    (const char *)0x88890008LL);
  return 2290679816LL;
}
