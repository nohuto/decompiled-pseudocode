/*
 * XREFs of sub_1800FB570 @ 0x1800FB570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_1800FB570(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  int v3; // eax
  char v4; // di

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v3 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  v4 = *(_BYTE *)(a1 + 112);
  Mtx_unlock(v1);
  return v4;
}
