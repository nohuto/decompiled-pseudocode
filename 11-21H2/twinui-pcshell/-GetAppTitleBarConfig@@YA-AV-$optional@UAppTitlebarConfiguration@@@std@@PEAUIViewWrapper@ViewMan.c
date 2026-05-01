/*
 * XREFs of ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F35A4
 * Callers:
 *     _lambda_150041feadb12d29b74b347f051d22fe_::operator() @ 0x1800F3188 (_lambda_150041feadb12d29b74b347f051d22fe_--operator().c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EA304 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppTitleBarConfig(__int64 a1, __int64 a2, unsigned int a3)
{
  int (__fastcall *v5)(__int64, _QWORD, int *); // rbx
  __int64 v6; // rax
  bool v7; // cl
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[32]; // [rsp+28h] [rbp-30h] BYREF

  v5 = *(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)a2 + 360LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v10, (const WCHAR **)&off_180632C48, a3);
  v7 = v5(a2, *(_QWORD *)(v6 + 24), &v9) >= 0;
  result = a1;
  if ( v7 )
  {
    LOBYTE(v9) = v9 == 1;
    BYTE1(v9) = v9;
    *(_WORD *)a1 = v9;
    *(_BYTE *)(a1 + 2) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 2) = 0;
  }
  return result;
}
