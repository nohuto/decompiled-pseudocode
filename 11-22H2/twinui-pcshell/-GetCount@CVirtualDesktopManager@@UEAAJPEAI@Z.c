/*
 * XREFs of ?GetCount@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x180601810
 * Callers:
 *     ?GetCount@CVirtualDesktopManager@@WBA@EAAJPEAI@Z @ 0x1802A8870 (-GetCount@CVirtualDesktopManager@@WBA@EAAJPEAI@Z.c)
 *     ?GetCount@CVirtualDesktopManager@@WBI@EAAJPEAI@Z @ 0x1802A8890 (-GetCount@CVirtualDesktopManager@@WBI@EAAJPEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z @ 0x1806018B0 (-GetCountInternal@CVirtualDesktopManager@@UEAAJPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetCount(CVirtualDesktopManager *this, unsigned int *a2)
{
  int CountInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 19) + 24LL))(*((_QWORD *)this + 19), &SRWLock);
  CountInternal = CVirtualDesktopManager::GetCountInternal(this, a2);
  v5 = CountInternal;
  if ( CountInternal < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5B5,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CountInternal);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
