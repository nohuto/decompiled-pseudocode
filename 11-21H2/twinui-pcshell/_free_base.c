/*
 * XREFs of _free_base @ 0x180188E5E
 * Callers:
 *     __dyn_tls_dtor @ 0x18018ED40 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18018EDF4 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
