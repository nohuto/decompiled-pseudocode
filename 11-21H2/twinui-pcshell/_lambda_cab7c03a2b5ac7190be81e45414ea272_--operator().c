/*
 * XREFs of _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x18049BC60
 * Callers:
 *     ??$LambdaEnumWindowsProc@V_lambda_4bda98b3a01c558fc217a4a30bde81e2_@@@EnumWindowsHelpers@@YAHPEAUHWND__@@_J@Z @ 0x18049B800 (--$LambdaEnumWindowsProc@V_lambda_4bda98b3a01c558fc217a4a30bde81e2_@@@EnumWindowsHelpers@@YAHPEA.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@AEAPEAU2@@Z @ 0x18049BAA8 (--$emplace_back@AEAPEAUHWND__@@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@QEAAAE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cab7c03a2b5ac7190be81e45414ea272_::operator()(__int64 a1, HWND a2)
{
  __int64 v4; // rdi
  void (__fastcall *v5)(__int64, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  __int64 v7; // rcx
  int v9; // [rsp+50h] [rbp+30h] BYREF
  HWND v10; // [rsp+58h] [rbp+38h] BYREF
  __int64 v11; // [rsp+60h] [rbp+40h] BYREF

  v10 = a2;
  v11 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v5 = *(void (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v4 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v11);
  v5(v4, a2, AddressOf);
  if ( a2 == **(HWND **)(a1 + 8) )
  {
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(*(_QWORD *)(a1 + 16), &v10);
    v7 = *(_QWORD *)(a1 + 24);
LABEL_13:
    std::vector<HWND__ *>::emplace_back<HWND__ * &>(v7, &v10);
    goto LABEL_14;
  }
  if ( IsWindowVisible(a2)
    && (unsigned int)GetWindowCompositionAttribute(a2, *(_QWORD *)(a1 + 32))
    && !**(_DWORD **)(a1 + 40) )
  {
    if ( GetPropW(a2, L"DesktopWindow") )
    {
      std::vector<HWND__ *>::emplace_back<HWND__ * &>(*(_QWORD *)(a1 + 16), &v10);
      v7 = *(_QWORD *)(a1 + 48);
      goto LABEL_13;
    }
    if ( (unsigned int)GetWindowBand(a2, &v9) && v9 != 1 && v9 != 8 || !v11 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      goto LABEL_13;
    }
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
  return 0LL;
}
