/*
 * XREFs of ?SetForeground@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180407180
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18017AA2C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetForeground@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180411368 (-SetForeground@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI@Z @ 0x180411FD0 (-WindowBand@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::SetForeground(GamingOverlayExperienceManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v6; // rcx
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 27);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28A,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)((char *)this + 312));
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GamingOverlayMultiWindowSupport>::GetImpl'::`2'::impl,
      1u,
      v4,
      v5);
    v6 = (winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *)*((_QWORD *)this + 32);
    if ( v6 )
    {
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::WindowBand(v6, 0xAu);
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::SetForeground(*((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 32));
      *((_BYTE *)this + 1248) = 1;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x290,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        (const char *)0x80004003LL);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      result = 2147500035LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B3,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                           v7);
  }
  return result;
}
