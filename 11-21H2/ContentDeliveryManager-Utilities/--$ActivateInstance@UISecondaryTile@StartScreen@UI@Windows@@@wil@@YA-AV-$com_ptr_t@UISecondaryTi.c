/*
 * XREFs of ??$ActivateInstance@UISecondaryTile@StartScreen@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UISecondaryTile@StartScreen@UI@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800D215C
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800D2890 (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::ActivateInstance<Windows::UI::StartScreen::ISecondaryTile>(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v9; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = L"Windows.UI.StartScreen.SecondaryTile";
  v8 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, &v9, a3);
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, &v8);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1695LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5,
      v8);
  *a1 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v8)(v8, &GUID_9e9e51e0_2bb5_4bc0_bb8d_42b23abcc88d, a1);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6,
      v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
