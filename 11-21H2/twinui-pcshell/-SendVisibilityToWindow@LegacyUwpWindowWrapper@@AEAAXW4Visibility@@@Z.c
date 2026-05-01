/*
 * XREFs of ?SendVisibilityToWindow@LegacyUwpWindowWrapper@@AEAAXW4Visibility@@@Z @ 0x1804047EC
 * Callers:
 *     ?v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ @ 0x180404960 (-v_HandleActivationRequested@LegacyUwpWindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804049C0 (-v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18040E3F0 (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyUwpWindowWrapper@@QEAAXW4NavigationLevel@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18041A98C (-VisibilityChanged@UwpWindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall LegacyUwpWindowWrapper::SendVisibilityToWindow(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  v5 = *(int *)(a1 + 296);
  v6 = 0LL;
  if ( *(_BYTE *)(a1 + 609) && *(_DWORD *)(a1 + 296) && (*(_BYTE *)(a1 + 356) & 0x10) == 0 )
  {
    v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 280) + 168LL))(
                     *(_QWORD *)(a1 + 280),
                     &v8);
    LOBYTE(v6) = a2 == 1;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 24LL))(*v7, v5, 0LL, 0LL, v6);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
    UwpWindowReadyState::VisibilityChanged(a1 + 360, 0LL, a2);
    return UwpWindowReadyState::VisibilityChanged(a1 + 360, 1LL, a2);
  }
  return result;
}
