/*
 * XREFs of sub_180070408 @ 0x180070408
 * Callers:
 *     sub_180026F00 @ 0x180026F00 (sub_180026F00.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_180070698 @ 0x180070698 (sub_180070698.c)
 *     sub_1800706D8 @ 0x1800706D8 (sub_1800706D8.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180070408(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rdi

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 24));
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 104));
  sub_1800706D8(a1);
  sub_180070698(a1 + 184);
  sub_180070698(a1 + 200);
  Mtx_unlock((_Mtx_t)(a1 + 104));
  return Mtx_unlock(v2);
}
