/*
 * XREFs of sub_1800A7CA4 @ 0x1800A7CA4
 * Callers:
 *     sub_18007B2AC @ 0x18007B2AC (sub_18007B2AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A7CA4(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  int v3; // eax
  __int64 v4; // rdi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 48);
  v3 = Mtx_lock((_Mtx_t)(a1 + 48));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  v4 = *(_QWORD *)(a1 + 24);
  Mtx_unlock(v1);
  return v4;
}
