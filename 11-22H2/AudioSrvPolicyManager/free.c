/*
 * XREFs of free @ 0x1800177CC
 * Callers:
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x180015E8C (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x18004B6A0 (ATL--_dynamic_atexit_destructor_for___AtlWinModule__.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18004B7A0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
