/*
 * XREFs of sub_180060110 @ 0x180060110
 * Callers:
 *     sub_18003C2F4 @ 0x18003C2F4 (sub_18003C2F4.c)
 * Callees:
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 */

int __fastcall sub_180060110(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  int v3; // eax
  struct _Cnd_internal_imp_t *v4; // rsi
  _BYTE *v5; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  v4 = (struct _Cnd_internal_imp_t *)(a1 + 280);
  v5 = (_BYTE *)sub_1800441D8(a1 + 424);
  while ( *v5 )
    Cnd_wait(v4, v1);
  return Mtx_unlock(v1);
}
