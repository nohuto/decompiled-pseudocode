/*
 * XREFs of sub_1800E0F30 @ 0x1800E0F30
 * Callers:
 *     sub_180029D6C @ 0x180029D6C (sub_180029D6C.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

int __fastcall sub_1800E0F30(struct _Mtx_internal_imp_t **a1)
{
  struct _Mtx_internal_imp_t *v1; // rdi
  int v2; // esi
  char v3; // bl
  int result; // eax

  v1 = *a1;
  sub_180011C7C(*a1);
  v2 = --*((_DWORD *)v1 + 56);
  v3 = *((_BYTE *)v1 + 228);
  result = Mtx_unlock(v1);
  if ( v3 )
  {
    if ( !v2 )
      return Cnd_signal((struct _Mtx_internal_imp_t *)((char *)v1 + 80));
  }
  else if ( v2 == -2 )
  {
    return Cnd_broadcast((struct _Mtx_internal_imp_t *)((char *)v1 + 152));
  }
  return result;
}
