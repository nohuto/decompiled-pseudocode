/*
 * XREFs of sub_180097690 @ 0x180097690
 * Callers:
 *     sub_1800701BC @ 0x1800701BC (sub_1800701BC.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

__int64 __fastcall sub_180097690(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v3; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 48));
  v3 = *(_QWORD *)(a1 + 24);
  Mtx_unlock(v1);
  return v3;
}
