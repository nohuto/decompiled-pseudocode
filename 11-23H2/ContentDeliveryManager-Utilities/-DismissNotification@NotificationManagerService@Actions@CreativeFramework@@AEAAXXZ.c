/*
 * XREFs of ?DismissNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800B73E0
 * Callers:
 *     ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800B77E0 (-Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A8F7C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800A8F7C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::NotificationManagerService::DismissNotification(
        CreativeFramework::Actions::NotificationManagerService *this)
{
  __int64 v2; // rax
  int v3; // eax
  unsigned int v4; // r8d
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, PVOID); // rsi
  const WCHAR *v7; // rax
  unsigned int v8; // r8d
  PVOID Reserved1; // r14
  const WCHAR *v10; // rax
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v14; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-50h] BYREF
  HSTRING_HEADER v16; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER v17; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v15);
  v13 = 0LL;
  v2 = *v15;
  v13 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v2 + 72))(v15, &v13);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v3,
      v13);
  v5 = v13;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID))(*(_QWORD *)v13 + 64LL);
  v7 = (const WCHAR *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v7 = *(const WCHAR **)v7;
  v14 = v7;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v16, &v14, v4)[1].Reserved.Reserved1;
  v10 = (const WCHAR *)((char *)this + 48);
  if ( *((_QWORD *)this + 9) >= 8uLL )
    v10 = *(const WCHAR **)v10;
  v14 = v10;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v14, v8);
  v12 = v6(v5, v11[1].Reserved.Reserved1, Reserved1);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v12,
      v13);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v15);
}
