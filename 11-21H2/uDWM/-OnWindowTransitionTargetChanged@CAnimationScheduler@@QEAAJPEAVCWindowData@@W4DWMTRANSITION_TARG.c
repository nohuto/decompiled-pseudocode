/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18004C9BC
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18004C8D0 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013CE0 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x1800A7484 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x1800A74FC (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x1800A8088 (McTemplateU0pd_EtwEventWriteTransfer.c)
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800EC7CC (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowTransitionTargetChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const RECT *a4,
        RECT *lprcSrc,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  __int64 v12; // rdx
  bool v13; // zf
  __int64 i; // rdi
  __int64 v16; // rdi
  int SnapshotIndex; // eax
  _DWORD *v18; // rcx

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0pd_EtwEventWriteTransfer(a1, &UdwmSystemAnimation_WindowTarget, *(_QWORD *)(a2 + 40), a3);
  CopyRect((LPRECT)(a2 + 676), a4);
  CopyRect((LPRECT)(a2 + 692), lprcSrc);
  CopyRect((LPRECT)(a2 + 708), a6);
  CopyRect((LPRECT)(a2 + 724), a7);
  CopyRect((LPRECT)(a2 + 740), a8);
  v12 = a3 | *(_DWORD *)(a2 + 672) & 0x2000000;
  v13 = *(_QWORD *)(a2 + 440) == 0LL;
  *(_DWORD *)(a2 + 672) = v12;
  if ( !v13 && (v12 & 0x80000) == 0 && (v12 & 0x20000000) != 0 )
  {
    if ( (unsigned __int8)CAnimationScheduler::ShouldSnapshot(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22),
                            v12,
                            0LL) )
    {
      if ( CStoryboard::ShouldAnimateShowWindow((const struct CWindowData *)a2) )
      {
        CTransitionVisualController::EnsureSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
          (struct CWindowData *)a2);
        *(_DWORD *)(a2 + 672) |= 0x4000000u;
        v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
        SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                          (CTransitionVisualController *)v16,
                          *(HWND *)(a2 + 40));
        if ( SnapshotIndex >= 0 && SnapshotIndex < *(_DWORD *)(v16 + 80) )
        {
          _mm_lfence();
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 56) + 16LL * (unsigned int)SnapshotIndex + 8)
                                            + 288LL)
                                + 32LL)
                    + 672LL) = *(_DWORD *)(a2 + 672);
        }
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v18 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( !v18[6] )
      (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v18 + 104LL))(v18, a2, a3);
  }
  return 0LL;
}
