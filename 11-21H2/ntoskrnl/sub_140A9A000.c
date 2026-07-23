/*
 * XREFs of sub_140A9A000 @ 0x140A9A000
 * Callers:
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A97FF4 @ 0x140A97FF4 (sub_140A97FF4.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A9A170 @ 0x140A9A170 (sub_140A9A170.c)
 * Callees:
 *     sub_140A81A34 @ 0x140A81A34 (sub_140A81A34.c)
 */

_QWORD *__fastcall sub_140A9A000(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rbx
  _QWORD *v4; // r10
  __int64 v5; // r11
  _QWORD *result; // rax

  v2 = (a1 >> 12) % 0x3FF;
  v3 = (_QWORD *)(*((_QWORD *)qword_140D57500 + 2050) + 16 * v2);
  if ( (_QWORD *)*v3 == v3
    || !(unsigned int)sub_140A81A34((unsigned __int64 *)qword_140D57500 + 2 * v2 + 2052, a1, a1 + 1) )
  {
    return 0LL;
  }
  while ( 1 )
  {
    result = v4 - 3;
    if ( *(v4 - 3) == v5 )
      break;
    v4 = (_QWORD *)*v4;
    if ( v4 == v3 )
      return 0LL;
  }
  return result;
}
