/*
 * XREFs of sub_140639F60 @ 0x140639F60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_140639F60(__int64 a1, int a2, const void *a3, unsigned int a4, __int64 a5, void **a6)
{
  if ( a2 != 3 || a4 > 0x14000 )
    return 3221225804LL;
  memmove(*a6, a3, a4);
  *((_DWORD *)*a6 + 20480) = a4;
  *((_DWORD *)*a6 + 20481) = 3;
  return 0LL;
}
