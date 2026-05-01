/*
 * XREFs of SnapFlyoutHost::InternalHideAsync$_InitCoro$2 @ 0x1801C05D4
 * Callers:
 *     ?InternalHideAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C0A4C (-InternalHideAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$unique_st.c)
 * Callees:
 *     SnapFlyoutHost::InternalHideAsync$_ResumeCoro$1 @ 0x1801C06A0 (SnapFlyoutHost--InternalHideAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapFlyoutHost::InternalHideAsync__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 609) = a5;
  *(_QWORD *)(a2 + 617) = a4;
  *(_QWORD *)a2 = SnapFlyoutHost::InternalHideAsync__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[608] = 0;
  return SnapFlyoutHost::InternalHideAsync__ResumeCoro_1(a2);
}
