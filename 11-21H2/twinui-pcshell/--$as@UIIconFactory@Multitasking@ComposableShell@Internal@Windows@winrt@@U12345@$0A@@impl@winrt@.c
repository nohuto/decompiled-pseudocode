/*
 * XREFs of ??$as@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@@YA?AUIIconFactory@Multitasking@ComposableShell@Internal@Windows@1@PEAU23456@@Z @ 0x180588638
 * Callers:
 *     ?GetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUIIconFactory@Multitasking@ComposableShell@567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180589854 (-GetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@wi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IIconFactory,Windows::Internal::ComposableShell::Multitasking::IIconFactory,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  signed int v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::ComposableShell::Multitasking::IIconFactory>, &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
