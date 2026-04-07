/*
 * XREFs of ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800AFA2C
 * Callers:
 *     _CDesktopManager::Create_::_1_::dtor$1 @ 0x180065DD0 (_CDesktopManager--Create_--_1_--dtor$1.c)
 *     _CDisplayDisconnectAnimatedVisual::Create_::_1_::dtor$0 @ 0x180066142 (_CDisplayDisconnectAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyAnimatedVisual::Create_::_1_::dtor$0 @ 0x180066168 (_CDisplaySecondaryOnlyAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayBlackCurtainAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B9761 (_CDisplayBlackCurtainAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B987D (_CDisplayDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayDuplicateToExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B9999 (_CDisplayDuplicateToExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B9AB5 (_CDisplayExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayExtendToDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B9BD1 (_CDisplayExtendToDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayMixedModeAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B9CED (_CDisplayMixedModeAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyToDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B9E09 (_CDisplaySecondaryOnlyToDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800B9F25 (_CDisplaySecondaryOnlyToExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDisplayBlackCurtainAnimatedVisual::operator delete(void *a1, const struct std::nothrow_t *a2)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
