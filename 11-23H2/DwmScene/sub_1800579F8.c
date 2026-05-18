/*
 * XREFs of sub_1800579F8 @ 0x1800579F8
 * Callers:
 *     sub_1800363BC @ 0x1800363BC (sub_1800363BC.c)
 * Callees:
 *     sub_180011C7C @ 0x180011C7C (sub_180011C7C.c)
 */

__int64 __fastcall sub_1800579F8(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  __int64 v2; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v2 = a1;
  sub_180011C7C((struct _Mtx_internal_imp_t *)(a1 + 128));
  LODWORD(v2) = *(_DWORD *)(v2 + 32);
  Mtx_unlock(v1);
  return (unsigned int)v2;
}
