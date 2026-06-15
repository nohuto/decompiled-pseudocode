/*
 * XREFs of ?EndpointResourceValidity@CConstraintModelResourceManager@@AEAA_NPEAVCEndpointCharacteristics@@@Z @ 0x18000FDA8
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180065D10 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 * Callees:
 *     <none>
 */

bool __fastcall CConstraintModelResourceManager::EndpointResourceValidity(
        CConstraintModelResourceManager *this,
        struct CEndpointCharacteristics *a2)
{
  bool result; // al

  result = 0;
  if ( !*((_DWORD *)a2 + 8) )
    return *((_BYTE *)a2 + 9726) == 0;
  return result;
}
