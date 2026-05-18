/*
 * XREFs of sub_18009DDF0 @ 0x18009DDF0
 * Callers:
 *     sub_18009FB00 @ 0x18009FB00 (sub_18009FB00.c)
 * Callees:
 *     sub_18009DD48 @ 0x18009DD48 (sub_18009DD48.c)
 */

_QWORD *__fastcall sub_18009DDF0(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  *(_BYTE *)(a1 + 3468) = 1;
  v2 = 0LL;
  do
  {
    result = (_QWORD *)*(unsigned int *)(a1 + 3464);
    if ( _bittest((const int *)&result, v2) )
      result = sub_18009DD48((_QWORD *)(a1 + 192 * v2 + 8), 192 * v2 + a1 + 2312);
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 6 );
  return result;
}
