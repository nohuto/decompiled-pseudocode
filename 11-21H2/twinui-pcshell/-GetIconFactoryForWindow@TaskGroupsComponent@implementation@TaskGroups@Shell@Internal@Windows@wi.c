/*
 * XREFs of ?GetIconFactoryForWindow@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA?AUIIconFactory@Multitasking@ComposableShell@567@UWindowId@WindowManagement@ApplicationModel@567@@Z @ 0x180589854
 * Callers:
 *     ?GetIconFactoryForWindow@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAPEAX@Z @ 0x1805897D0 (-GetIconFactoryForWindow@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1804540C0 (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 *     ??$as@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@@YA?AUIIconFactory@Multitasking@ComposableShell@Internal@Windows@1@PEAU23456@@Z @ 0x180588638 (--$as@UIIconFactory@Multitasking@ComposableShell@Internal@Windows@winrt@@U12345@$0A@@impl@winrt@.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::GetIconFactoryForWindow(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  const struct _GUID *v8; // r8
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationView *v13; // [rsp+30h] [rbp+8h] BYREF
  void *v14; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v6 = *(__int64 **)(a1 + 136);
  v7 = *v6;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, struct IApplicationView **))(v7 + 48))(v6, a3, &v13) >= 0 )
  {
    v9 = AppViewIconFactory::CreateInstance(v13, *(struct IApplicationViewIconLoader **)(a1 + 144), v8, &v14);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x207,
        (int)"pcshell\\twinui\\taskgroups\\lib\\taskgroupscomponent.cpp",
        (const char *)(unsigned int)v9,
        v11);
    v5 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v14;
  }
  winrt::impl::as<winrt::Windows::Internal::ComposableShell::Multitasking::IIconFactory,Windows::Internal::ComposableShell::Multitasking::IIconFactory,0>(
    a2,
    v5);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v13);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v14);
  return a2;
}
