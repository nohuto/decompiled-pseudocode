/*
 * XREFs of ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800BA720
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800BAA10 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800B8D48 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800B8D48.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800BA16C (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     ?ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z @ 0x1800BBABC (-ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CreativeFramework::Actions::InstallAppByStoreId(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        char a4,
        char a5,
        bool a6,
        const WCHAR *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  char v11; // r12
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  HSTRING *v17; // r9
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, __int64, __int64); // r15
  unsigned int v21; // r8d
  unsigned int v22; // r8d
  PVOID Reserved1; // rdi
  unsigned int v24; // r8d
  HSTRING_HEADER *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  int v28; // eax
  int v29; // [rsp+20h] [rbp-E0h]
  HSTRING v30; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v35; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *v36; // [rsp+80h] [rbp-80h] BYREF
  PCWSTR StringRawBuffer; // [rsp+88h] [rbp-78h] BYREF
  PCWSTR v38; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v39; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v40; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v41; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER v42; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING_HEADER v43; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING_HEADER v44; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING_HEADER v45; // [rsp+110h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v11 = (char)a3;
  v34 = this;
  v41 = a2;
  v40 = a7;
  v39 = a8;
  v36 = a9;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v35, (__int64)a2, (unsigned int)a3);
  v32 = 0LL;
  v12 = *v35;
  v32 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 48))(v35, &v32);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      171LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v13,
      v29);
  if ( !a4 )
  {
    WindowsDeleteString(0LL);
    v30 = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v42, &v34, v15);
    v18 = CreativeFramework::StoreHelpers::ParseStoreId((HSTRING)v16[1].Reserved.Reserved1, (HSTRING)&string, &v30, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        176LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v18,
        v29);
    StringRawBuffer = WindowsGetStringRawBuffer(v30, 0LL);
    v38 = WindowsGetStringRawBuffer(string, 0LL);
    v33 = v32;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    CreativeFramework::Actions::GetEntitlementForRecord(&v33, (WCHAR *)&v38, (WCHAR *)&StringRawBuffer, &v36, &a10, a5);
    WindowsDeleteString(v30);
    v30 = 0LL;
    WindowsDeleteString(string);
  }
  v19 = v32;
  v20 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64))(*(_QWORD *)v32 + 112LL);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v42, &v39, v14);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v40, v21);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, &v41, v22)[1].Reserved.Reserved1;
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v45, &v34, v24);
  LOBYTE(v26) = a6;
  LOBYTE(v27) = v11;
  v28 = v20(v19, v25[1].Reserved.Reserved1, v27, v26);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      188LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v28,
      (int)Reserved1);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v35 )
    (*(void (__fastcall **)(__int64 *))(*v35 + 16))(v35);
}
