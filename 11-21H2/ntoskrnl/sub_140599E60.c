/*
 * XREFs of sub_140599E60 @ 0x140599E60
 * Callers:
 *     sub_14096DF60 @ 0x14096DF60 (sub_14096DF60.c)
 *     sub_14096E3D8 @ 0x14096E3D8 (sub_14096E3D8.c)
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 * Callees:
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 */

_QWORD *__fastcall sub_140599E60(__int64 a1, const void *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a1 + 16624);
  for ( i = *(_QWORD **)(a1 + 16624); ; i = (_QWORD *)*i )
  {
    if ( i == v2 )
      return 0LL;
    if ( !memcmp(i + 3, a2, 0x20uLL) )
      break;
  }
  return i;
}
