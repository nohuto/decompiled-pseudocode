/*
 * XREFs of ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800B86B0
 * Callers:
 *     ?StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B98B0 (-StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BA7B0 (-StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB2B0 (-StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BBA10 (-StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800BC880 (-StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x1800BE550 (-StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BEBD0 (-StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF880 (-StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x1800436BC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180043790 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800438B4 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180044114 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
        CDisplayAnimatedVisual *this,
        struct IAnimationListener *a2,
        unsigned int **a3)
{
  CAnimationEngine *v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // rsi
  unsigned int v8; // edi

  v5 = CDesktopManager::AcquireAnimationEngine();
  if ( v6 )
  {
    v7 = v6;
    do
    {
      if ( **a3 != -1 )
      {
        CAnimationEngine::ScheduleStopAnimation(v5, **a3);
        **a3 = -1;
      }
      ++a3;
      --v7;
    }
    while ( v7 );
  }
  v8 = CAnimationEngine::UnregisterForAnimationCompleteNotification(v5, a2);
  if ( v5 )
    CAnimationEngine::Release(v5);
  return v8;
}
