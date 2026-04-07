/*
 * XREFs of ??3CAnimationComponent@@SAXPEAX@Z @ 0x180099A44
 * Callers:
 *     _CTopLevelWindow::EnsureWindowFrames_::_1_::dtor$0 @ 0x180064F38 (_CTopLevelWindow--EnsureWindowFrames_--_1_--dtor$0.c)
 *     _CDWMDisplaySet::EnumerateOutputs_::_1_::dtor$0 @ 0x180065612 (_CDWMDisplaySet--EnumerateOutputs_--_1_--dtor$0.c)
 *     _CAcrylicSheet::Create_::_1_::dtor$1 @ 0x18009A11F (_CAcrylicSheet--Create_--_1_--dtor$1.c)
 *     _CTransitionVisualController::CreateDesktopSnapshotComponent_::_1_::dtor$0 @ 0x1800EC2DF (_CTransitionVisualController--CreateDesktopSnapshotComponent_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationComponent::operator delete(void *a1)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
