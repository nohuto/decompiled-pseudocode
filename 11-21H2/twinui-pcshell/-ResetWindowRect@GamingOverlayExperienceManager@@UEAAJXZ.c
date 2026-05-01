/*
 * XREFs of ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338590
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009EBB4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18013DB40 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     ?GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z @ 0x18032F9D0 (-GetCurrentDisplayCoordinates@GamingOverlayExperienceManager@@UEAAJPEAH000@Z.c)
 *     ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18033AEF0 (-UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBURect@Foundation@56@@Z @ 0x18034196C (-Bounds@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXAEBUR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::ResetWindowRect(
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int CurrentDisplayCoordinates; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  __int64 result; // rax
  int v8; // r14d
  int v9; // r15d
  int v10; // ebx
  int v11; // esi
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v12; // rcx
  const char *v13; // r9
  int updated; // eax
  unsigned int v15; // ebx
  int v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+34h] [rbp-54h] BYREF
  int v18; // [rsp+38h] [rbp-50h] BYREF
  int v19; // [rsp+3Ch] [rbp-4Ch] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-48h] BYREF
  float v21[10]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 34);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 34));
  v20 = v2;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  CurrentDisplayCoordinates = GamingOverlayExperienceManager::GetCurrentDisplayCoordinates(
                                (GamingOverlayExperienceManager *)this,
                                &v17,
                                &v18,
                                &v19,
                                &v16);
  v6 = CurrentDisplayCoordinates;
  if ( CurrentDisplayCoordinates >= 0 )
  {
    v8 = v17;
    v9 = v18;
    v10 = v19;
    v11 = v16;
    try
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
        1u,
        v4,
        v5);
      v12 = this[27];
      if ( v12 )
      {
        v21[0] = (float)v8;
        v21[1] = (float)v9;
        v21[2] = (float)(v10 - v8);
        v21[3] = (float)(v11 - v9);
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::Bounds(
          v12,
          (const struct winrt::Windows::Foundation::Rect *)v21);
        updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
                    (GamingOverlayExperienceManager *)(this - 17),
                    1);
        v15 = updated;
        if ( updated >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v20);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E0,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)updated);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v20);
          result = v15;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D4,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)0x8000FFFFLL);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v20);
        result = 2147549183LL;
      }
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x1E3,
                             (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                             v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)CurrentDisplayCoordinates);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v20);
    return v6;
  }
  return result;
}
