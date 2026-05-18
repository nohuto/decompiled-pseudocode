/*
 * XREFs of sub_1800E0340 @ 0x1800E0340
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

char __fastcall sub_1800E0340(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v2; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v2 = a1;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 8));
  LOBYTE(v2) = *(_BYTE *)(v2 + 112);
  Mtx_unlock(v1);
  return v2;
}
