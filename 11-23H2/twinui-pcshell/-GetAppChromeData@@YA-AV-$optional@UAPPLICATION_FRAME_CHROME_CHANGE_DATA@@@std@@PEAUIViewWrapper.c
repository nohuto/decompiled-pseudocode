/*
 * XREFs of ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019F380
 * Callers:
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x1801D7AC0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A2F4C (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppChromeData(__int64 a1, __int64 a2, unsigned int a3)
{
  int (__fastcall *v5)(__int64, PVOID, __int64 *); // rbx
  HSTRING_HEADER *v6; // rax
  bool v7; // zf
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF

  v5 = *(int (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)a2 + 360LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, (const WCHAR **)off_1807C2238, a3);
  v7 = v5(a2, v6[1].Reserved.Reserved1, &v9) < 0;
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
