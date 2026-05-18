/*
 * XREFs of sub_1800FC3BC @ 0x1800FC3BC
 * Callers:
 *     LanguageEnumProc @ 0x18002C000 (LanguageEnumProc.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800FC3BC(_Mtx_t *a1)
{
  _Mtx_t v1; // rbx
  int v2; // eax

  v1 = *a1;
  v2 = Mtx_lock(*a1);
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  *((_BYTE *)v1 + 228) = 0;
  Mtx_unlock(v1);
  return Cnd_broadcast((_Mtx_t)((char *)v1 + 152));
}
