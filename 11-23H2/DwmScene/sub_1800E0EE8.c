/*
 * XREFs of sub_1800E0EE8 @ 0x1800E0EE8
 * Callers:
 *     sub_180029C9C @ 0x180029C9C (sub_180029C9C.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

int __fastcall sub_1800E0EE8(struct _Mtx_internal_imp_t **a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx

  v1 = *a1;
  sub_180011C7C(*a1);
  *((_BYTE *)v1 + 228) = 0;
  Mtx_unlock(v1);
  return Cnd_broadcast((struct _Mtx_internal_imp_t *)((char *)v1 + 152));
}
