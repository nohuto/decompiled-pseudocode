/*
 * XREFs of ?SetForceActiveWindowAppearance@CWin32ApplicationView@@UEAAJH@Z @ 0x1800E7150
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800E74A0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x18022B610 (-HandleRecycle@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::SetForceActiveWindowAppearance(CWin32ApplicationView *this, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  int v6; // [rsp+20h] [rbp-28h] BYREF
  int *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v6 = 15;
  v7 = &v9;
  v8 = 4;
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  SetWindowCompositionAttribute(v2, &v6, v3, v4);
  return 0LL;
}
