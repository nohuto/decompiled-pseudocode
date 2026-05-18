/*
 * XREFs of sub_1800FC2AC @ 0x1800FC2AC
 * Callers:
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800FC2AC(_Mtx_t *a1)
{
  _Mtx_t v1; // rbx
  int v2; // eax

  v1 = *a1;
  v2 = Mtx_lock(*a1);
  if ( !v2 )
    goto LABEL_4;
  std::_Throw_C_error(v2);
  __debugbreak();
  do
  {
    Cnd_wait((_Mtx_t)((char *)v1 + 152), v1);
LABEL_4:
    ;
  }
  while ( *((_BYTE *)v1 + 228) );
  *((_BYTE *)v1 + 228) = 1;
  while ( *((_DWORD *)v1 + 56) )
    Cnd_wait((_Mtx_t)((char *)v1 + 80), v1);
  return Mtx_unlock(v1);
}
