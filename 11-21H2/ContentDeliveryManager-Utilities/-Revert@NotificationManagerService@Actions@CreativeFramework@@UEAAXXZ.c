/*
 * XREFs of ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800CAAE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CreativeFramework::Actions::NotificationManagerService::Revert(
        CreativeFramework::Actions::NotificationManagerService *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, PVOID); // rsi
  const WCHAR *v9; // rax
  unsigned int v10; // r8d
  PVOID Reserved1; // r14
  const WCHAR *v12; // rax
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v17; // [rsp+30h] [rbp-50h] BYREF
  HSTRING_HEADER v18; // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER v19; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v17, a2, a3);
  v15 = 0LL;
  v4 = *v17;
  v15 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 72))(v17, &v15);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      124LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v5,
      v15);
  v7 = v15;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID))(*(_QWORD *)v15 + 64LL);
  v9 = (const WCHAR *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v9 = *(const WCHAR **)v9;
  v16 = v9;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16, v6)[1].Reserved.Reserved1;
  v12 = (const WCHAR *)((char *)this + 48);
  if ( *((_QWORD *)this + 9) >= 8uLL )
    v12 = *(const WCHAR **)v12;
  v16 = v12;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v19, &v16, v10);
  v14 = v8(v7, v13[1].Reserved.Reserved1, Reserved1);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      126LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v14,
      v15);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v17 )
    (*(void (__fastcall **)(__int64 *))(*v17 + 16))(v17);
}
