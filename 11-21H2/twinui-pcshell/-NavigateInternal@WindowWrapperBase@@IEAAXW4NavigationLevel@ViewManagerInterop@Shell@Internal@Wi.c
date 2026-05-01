/*
 * XREFs of ?NavigateInternal@WindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18040B5CC
 * Callers:
 *     ?v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013A150 (-v_SetDesiredNavigationLevel@WindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Inte.c)
 *     _lambda_37ce3c0886db64cd36632e83c34f1ff5_::operator() @ 0x1803FC224 (_lambda_37ce3c0886db64cd36632e83c34f1ff5_--operator().c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x1804078D0 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180407A08 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  if ( a2 != *(_DWORD *)(a1 + 484) )
  {
    *(_DWORD *)(a1 + 484) = a2;
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 280) + 144LL))(
                     *(_QWORD *)(a1 + 280),
                     &v6);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v5 + 56LL))(*v5, *(unsigned int *)(a1 + 352), a2);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v6);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)a1 + 200LL))(a1, 0LL, a2 - 4 <= 1);
  }
  return result;
}
