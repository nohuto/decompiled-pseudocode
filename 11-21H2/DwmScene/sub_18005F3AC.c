/*
 * XREFs of sub_18005F3AC @ 0x18005F3AC
 * Callers:
 *     sub_18003C2F4 @ 0x18003C2F4 (sub_18003C2F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005F3AC(__int64 a1)
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
  v4 = *(_DWORD *)(a1 + 36);
  Mtx_unlock(v1);
  return v4;
}
