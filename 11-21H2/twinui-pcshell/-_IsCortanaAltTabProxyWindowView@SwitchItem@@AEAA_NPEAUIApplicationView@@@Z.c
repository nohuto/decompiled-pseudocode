/*
 * XREFs of ?_IsCortanaAltTabProxyWindowView@SwitchItem@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804B649C
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x1804B629C (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall SwitchItem::_IsCortanaAltTabProxyWindowView(
        SwitchItem *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  bool v3; // si
  int (__fastcall *v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-238h] BYREF
  HWND hWnd; // [rsp+38h] [rbp-230h] BYREF
  WCHAR ClassName[264]; // [rsp+40h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v3 = 0;
  v7 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  if ( v4((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v7) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v7 + 24LL))(v7, &hWnd);
    if ( v5 >= 0 )
    {
      if ( GetClassNameW(hWnd, ClassName, 260) )
        v3 = CompareStringOrdinal(ClassName, -1, L"Shell_CortanaProxy", -1, 1) == 2;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB0,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v7);
  return v3;
}
