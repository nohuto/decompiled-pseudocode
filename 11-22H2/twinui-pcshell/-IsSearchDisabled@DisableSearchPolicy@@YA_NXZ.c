/*
 * XREFs of ?IsSearchDisabled@DisableSearchPolicy@@YA_NXZ @ 0x1800A3298
 * Callers:
 *     ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x1800F23A0 (-Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Window.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1801982C0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 *     _lambda_88c37ada13575a8c3149dc5b04aa0d80_::operator() @ 0x1801FEA28 (_lambda_88c37ada13575a8c3149dc5b04aa0d80_--operator().c)
 *     wistd::__function::__func__lambda_5235d036c1a2f0c15b7f428a1d429d8a__void___cdecl(void)_::operator() @ 0x180505460 (wistd--__function--__func__lambda_5235d036c1a2f0c15b7f428a1d429d8a__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableSearchViaPolicy@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F49A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableSearchViaPolicy@@@details@wil@@QEA.c)
 *     IsPolicyManager_GetPolicyPresent @ 0x1801CB33C (IsPolicyManager_GetPolicyPresent.c)
 */

char __fastcall DisableSearchPolicy::IsSearchDisabled(DisableSearchPolicy *this, __int64 a2)
{
  char v2; // bl
  __m128i si128; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableSearchViaPolicy>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DisableSearchViaPolicy>::GetImpl'::`2'::impl,
    a2);
  if ( !(unsigned __int8)IsPolicyManager_GetPolicyPresent() )
    return 0;
  v5 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)PolicyManager_GetPolicy(L"Search", L"DisableSearch", &si128, &v5) < 0 )
  {
    if ( v5 )
      PolicyManager_FreeGetPolicyData(v5);
    return 0;
  }
  if ( *(_DWORD *)(v5 + 8) != 1 || *(_DWORD *)(v5 + 16) != 1 )
    v2 = 0;
  if ( v5 )
    PolicyManager_FreeGetPolicyData(v5);
  return v2;
}
