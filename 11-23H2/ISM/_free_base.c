/*
 * XREFs of _free_base @ 0x18005653A
 * Callers:
 *     __dyn_tls_dtor @ 0x180057770 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x180057828 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
