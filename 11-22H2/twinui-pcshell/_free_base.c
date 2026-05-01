/*
 * XREFs of _free_base @ 0x1801C73C6
 * Callers:
 *     __dyn_tls_dtor @ 0x1801CE370 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x1801CE428 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
