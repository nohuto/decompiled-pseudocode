/*
 * XREFs of ??$as@UITaskGroupsComponent@DesktopTaskGroups@Shell@Internal@Windows@winrt@@UIObjectWithSite@@$0A@@impl@winrt@@YA?AUITaskGroupsComponent@DesktopTaskGroups@Shell@Internal@Windows@1@PEAUIObjectWithSite@@@Z @ 0x1801ABF50
 * Callers:
 *     ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800DDFA8 (--0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent,IObjectWithSite,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult((unsigned int)v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
