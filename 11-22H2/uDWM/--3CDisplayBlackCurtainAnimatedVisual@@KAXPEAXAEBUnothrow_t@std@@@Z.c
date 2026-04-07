/*
 * XREFs of ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B4054
 * Callers:
 *     _CDisplayDisconnectAnimatedVisual::Create_::_1_::dtor$0 @ 0x18006812D (_CDisplayDisconnectAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDesktopManager::Create_::_1_::dtor$1 @ 0x180068222 (_CDesktopManager--Create_--_1_--dtor$1.c)
 *     _CDisplayBlackCurtainAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BCFA1 (_CDisplayBlackCurtainAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD0BD (_CDisplayDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayDuplicateToExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD1D9 (_CDisplayDuplicateToExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD2F5 (_CDisplayExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayExtendToDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD411 (_CDisplayExtendToDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayMixedModeAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD52D (_CDisplayMixedModeAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD649 (_CDisplaySecondaryOnlyAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyToDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD765 (_CDisplaySecondaryOnlyToDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD881 (_CDisplaySecondaryOnlyToExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDisplayBlackCurtainAnimatedVisual::operator delete(void *a1, const struct std::nothrow_t *a2)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
