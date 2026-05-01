/*
 * XREFs of ?CrmpClientRequiresRpc@@YAKK@Z @ 0x18005332C
 * Callers:
 *     CrmRpcSrvRegister @ 0x180004E50 (CrmRpcSrvRegister.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@details@wil@@QEAA_NXZ @ 0x18004D274 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerRpcBypass@@@detail.c)
 */

__int64 __fastcall CrmpClientRequiresRpc(int a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerRpcBypass>::GetImpl'::`2'::impl) )
    LOBYTE(v2) = a1 != GetCurrentProcessId();
  else
    return 1;
  return v2;
}
