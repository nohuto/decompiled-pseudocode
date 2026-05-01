/*
 * XREFs of ?TryGetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUIIconFactory@Multitasking@ComposableShell@567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180649C14
 * Callers:
 *     ?TryGetIconFactoryForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x180649B90 (-TryGetIconFactoryForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Inter.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@@YA?AUIIconFactory@Multitasking@ComposableShell@Internal@Windows@1@PEAU23456@@Z @ 0x1806465F4 (--$as@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18064772C (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::TryGetIconFactoryForWindow(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  const struct _GUID *v7; // r8
  int v8; // eax
  void *v9; // rbx
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v5 = *(__int64 **)(a1 + 136);
  v6 = *v5;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IApplicationView **))(v6 + 48))(v5, a3, &v13) >= 0 )
  {
    v14 = 0LL;
    v8 = AppViewIconFactory::CreateInstance(v13, *(struct IApplicationViewIconLoader **)(a1 + 144), v7, &v14);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x209,
        (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
        (const char *)(unsigned int)v8,
        v11);
    v9 = v14;
    winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IIconFactory,Windows::Internal::ComposableShell::Multitasking::IIconFactory,0>(
      a2,
      (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v14);
    if ( v9 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v14);
  }
  else
  {
    *a2 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v13);
  return a2;
}
