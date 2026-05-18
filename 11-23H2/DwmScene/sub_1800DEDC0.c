/*
 * XREFs of sub_1800DEDC0 @ 0x1800DEDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_1800DF56C @ 0x1800DF56C (sub_1800DF56C.c)
 */

int __fastcall sub_1800DEDC0(__int64 a1, int a2)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 160));
  sub_1800DF56C(a1 + 240, &v5);
  return Mtx_unlock(v2);
}
