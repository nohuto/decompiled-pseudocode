/*
 * XREFs of free @ 0x18000347C
 * Callers:
 *     ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180040FF0 (--1CAtlBaseModule@ATL@@QEAA@XZ.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x180046D10 (ATL--_dynamic_atexit_destructor_for___AtlWinModule__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
