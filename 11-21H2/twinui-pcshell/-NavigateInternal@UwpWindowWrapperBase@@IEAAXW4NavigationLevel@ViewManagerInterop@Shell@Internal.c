/*
 * XREFs of ?NavigateInternal@UwpWindowWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804157EC
 * Callers:
 *     _lambda_b34b1a0e0f93d6865fffe40b58850487_::operator() @ 0x18040550C (_lambda_b34b1a0e0f93d6865fffe40b58850487_--operator().c)
 *     ?v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180407540 (-v_SetDesiredNavigationLevel@UwpWindowWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@I.c)
 *     ?HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z @ 0x18040E2B8 (-HandleDebounceTimeout@NavigationLevelHelper@LegacyUwpWindowWrapper@@AEAAXPEAU_TP_TIMER@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18040E3F0 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3CA4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7038a910990fc1bfa49a8b972a544a3b___ @ 0x18040EF10 (Windows--Internal--ComTaskPool--QueueTask__lambda_7038a910990fc1bfa49a8b972a544a3b___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::NavigateInternal(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 224LL))(*(_QWORD *)(a1 + 272));
  if ( a2 != *(_DWORD *)(a1 + 476) )
  {
    *(_DWORD *)(a1 + 476) = a2;
    v5 = 0;
    if ( *(_QWORD *)(a1 + 104) )
    {
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**(_QWORD **)(a1 + 272) + 152LL))(
                       *(_QWORD *)(a1 + 272),
                       &string);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 64LL))(*v6, *(unsigned int *)(a1 + 344), a2);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&string);
    }
    else if ( a2 - 3 <= 1 )
    {
      string = 0LL;
      v7 = Windows::Internal::String::Initialize(&string, (HSTRING *)(a1 + 304));
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC41,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
          (const char *)(unsigned int)v7);
      Windows::Internal::ComTaskPool::QueueTask__lambda_7038a910990fc1bfa49a8b972a544a3b___(v8, &string);
      if ( string )
        WindowsDeleteString(string);
    }
    LOBYTE(v5) = a2 - 4 <= 1;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 216LL))(a1, 0LL, v5);
  }
  return result;
}
