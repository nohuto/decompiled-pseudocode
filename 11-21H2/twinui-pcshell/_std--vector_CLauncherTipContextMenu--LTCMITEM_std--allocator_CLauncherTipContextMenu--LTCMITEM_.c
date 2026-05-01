/*
 * XREFs of _std::vector_CLauncherTipContextMenu::LTCMITEM_std::allocator_CLauncherTipContextMenu::LTCMITEM___::_Emplace_reallocate_CLauncherTipContextMenu::LTCMITEM_const_&__::_1_::catch$0 @ 0x1801D7107
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@QEAAXQEAULTCMITEM@CLauncherTipContextMenu@@_K@Z @ 0x1801E7E58 (-deallocate@-$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@QEAAXQEAULTCMITEM@CLauncherTipC.c)
 */

void __fastcall __noreturn std::vector_CLauncherTipContextMenu::LTCMITEM_std::allocator_CLauncherTipContextMenu::LTCMITEM___::_Emplace_reallocate_CLauncherTipContextMenu::LTCMITEM_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<CLauncherTipContextMenu::LTCMITEM>::deallocate(a1, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
