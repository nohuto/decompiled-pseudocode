/*
 * XREFs of ?SubscribeToServicesInternal@CortanaStoreAppExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x18014DCF4
 * Callers:
 *     ?SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014DCD0 (-SubscribeToServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1800E32E0 (-SubscribeToAppEvents@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread_26524487@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014DD70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaWriteAvailabilityOnSeparateThread_28059247@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014DF78 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_CortanaWriteAvailabilityOnSepar.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a12361c1c09cf3691f034514473a1778___ @ 0x18014E180 (Windows--Internal--ComTaskPool--QueueTask__lambda_a12361c1c09cf3691f034514473a1778___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5c9098dcc85f0f6ecb700463d9f74921___ @ 0x1801979C4 (Windows--Internal--ComTaskPool--QueueTask__lambda_5c9098dcc85f0f6ecb700463d9f74921___.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CortanaStoreAppExperienceManager::SubscribeToServicesInternal(
        CortanaStoreAppExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = CortanaStoreAppExperienceManager::SubscribeToAppEvents(this, (__int64)a2);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xF1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v3,
      v10[0]);
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread_26524487>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaLightingOnSeparateThread_26524487>::GetImpl'::`2'::impl,
    v4);
  *(_QWORD *)v10 = this;
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_a12361c1c09cf3691f034514473a1778___(v5, v10);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  LOBYTE(v7) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_CortanaWriteAvailabilityOnSeparateThread_28059247>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_Servicing_CortanaWriteAvailabilityOnSeparateThread_28059247>::GetImpl'::`2'::impl,
    v7);
  v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_5c9098dcc85f0f6ecb700463d9f74921___();
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x107,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v10[0]);
  return 0LL;
}
