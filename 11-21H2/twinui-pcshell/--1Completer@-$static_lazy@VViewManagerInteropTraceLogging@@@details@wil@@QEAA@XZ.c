/*
 * XREFs of ??1Completer@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ @ 0x18017976C
 * Callers:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180090920 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 *     _lambda_563bc81589d36272545d38307397f505_::operator() @ 0x180091848 (_lambda_563bc81589d36272545d38307397f505_--operator().c)
 *     _lambda_a38aae5e6c9958ce849327ccd84fd2a2_::operator() @ 0x180139528 (_lambda_a38aae5e6c9958ce849327ccd84fd2a2_--operator().c)
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180407F2C (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18040B538 (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  __int64 v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4 = wil::details::static_lazy<ViewManagerInteropLogging>::get(
           a1,
           _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)[1];
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = (PVOID)v4;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
