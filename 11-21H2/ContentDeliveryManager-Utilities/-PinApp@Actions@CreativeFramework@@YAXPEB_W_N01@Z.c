/*
 * XREFs of ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x1800C911C
 * Callers:
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C8C60 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z @ 0x1800C92E4 (-PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CreativeFramework::Actions::PinApp(const WCHAR *this, const wchar_t *a2, __int64 a3, const wchar_t *a4)
{
  char v4; // r14
  HRESULT v5; // eax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, __int64, PVOID); // rsi
  PVOID Reserved1; // rdi
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  int ppv; // [rsp+20h] [rbp-39h]
  __int64 v17; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+38h] [rbp-21h]
  LPVOID v19; // [rsp+40h] [rbp-19h] BYREF
  const WCHAR *v20; // [rsp+48h] [rbp-11h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp-9h] BYREF
  HSTRING_HEADER v22; // [rsp+58h] [rbp-1h] BYREF
  HSTRING_HEADER v23; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = (char)a4;
  v21 = this;
  v18 = 0;
  v20 = &Src;
  v19 = 0LL;
  v5 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &v19);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      31LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v5,
      ppv);
  v17 = 0LL;
  v18 = 1;
  v6 = *(_QWORD *)v19;
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v6 + 96))(
         v19,
         &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
         &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
         &v17);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      34LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v7,
      ppv);
  if ( v19 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
  v9 = v17;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID))(*(_QWORD *)v17 + 48LL);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, &v20, v8)[1].Reserved.Reserved1;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v21, v12);
  LOBYTE(ppv) = v4;
  LOBYTE(v14) = 1;
  v15 = v10(v9, v13[1].Reserved.Reserved1, v14, Reserved1);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      41LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v15,
      ppv);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
}
