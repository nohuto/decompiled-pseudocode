/*
 * XREFs of JointResize::TagViewWithLogoAsync$_InitCoro$2 @ 0x180213A6C
 * Callers:
 *     ?TagViewWithLogoAsync@JointResize@@AEAA?AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTRANSITION_TARGET@@@Z @ 0x1802144A0 (-TagViewWithLogoAsync@JointResize@@AEAA-AUfire_and_forget@winrt@@AEBUSecondaryViewInfo@1@W4DWMTR.c)
 * Callees:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointResize::TagViewWithLogoAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        int *a5,
        __int64 a6)
{
  int v6; // r10d

  v6 = *a5;
  *(_QWORD *)(a2 + 289) = a6;
  *(_QWORD *)(a2 + 297) = a4;
  *(_DWORD *)(a2 + 305) = v6;
  *(_QWORD *)a2 = JointResize::TagViewWithLogoAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[288] = 0;
  return JointResize::TagViewWithLogoAsync__ResumeCoro_1(a2);
}
