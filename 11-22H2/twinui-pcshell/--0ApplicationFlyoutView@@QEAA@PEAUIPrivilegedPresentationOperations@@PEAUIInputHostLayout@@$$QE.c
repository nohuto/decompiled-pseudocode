/*
 * XREFs of ??0ApplicationFlyoutView@@QEAA@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@PEBG@Z @ 0x1806C4B04
 * Callers:
 *     ?MakeApplicationFlyoutView@@YA?AV?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@PEAUIPrivilegedPresentationOperations@@PEAUIInputHostLayout@@$$QEAV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@2@PEBG@Z @ 0x1806C594C (-MakeApplicationFlyoutView@@YA-AV-$unique_ptr@VFlyoutView@@U-$default_delete@VFlyoutView@@@std@@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1804BBB90 (--0-$com_ptr_t@UIPrivilegedPresentationOperations@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIPr.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationFlyoutView::ApplicationFlyoutView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        _WORD *a5)
{
  __int64 v8; // rax

  *(_QWORD *)a1 = &ApplicationFlyoutView::`vftable';
  wil::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>::com_ptr_t<IPrivilegedPresentationOperations,wil::err_exception_policy>(
    (_QWORD *)(a1 + 8),
    a2);
  *(_QWORD *)(a1 + 16) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v8 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a1 + 24) = v8;
  std::wstring::wstring((_QWORD *)(a1 + 32), a5);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 88) = 3;
  *(_QWORD *)(a1 + 96) = 0LL;
  return a1;
}
