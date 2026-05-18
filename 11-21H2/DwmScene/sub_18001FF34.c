/*
 * XREFs of sub_18001FF34 @ 0x18001FF34
 * Callers:
 *     sub_180020570 @ 0x180020570 (sub_180020570.c)
 *     sub_180020814 @ 0x180020814 (sub_180020814.c)
 *     sub_180020828 @ 0x180020828 (sub_180020828.c)
 *     sub_180026CF8 @ 0x180026CF8 (sub_180026CF8.c)
 *     sub_180060890 @ 0x180060890 (sub_180060890.c)
 *     sub_180061488 @ 0x180061488 (sub_180061488.c)
 *     sub_18006696C @ 0x18006696C (sub_18006696C.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_1800F7DC4 @ 0x1800F7DC4 (sub_1800F7DC4.c)
 *     sub_1800F8248 @ 0x1800F8248 (sub_1800F8248.c)
 *     sub_1800F9160 @ 0x1800F9160 (sub_1800F9160.c)
 *     sub_1800FA93C @ 0x1800FA93C (sub_1800FA93C.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_18001FF34(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 >= 8 )
        result = sub_180010884(*(char **)v3, 2 * v4 + 2);
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 7LL;
      *(_WORD *)v3 = 0;
      v3 += 32LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
