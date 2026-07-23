/*
 * XREFs of sub_14023B3C8 @ 0x14023B3C8
 * Callers:
 *     sub_14023B354 @ 0x14023B354 (sub_14023B354.c)
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 *     sub_1405B10D8 @ 0x1405B10D8 (sub_1405B10D8.c)
 *     sub_1405BDFF8 @ 0x1405BDFF8 (sub_1405BDFF8.c)
 *     sub_140B52548 @ 0x140B52548 (sub_140B52548.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14023B3C8(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp

  v4 = (unsigned __int16)word_140D05000;
  if ( a4 != -1 )
    v4 = a4 + 1;
  v6 = 0;
  if ( a4 != -1 )
    v6 = a4;
LABEL_7:
  if ( v6 >= v4 )
    return 0LL;
  v8 = 24512LL * v6 + *(_QWORD *)(a1 + 16) + 23168LL;
  v9 = v8 + 1176;
  while ( 1 )
  {
    if ( v8 >= v9 )
    {
      ++v6;
      goto LABEL_7;
    }
    if ( (unsigned int)sub_14042A5E0(a1, v8) )
      return 1LL;
    v8 += 168LL;
  }
}
