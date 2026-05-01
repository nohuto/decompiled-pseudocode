/*
 * XREFs of ?UpdateActivationTimestamp@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180063350
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapterBase::UpdateActivationTimestamp(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned __int64 *))(*(_QWORD *)a2 + 480LL))(a2, &v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10C,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v4,
      v6);
  if ( (v8 & 0x8000000000000000uLL) != 0LL )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x10F,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)0x8000000BLL,
      v6);
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem *, unsigned __int64))(*(_QWORD *)a3 + 64LL))(
         a3,
         (unsigned int)v8 | (HIDWORD(v8) << 32));
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x110,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v5,
      v6);
}
