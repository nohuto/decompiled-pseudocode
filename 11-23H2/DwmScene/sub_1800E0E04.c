/*
 * XREFs of sub_1800E0E04 @ 0x1800E0E04
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 * Callees:
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 */

int __fastcall sub_1800E0E04(struct _Mtx_internal_imp_t **a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_18002B3EC((__int64)v3, *a1);
  while ( *((_BYTE *)v1 + 228) )
    Cnd_wait((struct _Mtx_internal_imp_t *)((char *)v1 + 152), v3[0]);
  *((_BYTE *)v1 + 228) = 1;
  while ( *((_DWORD *)v1 + 56) )
    Cnd_wait((struct _Mtx_internal_imp_t *)((char *)v1 + 80), v3[0]);
  return sub_18002B8E0((__int64)v3);
}
