/*
 * XREFs of _free_base @ 0x18004A7CA
 * Callers:
 *     __dyn_tls_dtor @ 0x18004B8A0 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x18004B954 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
