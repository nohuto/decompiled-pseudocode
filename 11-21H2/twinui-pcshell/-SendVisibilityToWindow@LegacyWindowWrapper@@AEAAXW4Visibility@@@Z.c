/*
 * XREFs of ?SendVisibilityToWindow@LegacyWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1803FB97C
 * Callers:
 *     ?v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ @ 0x1803FBAF0 (-v_HandleActivationRequested@LegacyWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1803FBB50 (-v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180407A08 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyWindowWrapper@@QEAAXW4NavigationLevel@Vie.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18040E098 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall LegacyWindowWrapper::SendVisibilityToWindow(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  v5 = *(int *)(a1 + 304);
  v6 = 0LL;
  if ( *(_BYTE *)(a1 + 617) && *(_DWORD *)(a1 + 304) && (*(_BYTE *)(a1 + 364) & 0x10) == 0 )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 288) + 160LL))(
                     *(_QWORD *)(a1 + 288),
                     &v8);
    LOBYTE(v6) = a2 == 1;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 24LL))(*v7, v5, 0LL, 0LL, v6);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
    WindowReadyState::VisibilityChanged(a1 + 368, 0LL, a2);
    return WindowReadyState::VisibilityChanged(a1 + 368, 1LL, a2);
  }
  return result;
}
