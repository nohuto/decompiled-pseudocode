/*
 * XREFs of ?TagViewWithLogoAsync@JointResize@@AEAA?AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTRANSITION_TARGET@@@Z @ 0x1802144A0
 * Callers:
 *     ?TagWindowsForResize@JointResize@@AEAAXXZ @ 0x1805E4C2C (-TagWindowsForResize@JointResize@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     JointResize::TagViewWithLogoAsync$_InitCoro$2 @ 0x180213A6C (JointResize--TagViewWithLogoAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall JointResize::TagViewWithLogoAsync(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  char *v7; // rax
  int v9; // [rsp+198h] [rbp+10h] BYREF
  int v10; // [rsp+1A8h] [rbp+20h] BYREF

  v10 = a4;
  v7 = (char *)operator new(0x139uLL);
  v9 = 0;
  JointResize::TagViewWithLogoAsync__InitCoro_2(&v9, v7, a2, a3, &v10, a1);
  return a2;
}
