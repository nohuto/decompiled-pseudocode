/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@$$V@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18062D9EC
 * Callers:
 *     ?InitializePrivilegedOperations@ApplicationContainerActivationComponent@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180630D20 (-InitializePrivilegedOperations@ApplicationContainerActivationComponent@@UEAAJAEBU_GUID@@PEAUIUn.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InitializePrivilegedOperationsHelper<wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>,>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3)
{
  __int64 v5; // rax
  void (__fastcall *v6)(_QWORD, GUID *, __int64 *); // rsi
  __int64 v7; // rcx

  v5 = *a1 - *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1;
  if ( *a1 == *(_QWORD *)&GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data1 )
    v5 = a1[1] - *(_QWORD *)GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6.Data4;
  if ( v5 )
    return 2147500033LL;
  v6 = **a2;
  v7 = *a3;
  *a3 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v6(a2, &GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6, a3);
  return 0LL;
}
