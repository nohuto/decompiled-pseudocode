/*
 * XREFs of ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180060938
 * Callers:
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800608A8 (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x18000E418 (-GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MI.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x180060A60 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18014B678 (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 */

__int64 __fastcall CEndpointCharacteristics::ConfirmDeviceCanRenderFormat(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        struct CAudioSignalProcessingModeMap *a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        int a6)
{
  int SharedModeEnginePeriodicityForTranslatedProcessingMode; // ebx
  struct _GUID v11; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF

  v11 = *a3;
  SharedModeEnginePeriodicityForTranslatedProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode(
                                                             (__int64)this,
                                                             a5,
                                                             a2,
                                                             (__int64)&v11,
                                                             a4,
                                                             0,
                                                             &v12,
                                                             0LL,
                                                             0LL,
                                                             0LL);
  if ( SharedModeEnginePeriodicityForTranslatedProcessingMode < 0 )
  {
    if ( SharedModeEnginePeriodicityForTranslatedProcessingMode == -2004287480 )
    {
      v11 = *a3;
      if ( CEndpointCharacteristics::ConnectorProbablySupportsFormat(this, a5, &v11, a2) )
        return (unsigned int)-2005139389;
    }
  }
  else if ( a6 )
  {
    v12 = (unsigned int)(int)((double)(int)v12 * 10000000.0 / (double)(int)a2->nSamplesPerSec + 0.5);
    return (unsigned int)CEndpointCharacteristics::SetProcessingPeriod(this, &v12);
  }
  return (unsigned int)SharedModeEnginePeriodicityForTranslatedProcessingMode;
}
