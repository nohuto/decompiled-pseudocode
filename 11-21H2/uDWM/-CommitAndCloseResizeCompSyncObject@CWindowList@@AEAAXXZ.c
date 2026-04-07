/*
 * XREFs of ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18010241C
 * Callers:
 *     ??1CWindowList@@UEAA@XZ @ 0x180101700 (--1CWindowList@@UEAA@XZ.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1801064F0 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009870C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CWindowList::CommitAndCloseResizeCompSyncObject(CWindowList *this)
{
  __int64 v1; // r8
  int v3; // eax
  void *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 78);
  if ( v1 )
  {
    if ( *((_BYTE *)this + 658) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5)
                                                                    + 16LL)
                                                      + 32LL))(
             *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
             v1);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          2668LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v3);
      v1 = *((_QWORD *)this + 78);
      *((_BYTE *)this + 658) = 0;
    }
    NtDCompositionCommitSynchronizationObject(v1);
    ConfirmResizeCommit(*((_QWORD *)this + 79));
    v4 = (void *)*((_QWORD *)this + 78);
    *((_QWORD *)this + 79) = 0LL;
    CloseHandle(v4);
    *((_QWORD *)this + 78) = 0LL;
  }
}
