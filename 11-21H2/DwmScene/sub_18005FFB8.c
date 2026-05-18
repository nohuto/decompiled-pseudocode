/*
 * XREFs of sub_18005FFB8 @ 0x18005FFB8
 * Callers:
 *     sub_18001AB5C @ 0x18001AB5C (sub_18001AB5C.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_18005FFB8(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  int v3; // eax

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  *(_DWORD *)(a1 + 32) = 0;
  return Mtx_unlock(v1);
}
