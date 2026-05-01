/*
 * XREFs of ?CreateSnapFlyoutInstanceAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@IPEAUHWND__@@W4ShowFlags@1@V?$tip_test@U_tip_SnapFlyoutShowTest@@@tip@@@Z @ 0x1801BFFC4
 * Callers:
 *     ?InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805AF4BC (-InternalShow@SnapFlyoutHost@@AEAAXPEAUHWND__@@W4ShowFlags@1@AEBV-$unique_any_t@V-$unique_storag.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??1?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BD78 (--1-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_InitCoro$2 @ 0x1801BEEA8 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_InitCoro$2.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync(int a1, _BYTE *a2, int a3, int a4, int a5, __int64 a6)
{
  _DWORD *v9; // rax
  __int64 v10; // rbx
  int v12; // [rsp+38h] [rbp-A80h]
  int v13; // [rsp+AC8h] [rbp+10h] BYREF
  int v14; // [rsp+AD0h] [rbp+18h] BYREF

  v14 = a3;
  v9 = operator new(0xA51uLL);
  v13 = 0;
  v12 = a1;
  v10 = a6;
  SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__InitCoro_2(&v13, v9, a2, &v14, a4, &a5, a6, v12);
  tip::tip_test<_tip_SearchHideTest>::~tip_test<_tip_SearchHideTest>(v10);
  return a2;
}
