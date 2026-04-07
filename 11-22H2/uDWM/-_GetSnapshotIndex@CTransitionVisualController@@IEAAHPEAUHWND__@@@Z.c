/*
 * XREFs of ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180053F60
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000B844 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000BB60 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x18000D144 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E58C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18001CAD4 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x1800343B4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800364FC (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180053C8C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x1800DC298 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTransitionVisualController::_GetSnapshotIndex(CTransitionVisualController *this, HWND a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  unsigned int v4; // r8d

  v2 = *((_DWORD *)this + 20);
  v3 = -1;
  v4 = 0;
  if ( v2 )
  {
    while ( a2 != *(HWND *)(*((_QWORD *)this + 7) + 16LL * v4) )
    {
      if ( ++v4 >= v2 )
        return v3;
    }
    return v4;
  }
  return v3;
}
