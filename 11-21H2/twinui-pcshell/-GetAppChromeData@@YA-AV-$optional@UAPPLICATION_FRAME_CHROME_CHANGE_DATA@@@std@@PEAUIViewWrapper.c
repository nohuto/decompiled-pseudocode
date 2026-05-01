/*
 * XREFs of ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800F350C
 * Callers:
 *     _lambda_150041feadb12d29b74b347f051d22fe_::operator() @ 0x1800F3188 (_lambda_150041feadb12d29b74b347f051d22fe_--operator().c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EA04C (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppChromeData(__int64 a1, __int64 a2, unsigned int a3)
{
  int (__fastcall *v5)(__int64, _QWORD, __int64 *); // rbx
  __int64 v6; // rax
  bool v7; // zf
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[32]; // [rsp+28h] [rbp-30h] BYREF

  v5 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 360LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v10, (const WCHAR **)off_180632C40, a3);
  v7 = v5(a2, *(_QWORD *)(v6 + 24), &v9) < 0;
  result = a1;
  if ( v7 )
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    LODWORD(v9) = (_DWORD)v9 == 1 ? 0x81 : 0;
    HIDWORD(v9) = 128;
    *(_QWORD *)a1 = v9;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return result;
}
