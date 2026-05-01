/*
 * XREFs of ?RuntimeClassInitialize@GamingOverlayExperienceManager@@QEAAJXZ @ 0x18017A99C
 * Callers:
 *     ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18017A304 (--$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGa.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7ce5adc85e5a19fc59ac7a9da48d7a58___ @ 0x1801D9CF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_7ce5adc85e5a19fc59ac7a9da48d7a58___.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::RuntimeClassInitialize(
        GamingOverlayExperienceManager *this,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
    a2);
  v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_7ce5adc85e5a19fc59ac7a9da48d7a58___();
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x762,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBD3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)v4);
  }
  *(GUID *)v8 = GUID_c44450f0_731e_4fdb_95fe_d031838a5b14;
  v9 = 0LL;
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (GamingOverlayExperienceManager *)((char *)this + 48),
         (__int64)v8,
         1uLL);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD6,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
