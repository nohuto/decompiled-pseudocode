/*
 * XREFs of ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x1804073E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180408E14 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBURect@Foundation@56@@Z @ 0x18040F5C8 (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::SetWindowRect(
        GamingOverlayExperienceManager *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  __int64 v9; // r8
  __int64 v10; // r9
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v11; // rcx
  const char *v12; // r9
  __int64 result; // rax
  int updated; // eax
  unsigned int v15; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  float v17[20]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 312));
  try
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
      1u,
      v9,
      v10);
    v11 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)*((_QWORD *)this + 32);
    if ( v11 )
    {
      v17[0] = (float)a2;
      v17[1] = (float)a3;
      v17[2] = (float)(a4 - a2);
      v17[3] = (float)(a5 - a3);
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
        v11,
        (const struct winrt::Windows::Foundation::Rect *)v17);
      updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                  (GamingOverlayExperienceManager *)((char *)this - 136),
                  0);
      v15 = updated;
      if ( updated >= 0 )
      {
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D7,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)updated);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        result = v15;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1DA,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v12);
  }
  return result;
}
