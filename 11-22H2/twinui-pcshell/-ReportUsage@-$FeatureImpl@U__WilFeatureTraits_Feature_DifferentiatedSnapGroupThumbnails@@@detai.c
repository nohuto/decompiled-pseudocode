/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D37B0
 * Callers:
 *     ?ViewVirtualDesktopChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800D3CF0 (-ViewVirtualDesktopChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@.c)
 *     ?GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUTaskGroupWindowInformation@34567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180647E94 (-GetWindowInformation@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800D1F90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1801C5C50 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil_details_MapReportingKind @ 0x1803A51C4 (wil_details_MapReportingKind.c)
 */

__int64 (__fastcall *__fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // r10d
  unsigned __int8 v8; // r11
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  __int64 v10; // [rsp+30h] [rbp-48h]
  int v11; // [rsp+30h] [rbp-48h]
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+80h] [rbp+8h] BYREF
  char v14; // [rsp+84h] [rbp+Ch]
  int v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h]

  v16 = a4;
  LOBYTE(v15) = a3;
  v5 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
    v16 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::GetCachedFeatureEnabledState(
                       a1,
                       v12);
  v13 = 0;
  v14 = 3;
  v15 = 3;
  v6 = wil_details_MapReportingKind(3LL, v5);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil::details::ReportUsageToServiceDirect(
                                                                                                     (struct wil_details_FeatureReportingCache *)(a1 + 8),
                                                                                                     0x208B0D0u,
                                                                                                     (v7 >> 10) & 1,
                                                                                                     (v7 >> 11) & 1,
                                                                                                     v6,
                                                                                                     0,
                                                                                                     v10,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      LOBYTE(v11) = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(34123984LL, &v13, 0LL, v5, &v15, 0LL, v11, 1LL);
    }
  }
  return result;
}
