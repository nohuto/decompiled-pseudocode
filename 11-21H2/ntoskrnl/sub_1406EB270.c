/*
 * XREFs of sub_1406EB270 @ 0x1406EB270
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140761714 @ 0x140761714 (sub_140761714.c)
 *     sub_140981070 @ 0x140981070 (sub_140981070.c)
 * Callees:
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_14027B234 @ 0x14027B234 (sub_14027B234.c)
 */

__int64 __fastcall sub_1406EB270(__int64 *a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx
  __int64 v3; // rax
  __int64 result; // rax

  v1 = *a1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
  {
    if ( (*((_BYTE *)i + 34) & 2) == 0 )
    {
      v3 = sub_14027B234(i);
      if ( v3 )
      {
        i[3] = 0LL;
        *(_QWORD *)(v3 + 64) = i;
        sub_14025592C((char *)v3);
      }
    }
  }
  result = 63487LL;
  *(_WORD *)(v1 + 12) &= ~0x800u;
  return result;
}
