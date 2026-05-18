/*
 * XREFs of _free_base @ 0x18000BF76
 * Callers:
 *     __dyn_tls_dtor @ 0x18000C770 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18000C828 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
