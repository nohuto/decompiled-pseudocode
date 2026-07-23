/*
 * XREFs of sub_1407915C4 @ 0x1407915C4
 * Callers:
 *     sub_1407914BC @ 0x1407914BC (sub_1407914BC.c)
 *     sub_140798334 @ 0x140798334 (sub_140798334.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

_QWORD *__fastcall sub_1407915C4(_QWORD **a1, const void *a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  size_t v5; // rbp

  v3 = *a1;
  v5 = a3;
  if ( *a1 == a1 )
    return 0LL;
  while ( (_DWORD)v5 != *((_DWORD *)v3 - 3) || memcmp(a2, (const void *)*(v3 - 1), v5) )
  {
    v3 = (_QWORD *)*v3;
    if ( v3 == a1 )
      return 0LL;
  }
  return v3 - 4;
}
