/*
 * XREFs of sub_1800FC340 @ 0x1800FC340
 * Callers:
 *     sub_18002BF28 @ 0x18002BF28 (sub_18002BF28.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800FC340(_Mtx_t *a1)
{
  _Mtx_t v1; // rbx
  int v2; // eax
  int v3; // eax

  v1 = *a1;
  v2 = Mtx_lock(*a1);
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  while ( 1 )
  {
    if ( !*((_BYTE *)v1 + 228) )
    {
      v3 = *((_DWORD *)v1 + 56);
      if ( v3 != -1 )
        break;
    }
    Cnd_wait((_Mtx_t)((char *)v1 + 152), v1);
  }
  *((_DWORD *)v1 + 56) = v3 + 1;
  return Mtx_unlock(v1);
}
