/*
 * XREFs of ?GetMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x18004BBB0
 * Callers:
 *     CMultitaskingViewManager::DismissRequested$_ResumeCoro$1 @ 0x18020E5D0 (CMultitaskingViewManager--DismissRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020EA50 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020FAD0 (CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18004BC9C (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMultitaskingViewManager::GetMultitaskingView(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int v9; // ebp
  int MTVHost; // ebx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v15)(_QWORD, __int64, _QWORD *); // [rsp+60h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((a1 + 40) & -(__int64)(a1 != 0));
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v8, 1LL);
  *a4 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  MTVHost = CMultitaskingViewManager::_FindMTVHost(a1, a2, 1LL, &v15, 0LL);
  if ( MTVHost >= 0 )
  {
    v12 = (**v15)(v15, a3, a4);
    MTVHost = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E3,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
        (const char *)(unsigned int)v12,
        v13);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v15);
  if ( v9 >= 0 )
    LeaveCriticalSection(v8);
  return (unsigned int)MTVHost;
}
