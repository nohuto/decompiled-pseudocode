/*
 * XREFs of ?ViewVirtualDesktopChanged@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800D3CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D37B0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails@@@detai.c)
 *     ??$?RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@?$event@U?$TypedEventHandler@UITaskGroupHost@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateChangedEventArgs@23456@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@1@AEBUWindowStateChangedEventArgs@45671@@Z @ 0x180153224 (--$-RUTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UWindowStateCh.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::ViewVirtualDesktopChanged(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        char a3,
        __int64 a4)
{
  struct IApplicationView *v6; // rdx
  __int64 WindowForView; // rax
  int v8; // ebx
  int v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+44h] [rbp+1Ch]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_DifferentiatedSnapGroupThumbnails>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v6);
  v8 = WindowForView;
  if ( (unsigned int)IsWindowArranged(WindowForView) )
  {
    v10 = v8;
    v11 = 2;
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupHost,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent,winrt::Windows::Internal::Shell::TaskGroups::WindowStateChangedEventArgs>(
      (char *)this + 488,
      (char *)this - 8,
      &v10);
  }
  return 0LL;
}
