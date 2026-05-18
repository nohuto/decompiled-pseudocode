/*
 * XREFs of sub_1800FC41C @ 0x1800FC41C
 * Callers:
 *     sub_18002C0EC @ 0x18002C0EC (sub_18002C0EC.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800FC41C(_Mtx_t *a1)
{
  _Mtx_t v1; // rdi
  int v2; // eax
  int v3; // esi
  char v4; // bl
  int result; // eax

  v1 = *a1;
  v2 = Mtx_lock(*a1);
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  v3 = --*((_DWORD *)v1 + 56);
  v4 = *((_BYTE *)v1 + 228);
  result = Mtx_unlock(v1);
  if ( v4 )
  {
    if ( !v3 )
      return Cnd_signal((_Mtx_t)((char *)v1 + 80));
  }
  else if ( v3 == -2 )
  {
    return Cnd_broadcast((_Mtx_t)((char *)v1 + 152));
  }
  return result;
}
