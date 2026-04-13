/*
 * XREFs of ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x1800BA53C
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BAA10 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800BA16C (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::InstallAppByProductAndSku(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        bool a5,
        char a6,
        bool a7,
        const WCHAR *a8,
        const wchar_t *a9)
{
  char v9; // r15
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, PVOID, __int64); // r14
  unsigned int v15; // r8d
  PVOID Reserved1; // rdi
  unsigned int v17; // r8d
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r9
  int v20; // eax
  int v21; // [rsp+20h] [rbp-C1h]
  __int64 v22; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v23; // [rsp+48h] [rbp-99h] BYREF
  const WCHAR *v24; // [rsp+50h] [rbp-91h] BYREF
  const WCHAR *v25; // [rsp+58h] [rbp-89h] BYREF
  __int64 *v26; // [rsp+60h] [rbp-81h] BYREF
  const WCHAR *v27; // [rsp+68h] [rbp-79h] BYREF
  const WCHAR *v28; // [rsp+70h] [rbp-71h] BYREF
  HSTRING_HEADER v29; // [rsp+78h] [rbp-69h] BYREF
  HSTRING_HEADER v30; // [rsp+98h] [rbp-49h] BYREF
  HSTRING_HEADER v31; // [rsp+B8h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+37h]

  v9 = (char)a4;
  v25 = this;
  v24 = a2;
  v28 = a3;
  v27 = a8;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v26, (__int64)a2, (unsigned int)a3);
  v22 = 0LL;
  v10 = *v26;
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(v26, &v22);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      195LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v11,
      v21);
  if ( !a5 )
  {
    v23 = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    CreativeFramework::Actions::GetEntitlementForRecord(&v23, (WCHAR *)&v25, (WCHAR *)&v24, &v27, &a9, a6);
  }
  v13 = v22;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64))(*(_QWORD *)v22 + 128LL);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v28, v12);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v24, v15)[1].Reserved.Reserved1;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, &v25, v17);
  LOBYTE(v21) = a7;
  LOBYTE(v19) = v9;
  v20 = v14(v13, v18[1].Reserved.Reserved1, Reserved1, v19);
  if ( v20 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      207LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v20,
      v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v26 )
    (*(void (__fastcall **)(__int64 *))(*v26 + 16))(v26);
}
