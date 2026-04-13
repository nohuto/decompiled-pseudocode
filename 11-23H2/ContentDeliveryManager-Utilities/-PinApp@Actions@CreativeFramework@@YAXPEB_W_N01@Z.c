/*
 * XREFs of ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x1800B6608
 * Callers:
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800B6170 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTaskBarSuggestionsPinHelper@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UITaskBarSuggestionsPinHelper@TaskBarSuggestions@UI@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800B5FF4 (-GetTaskBarSuggestionsPinHelper@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UITaskBarSuggestions.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::PinApp(const WCHAR *this, const wchar_t *a2, __int64 a3, const wchar_t *a4)
{
  char v4; // bp
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, __int64, PVOID); // rsi
  unsigned int v7; // r8d
  PVOID Reserved1; // rdi
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+30h] [rbp-78h] BYREF
  wchar_t *v15; // [rsp+38h] [rbp-70h] BYREF
  const WCHAR *v16; // [rsp+40h] [rbp-68h] BYREF
  HSTRING_HEADER v17; // [rsp+48h] [rbp-60h] BYREF
  HSTRING_HEADER v18; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = (char)a4;
  v16 = this;
  v15 = word_180106C64;
  CreativeFramework::Actions::GetTaskBarSuggestionsPinHelper(&v14);
  v5 = v14;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID))(*(_QWORD *)v14 + 48LL);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)&v15, v7)[1].Reserved.Reserved1;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16, v9);
  LOBYTE(v13) = v4;
  LOBYTE(v11) = 1;
  v12 = v6(v5, v10[1].Reserved.Reserved1, v11, Reserved1);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v12,
      v13);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
}
