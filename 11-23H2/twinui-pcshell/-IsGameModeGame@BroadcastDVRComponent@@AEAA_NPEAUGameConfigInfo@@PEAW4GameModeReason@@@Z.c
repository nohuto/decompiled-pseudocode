/*
 * XREFs of ?IsGameModeGame@BroadcastDVRComponent@@AEAA_NPEAUGameConfigInfo@@PEAW4GameModeReason@@@Z @ 0x1803D8C38
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1803D7898 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803DAFC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x1803DCF08 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 */

char __fastcall BroadcastDVRComponent::IsGameModeGame(
        BroadcastDVRComponent *this,
        struct GameConfigInfo *a2,
        enum GameModeReason *a3)
{
  int v3; // ebx
  int v6; // edx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  const wchar_t *StringRawBuffer; // rax
  BroadcastDVRComponent *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = this;
  v3 = 0;
  *(_DWORD *)a3 = 0;
  if ( *(_BYTE *)a2 )
  {
    v6 = *((_DWORD *)a2 + 2);
    if ( (unsigned int)(v6 - 2) <= 1 && !*((_BYTE *)a2 + 1) )
    {
      LOBYTE(v3) = v6 == 3;
      *(_DWORD *)a3 = v3 + 1;
      return 1;
    }
  }
  v8 = 0;
  if ( !WindowsIsStringEmpty(*((HSTRING *)a2 + 4)) )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 4), 0LL);
    v8 = wcstoul(StringRawBuffer, 0LL, 10);
  }
  if ( *(_BYTE *)a2 && *((_DWORD *)a2 + 2) != 1 )
  {
    if ( v8
      && (LOBYTE(v9) = 1,
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportUsage(
            &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
            v9),
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
            (volatile signed __int64 *)&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
            (__int64)&v11),
          v8 == HIDWORD(v11))
      && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl) == 1 )
    {
      *(_DWORD *)a3 = 3;
    }
    else
    {
      *(_DWORD *)a3 = 4;
    }
    return 1;
  }
  return 0;
}
