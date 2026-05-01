/*
 * XREFs of ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x180597710
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x180598348 (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x180598AA8 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CAppTransitionManager::EndAppTransitionAnimationRequest(CAppTransitionManager *this)
{
  CAppTransitionManager *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // esi
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (CAppTransitionManager *)((char *)this - 88);
  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle(v2) )
    return 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 32) & -(__int64)(v2 != 0LL));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = CAppTransitionManager::_EndDWMTransitionRequest(v2, 0);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v6);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return v7;
}
