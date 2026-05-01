/*
 * XREFs of ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019F418
 * Callers:
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x1801D7AC0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A3204 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 *     ?IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z @ 0x1803C2B20 (-IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppTitleBarConfig(__int64 a1, __int64 a2, unsigned int a3)
{
  int (__fastcall *v5)(__int64, PVOID, int *); // rbx
  HSTRING_HEADER *v6; // rax
  bool v7; // cl
  __int64 result; // rax
  int v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF

  v5 = *(int (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)a2 + 360LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, (const WCHAR **)&off_1807C2240, a3);
  v7 = v5(a2, v6[1].Reserved.Reserved1, &v9) >= 0;
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
