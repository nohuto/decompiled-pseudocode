/*
 * XREFs of ?EnsureGlobalTimeChangeNotificationRegistered@CDisplayAnimatedVisual@@AEAAJXZ @ 0x18005BB70
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18005BA80 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18005CCEC (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x18005F980 (-StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x1800B59C4 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B5FE0 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B60B0 (-StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6DA4 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B6E70 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B79A4 (-SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800B7A70 (-StartImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B804C (-SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8EF4 (-SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800B8FC0 (-StartImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ @ 0x1800BA2C4 (-SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ @ 0x1800BA390 (-StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BA86C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BB458 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BB530 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::EnsureGlobalTimeChangeNotificationRegistered(CDisplayAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 433) )
    return 0LL;
  v2 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_BYTE *)this + 433) = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A8,
    (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
