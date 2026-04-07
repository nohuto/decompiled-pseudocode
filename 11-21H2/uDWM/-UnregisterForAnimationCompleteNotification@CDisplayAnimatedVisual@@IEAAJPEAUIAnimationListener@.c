/*
 * XREFs of ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x18005E4F4
 * Callers:
 *     ?StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ @ 0x18005E460 (-StopImpl@CDisplaySecondaryOnlyAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B6130 (-StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B7040 (-StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B7B10 (-StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B8260 (-StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B9040 (-StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BAB10 (-StopImpl@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB790 (-StopImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180014410 (-UnregisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180014600 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180015140 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015930 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
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
