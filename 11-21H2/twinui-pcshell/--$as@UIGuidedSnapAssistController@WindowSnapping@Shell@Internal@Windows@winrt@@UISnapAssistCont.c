/*
 * XREFs of ??$as@UIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@winrt@@UISnapAssistController@@$0A@@impl@winrt@@YA?AUIGuidedSnapAssistController@WindowSnapping@Shell@Internal@Windows@1@PEAUISnapAssistController@@@Z @ 0x1801795D8
 * Callers:
 *     ?subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800F5570 (-subscribe_to_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController,ISnapAssistController,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  int v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(
           a2,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistController>,
           &v5);
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
