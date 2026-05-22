/*
 * XREFs of ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180151170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18001D79C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_25385272@@@details@wil@@QEAA_NXZ @ 0x18005FFF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Bugfix_25385272@@@details@wil@@QE.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 *     ?OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z @ 0x180150D50 (-OnInputDelegated@BamoInputDelegationInputObjectProxy@@UEAAJII_N@Z.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::SetProcessIDDelegation(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  unsigned int v5; // edi
  ForegroundManager *ForegroundManager; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a2;
  if ( !*(_QWORD *)(a1 + 96) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xBC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\server\\"
           "inputdelegationinputobjectproxy.cpp",
      a4);
  if ( (a3 & 0xE) == 0 || (a3 & 1) != 0 )
  {
    if ( !a2 )
      v5 = *(_DWORD *)(a1 + 80);
  }
  else
  {
    *(_DWORD *)(a1 + 80) = a2;
    if ( IsEdition(8778LL) )
      *(_BYTE *)(a1 + 88) = 1;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_Bugfix_25385272>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Bugfix_25385272>::GetImpl'::`2'::impl)
    || v5 )
  {
    ForegroundManager = ISMStatics::GetForegroundManager();
    ForegroundManager::SetInputDelegation(ForegroundManager, *(struct InputSite **)(a1 + 96), v5, 0LL, a3);
  }
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( !IsEdition(8778LL) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\serve"
             "r\\inputdelegationinputobjectproxy.cpp",
        v8);
    *(_BYTE *)(a1 + 88) = 0;
    BamoInputDelegationInputObjectProxy::OnInputDelegated((BamoInputDelegationInputObjectProxy *)(a1 + 8), v5, 0, 0);
  }
  return 0LL;
}
