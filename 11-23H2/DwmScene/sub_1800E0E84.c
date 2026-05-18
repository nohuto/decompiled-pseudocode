/*
 * XREFs of sub_1800E0E84 @ 0x1800E0E84
 * Callers:
 *     sub_180029BDC @ 0x180029BDC (sub_180029BDC.c)
 * Callees:
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 */

int __fastcall sub_1800E0E84(struct _Mtx_internal_imp_t **a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  int v2; // eax
  _Mtx_t v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_18002B3EC((__int64)v4, *a1);
  while ( 1 )
  {
    if ( !*((_BYTE *)v1 + 228) )
    {
      v2 = *((_DWORD *)v1 + 56);
      if ( v2 != -1 )
        break;
    }
    Cnd_wait((struct _Mtx_internal_imp_t *)((char *)v1 + 152), v4[0]);
  }
  *((_DWORD *)v1 + 56) = v2 + 1;
  return sub_18002B8E0((__int64)v4);
}
