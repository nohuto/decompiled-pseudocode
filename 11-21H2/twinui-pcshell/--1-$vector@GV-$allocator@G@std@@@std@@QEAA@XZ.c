/*
 * XREFs of ??1?$vector@GV?$allocator@G@std@@@std@@QEAA@XZ @ 0x180316A18
 * Callers:
 *     _CustomShellManager::IsCurrentProcessCustomShellHost_::_1_::dtor$0 @ 0x180222E2D (_CustomShellManager--IsCurrentProcessCustomShellHost_--_1_--dtor$0.c)
 *     _CustomShellManager::IsCurrentProcessCustomShellHost_::_1_::dtor$1 @ 0x180222E3F (_CustomShellManager--IsCurrentProcessCustomShellHost_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<unsigned short>::~vector<unsigned short>(__int64 a1)
{
  std::vector<unsigned short>::_Tidy(a1);
}
