/*
 * XREFs of sub_1407648E4 @ 0x1407648E4
 * Callers:
 *     sub_140764814 @ 0x140764814 (sub_140764814.c)
 *     sub_140953B9C @ 0x140953B9C (sub_140953B9C.c)
 *     sub_140957E34 @ 0x140957E34 (sub_140957E34.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 */

__int64 __fastcall sub_1407648E4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r9
  signed int v6; // r8d
  __int64 *v7; // r11
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  *a3 = 0LL;
  v4 = 0LL;
  do
  {
    v6 = sub_1402E0AC4((_WORD *)(a1 + 2 * v4), a2 - v4, &v11);
    if ( v6 < 0 )
      break;
    v8 = v11;
    v9 = *v7 + v11;
    if ( v9 < *v7 )
    {
      *v7 = -1LL;
      return (unsigned int)-1073741675;
    }
    v4 = -1LL;
    if ( v9 + 1 >= v9 )
      v4 = v9 + 1;
    v6 = v9 + 1 < v9 ? 0xC0000095 : 0;
    *v7 = v4;
  }
  while ( v9 + 1 >= v9 && v8 );
  return (unsigned int)v6;
}
