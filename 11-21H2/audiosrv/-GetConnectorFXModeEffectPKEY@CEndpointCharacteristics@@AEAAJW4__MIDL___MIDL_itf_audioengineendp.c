/*
 * XREFs of ?GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x18004A114
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004875C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetConnectorFXModeEffectPKEY(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _tagpropertykey *a3,
        struct _tagpropertykey *a4)
{
  unsigned int v4; // r10d
  int v5; // edx
  GUID fmtid; // xmm0
  DWORD pid; // eax

  v4 = 0;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 2 )
        return (unsigned int)-2147023728;
      *a3 = PKEY_FX_KeywordDetector_ModeEffectClsid;
      fmtid = PKEY_CompositeFX_KeywordDetector_ModeEffectClsid.fmtid;
      pid = PKEY_CompositeFX_KeywordDetector_ModeEffectClsid.pid;
    }
    else
    {
      *a3 = PKEY_FX_Offload_ModeEffectClsid;
      fmtid = PKEY_CompositeFX_Offload_ModeEffectClsid.fmtid;
      pid = PKEY_CompositeFX_Offload_ModeEffectClsid.pid;
    }
    a4->fmtid = fmtid;
    a4->pid = pid;
  }
  else
  {
    *a3 = PKEY_FX_ModeEffectClsid;
    *a4 = PKEY_CompositeFX_ModeEffectClsid;
  }
  return v4;
}
