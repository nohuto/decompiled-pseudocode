/*
 * XREFs of SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x1801BEEA8
 * Callers:
 *     ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@IPEAUHWND__@@W4ShowFlags@1@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z @ 0x1801BFFC4 (-CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@IPEAUHWND__@@W4Show.c)
 * Callees:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::_parameters_ @ 0x1805AE4C0 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync_--_25_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__InitCoro_2(
        _DWORD *a1,
        _DWORD *a2,
        _BYTE *a3,
        _DWORD *a4,
        int a5,
        _DWORD *a6,
        __int64 a7,
        int a8)
{
  SnapFlyoutHost::CreateSnapFlyoutInstanceAsync_::_25_::_parameters_::_parameters_(
    (_DWORD)a2 + 2593,
    a8,
    *a4,
    a5,
    *a6,
    a7);
  *(_QWORD *)a2 = SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1;
  a2[2] = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *((_BYTE *)a2 + 2592) = 0;
  return SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1(a2);
}
