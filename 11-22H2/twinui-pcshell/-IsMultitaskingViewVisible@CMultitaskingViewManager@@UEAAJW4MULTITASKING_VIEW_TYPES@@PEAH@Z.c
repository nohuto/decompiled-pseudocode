/*
 * XREFs of ?IsMultitaskingViewVisible@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAH@Z @ 0x1805537F0
 * Callers:
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x18020E5D0 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020EA50 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020FAD0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 * Callees:
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18004BC9C (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewManager::IsMultitaskingViewVisible(__int64 a1, int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  int v8; // [rsp+38h] [rbp-10h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 40) & -(__int64)(a1 != 0));
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  *a3 = (int)CMultitaskingViewManager::_FindMTVHost(a1, a2, 1, 0LL, 0LL) >= 0;
  if ( v8 >= 0 )
    LeaveCriticalSection(v6);
  return 0LL;
}
