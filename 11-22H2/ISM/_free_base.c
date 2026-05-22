/*
 * XREFs of _free_base @ 0x1800572CA
 * Callers:
 *     __dyn_tls_dtor @ 0x1800585A0 (__dyn_tls_dtor.c)
 *     __tlregdtor @ 0x180058658 (__tlregdtor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free_base(void *Block)
{
  _o__free_base(Block);
}
