/*
 * XREFs of ?WindowsTipContentPublished@PublishWindowsTipService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800B9D1C
 * Callers:
 *     ?Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800B9C10 (-Invoke@PublishWindowsTipService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180022C6D (memset_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800A8F7C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_1800A8F7C.c)
 *     StringCopyWorkerW_0 @ 0x1800B67C8 (StringCopyWorkerW_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::PublishWindowsTipService::WindowsTipContentPublished(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  size_t v2; // rdx
  size_t *v3; // r8
  const wchar_t *v4; // r9
  HRESULT v5; // eax
  size_t v6; // rdx
  size_t *v7; // r8
  const wchar_t *v8; // r9
  HRESULT v9; // eax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, __int64, wchar_t *); // rdi
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  size_t v17; // [rsp+20h] [rbp-E0h]
  size_t v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-C8h] BYREF
  const WCHAR *v22; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER v23; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[256]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t v25[256]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  v22 = L"WNF_SHEL_WINDOWSTIP_CONTENT_PUBLISHED";
  memset_0(pszDest, 0, 0x400uLL);
  v4 = (const wchar_t *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  v5 = StringCopyWorkerW_0(pszDest, v2, v3, v4, v17);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v5,
      v18);
  v8 = (const wchar_t *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v8 = *(const wchar_t **)v8;
  v9 = StringCopyWorkerW_0(v25, v6, v7, v8, v18);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v9,
      v19);
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v21);
  v20 = 0LL;
  v10 = *v21;
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 104))(v21, &v20);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v11,
      v19);
  v13 = v20;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, wchar_t *))(*(_QWORD *)v20 + 48LL);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v22, v12);
  v16 = v14(v13, v15[1].Reserved.Reserved1, 1024LL, pszDest);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\publishwindowstip.cpp",
      (const char *)(unsigned int)v16,
      v19);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v21);
}
