/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x180012200
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::GetShouldShowTitleBarBackButton(CTaskWindow *this)
{
  char v1; // di
  __int64 v2; // rsi
  int (__fastcall *v3)(__int64, __int64, int *); // rbx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = *(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v2 + 360LL);
    v7 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v6, L"BackVisible", 0xCu, 0xBu);
    if ( v3(v2, v7, &v5) >= 0 )
      return v5 == 0;
  }
  return v1;
}
