/*
 * XREFs of ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B420
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020FAD0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 * Callees:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B610 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewManager::CreateMultitaskingView(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // r14
  int v9; // r15d
  int MTVHost; // eax
  unsigned int v11; // ebx
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8 = (struct _RTL_CRITICAL_SECTION *)((a1 + 40) & -(__int64)(a1 != 0));
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v8, 1LL);
  v13 = a4;
  MTVHost = CMultitaskingViewManager::_CreateMTVHost(a1, a2, 0LL, a3);
  v11 = MTVHost;
  if ( MTVHost < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CE,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)MTVHost,
      v13);
  if ( v9 >= 0 )
    LeaveCriticalSection(v8);
  return v11;
}
