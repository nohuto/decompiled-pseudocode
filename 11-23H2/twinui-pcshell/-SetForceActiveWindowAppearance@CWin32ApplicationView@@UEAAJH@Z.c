/*
 * XREFs of ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1800DFE50
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800DFAB0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x1802D1B00 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::SetForceActiveWindowAppearance(CWin32ApplicationView *this, int a2)
{
  __int64 v2; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  int *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  v4 = 15;
  v5 = &v7;
  v6 = 4;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  SetWindowCompositionAttribute(v2, &v4);
  return 0LL;
}
