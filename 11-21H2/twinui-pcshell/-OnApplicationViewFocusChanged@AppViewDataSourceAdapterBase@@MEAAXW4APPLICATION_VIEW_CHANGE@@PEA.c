/*
 * XREFs of ?OnApplicationViewFocusChanged@AppViewDataSourceAdapterBase@@MEAAXW4APPLICATION_VIEW_CHANGE@@PEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180041A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall AppViewDataSourceAdapterBase::OnApplicationViewFocusChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 )
  {
    LOBYTE(a2) = (_DWORD)a2 == 7;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 72LL))(a4, a2);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB4,
        (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v7,
        v8);
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a3, a4);
  }
}
