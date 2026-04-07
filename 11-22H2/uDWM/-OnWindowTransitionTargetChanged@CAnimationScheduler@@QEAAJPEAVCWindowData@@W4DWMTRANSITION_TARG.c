/*
 * XREFs of ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180053C8C
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180053B90 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 * Callees:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000B844 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x18000EED4 (-ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x18000FAD4 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     McTemplateU0pd_EtwEventWriteTransfer @ 0x18001568C (McTemplateU0pd_EtwEventWriteTransfer.c)
 *     _lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator() @ 0x180053ED4 (_lambda_23107513b1da1e4c6f608e9c21e81ef1_--operator().c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180053F60 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180053F94 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationScheduler::OnWindowTransitionTargetChanged(
        __int64 a1,
        struct CWindowData *a2,
        unsigned int a3,
        const RECT *a4,
        RECT *lprcSrc,
        RECT *a6,
        RECT *a7,
        RECT *a8)
{
  int v11; // edx
  __int64 i; // rbx
  int SnapshotIndex; // eax
  CTransitionVisualController *v15; // rcx
  _DWORD *v16; // rcx
  struct CTransitionWindowSnapshot *v17; // [rsp+40h] [rbp+20h] BYREF
  struct CWindowData *v18; // [rsp+48h] [rbp+28h] BYREF

  v18 = a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    McTemplateU0pd_EtwEventWriteTransfer(a1, (int)&UdwmSystemAnimation_WindowTarget, *((_QWORD *)a2 + 5), a3);
    a2 = v18;
  }
  CopyRect((LPRECT)((char *)a2 + 684), a4);
  CopyRect((LPRECT)((char *)v18 + 700), lprcSrc);
  CopyRect((LPRECT)((char *)v18 + 716), a6);
  CopyRect((LPRECT)((char *)v18 + 732), a7);
  CopyRect((LPRECT)((char *)v18 + 748), a8);
  v17 = (struct CTransitionWindowSnapshot *)&v18;
  lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator()(&v17, (char *)v18 + 684);
  lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator()(&v17, (char *)v18 + 700);
  lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator()(&v17, (char *)v18 + 716);
  lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator()(&v17, (char *)v18 + 732);
  *((_DWORD *)v18 + 170) = a3 | *((_DWORD *)v18 + 170) & 0x2000000;
  if ( *((_QWORD *)v18 + 55) )
  {
    v11 = *((_DWORD *)v18 + 170);
    if ( (v11 & 0x80000) == 0 && (v11 & 0x20000000) != 0 )
    {
      if ( CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23), v11, 0LL) )
      {
        if ( CStoryboard::ShouldAnimateShowWindow(v18) )
        {
          CTransitionVisualController::EnsureSnapshot(
            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
            v18);
          *((_DWORD *)v18 + 170) |= 0x4000000u;
          SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                            *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                            *((HWND *)v18 + 5));
          if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v15, SnapshotIndex, &v17) >= 0 )
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 36) + 32LL) + 680LL) = *((_DWORD *)v18 + 170);
        }
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v16 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 8 * i);
    if ( !v16[6] )
      (*(void (__fastcall **)(_DWORD *, struct CWindowData *, _QWORD))(*(_QWORD *)v16 + 104LL))(v16, v18, a3);
  }
  return 0LL;
}
