/*
 * XREFs of ?deallocate@?$allocator@ULTCMITEM@CLauncherTipContextMenu@@@std@@QEAAXQEAULTCMITEM@CLauncherTipContextMenu@@_K@Z @ 0x1801E7E58
 * Callers:
 *     _std::vector_CLauncherTipContextMenu::LTCMITEM_std::allocator_CLauncherTipContextMenu::LTCMITEM___::_Emplace_reallocate_CLauncherTipContextMenu::LTCMITEM_const_&__::_1_::catch$0 @ 0x1801D7107 (_std--vector_CLauncherTipContextMenu--LTCMITEM_std--allocator_CLauncherTipContextMenu--LTCMITEM_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<CLauncherTipContextMenu::LTCMITEM>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 12 * a3);
}
