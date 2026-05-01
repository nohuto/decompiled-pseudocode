/*
 * XREFs of SnapFlyoutHost::ShowAsync$_InitCoro$2 @ 0x1801C0AC4
 * Callers:
 *     ?ShowAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x1801C0FA4 (-ShowAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 * Callees:
 *     SnapFlyoutHost::ShowAsync$_ResumeCoro$1 @ 0x1801C0B90 (SnapFlyoutHost--ShowAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapFlyoutHost::ShowAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        int *a5,
        __int64 a6)
{
  int v6; // r10d

  v6 = *a5;
  *(_QWORD *)(a2 + 913) = a6;
  *(_QWORD *)(a2 + 921) = a4;
  *(_DWORD *)(a2 + 929) = v6;
  *(_QWORD *)a2 = SnapFlyoutHost::ShowAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[912] = 0;
  return SnapFlyoutHost::ShowAsync__ResumeCoro_1(a2);
}
