/*
 * XREFs of sub_1800E0240 @ 0x1800E0240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 *     sub_18001C9D4 @ 0x18001C9D4 (sub_18001C9D4.c)
 */

int __fastcall sub_1800E0240(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  _QWORD *v2; // rsi
  _QWORD *v3; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v2 = (_QWORD *)(a1 + 96);
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 8));
  v3 = (_QWORD *)*v2;
  sub_18001C9D4((__int64)v2, (__int64)v2, *(__int64 **)(*v2 + 8LL));
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v2[1] = 0LL;
  return Mtx_unlock(v1);
}
