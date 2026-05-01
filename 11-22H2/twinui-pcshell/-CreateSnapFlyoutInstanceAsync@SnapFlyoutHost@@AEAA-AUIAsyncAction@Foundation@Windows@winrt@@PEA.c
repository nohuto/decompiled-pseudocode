/*
 * XREFs of ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUIAsyncAction@Foundation@Windows@winrt@@PEAUHWND__@@W4SnapControlType@SnapComponent@Shell@Internal@45@IW4InputDeviceKind@9UI@WindowsUdk@5@PEAUHMONITOR__@@V?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@W4ShowFlags@1@@Z @ 0x180226D5C
 * Callers:
 *     ?InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z @ 0x18067AF34 (-InternalShowBar@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4InputDeviceKind@Shell@UI@WindowsUdk@winrt@@P.c)
 *     ?InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18067B110 (-InternalShowFlyout@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022183C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x180225D0C (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  void *v7; // rax
  void **v8; // rbx
  __int64 v10; // [rsp+50h] [rbp-428h]
  int v11; // [rsp+488h] [rbp+10h] BYREF
  int v12; // [rsp+498h] [rbp+20h] BYREF
  __int64 v13; // [rsp+4A0h] [rbp+28h] BYREF
  va_list va; // [rsp+4A0h] [rbp+28h]
  __int64 v15; // [rsp+4A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+4A8h] [rbp+30h]
  __int64 v17; // [rsp+4B0h] [rbp+38h]
  __int64 *v18; // [rsp+4B8h] [rbp+40h]
  va_list va2; // [rsp+4C0h] [rbp+48h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, __int64 *);
  v12 = a4;
  v7 = operator new(0x3F9uLL);
  v11 = 0;
  v10 = a1;
  v8 = (void **)v18;
  SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__InitCoro_2(
    &v11,
    (__int64)v7 + 96,
    a2,
    a3,
    &v12,
    (int *)va,
    (int *)va1,
    v17,
    v18,
    (int *)va2,
    v10);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>,wil::err_returncode_policy>(v8);
  return a2;
}
