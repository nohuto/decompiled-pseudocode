/*
 * XREFs of ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800AA550
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800AA7F0 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800A5060 (--0-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A8F7C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800A8F7C.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800AA060 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     ?ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z @ 0x1800AB498 (-ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
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
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, PVOID, __int64, __int64); // r15
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  PVOID Reserved1; // rdi
  unsigned int v25; // r8d
  HSTRING_HEADER *v26; // rax
  __int64 v27; // r9
  __int64 v28; // r8
  int v29; // eax
  int v30; // [rsp+20h] [rbp-E0h]
  HSTRING v31; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  const WCHAR *v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *v37; // [rsp+80h] [rbp-80h] BYREF
  PCWSTR StringRawBuffer; // [rsp+88h] [rbp-78h] BYREF
  PCWSTR v39; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v40; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v41; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v42; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER v43; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v44; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER v45; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER v46; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v11 = (char)a3;
  v34 = this;
  v42 = a2;
  v41 = a7;
  v40 = a8;
  v37 = a9;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v35);
  v33 = 0LL;
  v12 = *v35;
  v33 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 48))(v35, &v33);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v13,
      v30);
  if ( !a4 )
  {
    WindowsDeleteString(0LL);
    v31 = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v34, v15);
    v18 = CreativeFramework::StoreHelpers::ParseStoreId((HSTRING)v16[1].Reserved.Reserved1, (HSTRING)&string, &v31, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB0,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v18,
        v30);
    StringRawBuffer = WindowsGetStringRawBuffer(v31, 0LL);
    v39 = WindowsGetStringRawBuffer(string, 0LL);
    v19 = wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>(
            &v36,
            &v33);
    CreativeFramework::Actions::GetEntitlementForRecord(
      v19,
      (__int64 *)&v39,
      (__int64 *)&StringRawBuffer,
      &v37,
      &a10,
      a5);
    WindowsDeleteString(v31);
    v31 = 0LL;
    WindowsDeleteString(string);
  }
  v20 = v33;
  v21 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64))(*(_QWORD *)v33 + 112LL);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v40, v14);
  Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, &v41, v22);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v45, &v42, v23)[1].Reserved.Reserved1;
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, &v34, v25);
  LOBYTE(v27) = a6;
  LOBYTE(v28) = v11;
  v29 = v21(v20, v26[1].Reserved.Reserved1, v28, v27);
  if ( v29 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v29,
      (int)Reserved1);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v33);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v35);
}
