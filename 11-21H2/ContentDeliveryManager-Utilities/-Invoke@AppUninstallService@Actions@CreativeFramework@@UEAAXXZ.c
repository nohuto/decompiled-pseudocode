/*
 * XREFs of ?Invoke@AppUninstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BAB90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::AppUninstallService::Invoke(
        CreativeFramework::Actions::AppUninstallService *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID); // rsi
  const WCHAR *v9; // rax
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v13; // [rsp+28h] [rbp-40h] BYREF
  const WCHAR *v14; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER v15; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v13, a2, a3);
  v12 = 0LL;
  v4 = *v13;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 48))(v13, &v12);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      272LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v5,
      v12);
  v7 = v12;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v12 + 104LL);
  v9 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v9 = *(const WCHAR **)v9;
  v14 = v9;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, &v14, v6);
  v11 = v8(v7, v10[1].Reserved.Reserved1);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      273LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v11,
      v12);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
}
