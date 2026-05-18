/*
 * XREFs of sub_180058354 @ 0x180058354
 * Callers:
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

int __fastcall sub_180058354(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 128));
  *(_DWORD *)(a1 + 32) = 0;
  return Mtx_unlock(v1);
}
