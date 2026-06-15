/*
 * XREFs of free @ 0x1800175DC
 * Callers:
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x180015C9C (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlWinModule__ @ 0x18004A200 (ATL--_dynamic_atexit_destructor_for___AtlWinModule__.c)
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18004A2C0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
