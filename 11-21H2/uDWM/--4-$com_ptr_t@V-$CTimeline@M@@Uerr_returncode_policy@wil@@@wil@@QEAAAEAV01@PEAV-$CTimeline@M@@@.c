/*
 * XREFs of ??4?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAV?$CTimeline@M@@@Z @ 0x18005CD98
 * Callers:
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ @ 0x18005CCEC (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ @ 0x1800B59C4 (-SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B5FE0 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B6DA4 (-SetupDelayBeforeEntranceAnimation@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800B79A4 (-SetupDelayBeforeEntranceAnimation@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B804C (-SetupDelayBeforeEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800B8EF4 (-SetupDelayBeforeEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ @ 0x1800BA2C4 (-SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BA86C (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BB458 (-SetupDelayBeforeEntranceAnimation@CDisplaySecondaryOnlyToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88 (-CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v4; // zf
  char v5; // al

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
  if ( v2 )
  {
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  return a1;
}
