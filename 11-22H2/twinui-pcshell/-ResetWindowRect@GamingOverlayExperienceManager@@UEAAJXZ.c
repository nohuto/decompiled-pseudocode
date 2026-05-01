/*
 * XREFs of ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406210
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x1803FCD80 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180408E14 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBURect@Foundation@56@@Z @ 0x18040F5C8 (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::ResetWindowRect(GamingOverlayExperienceManager *this)
{
  int CurrentDisplayCoordinates; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 result; // rax
  int v7; // r14d
  int v8; // r15d
  int v9; // edi
  int v10; // esi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v11; // rcx
  const char *v12; // r9
  int updated; // eax
  unsigned int v14; // ebx
  int v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+34h] [rbp-54h] BYREF
  int v17; // [rsp+38h] [rbp-50h] BYREF
  int v18; // [rsp+3Ch] [rbp-4Ch] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-48h] BYREF
  float v20[10]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 312));
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v15 = 0;
  CurrentDisplayCoordinates = GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(this, &v16, &v17, &v18, &v15);
  v5 = CurrentDisplayCoordinates;
  if ( CurrentDisplayCoordinates >= 0 )
  {
    v7 = v16;
    v8 = v17;
    v9 = v18;
    v10 = v15;
    try
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
        1u,
        v3,
        v4);
      v11 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)*((_QWORD *)this + 32);
      if ( v11 )
      {
        v20[0] = (float)v7;
        v20[1] = (float)v8;
        v20[2] = (float)(v9 - v7);
        v20[3] = (float)(v10 - v8);
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
          v11,
          (const struct winrt::Windows::Foundation::Rect *)v20);
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                    (GamingOverlayExperienceManager *)((char *)this - 136),
                    1);
        v14 = updated;
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
            (void *)0x1F5,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)updated);
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          result = v14;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
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
                             (void *)0x1F8,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                             v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)CurrentDisplayCoordinates);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v5;
  }
  return result;
}
