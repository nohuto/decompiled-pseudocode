/*
 * XREFs of _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x180555264
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___ @ 0x180554960 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_4bda98b3a01c558fc217a4a30bde81e2___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAA?A_TAEAPEAUHWND__@@@Z @ 0x180554FE4 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cab7c03a2b5ac7190be81e45414ea272_::operator()(__int64 a1, HWND a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, HWND, __int64 *); // rbx
  __int64 v6; // rcx
  int v8; // [rsp+50h] [rbp+30h] BYREF
  HWND v9; // [rsp+58h] [rbp+38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+40h] BYREF

  v9 = a2;
  v10 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v5 = *(void (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v4 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  v5(v4, a2, &v10);
  if ( a2 == **(HWND **)(a1 + 8) )
  {
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(*(_QWORD *)(a1 + 16), &v9);
    v6 = *(_QWORD *)(a1 + 24);
LABEL_13:
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(v6, &v9);
    goto LABEL_14;
  }
  if ( IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, *(_QWORD *)(a1 + 32))
    && !**(_DWORD **)(a1 + 40) )
  {
    if ( GetPropW(a2, L"DesktopWindow") )
    {
      std::vector<HWND__ *>::emplace_back<HWND__ * &>(*(_QWORD *)(a1 + 16), &v9);
      v6 = *(_QWORD *)(a1 + 48);
      goto LABEL_13;
    }
    if ( (unsigned int)GetWindowBand(a2, &v8) && v8 != 1 && v8 != 8 || !v10 )
    {
      v6 = *(_QWORD *)(a1 + 16);
      goto LABEL_13;
    }
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  return 0LL;
}
