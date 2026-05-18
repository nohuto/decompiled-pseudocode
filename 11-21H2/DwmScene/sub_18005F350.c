/*
 * XREFs of sub_18005F350 @ 0x18005F350
 * Callers:
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005F350(__int64 a1)
{
  struct _Mtx_internal_imp_t *v1; // rbx
  int v3; // eax
  unsigned int v4; // edi

  v1 = (struct _Mtx_internal_imp_t *)(a1 + 128);
  v3 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v3 )
  {
    std::_Throw_C_error(v3);
    __debugbreak();
  }
  v4 = *(_DWORD *)(a1 + 32);
  Mtx_unlock(v1);
  return v4;
}
