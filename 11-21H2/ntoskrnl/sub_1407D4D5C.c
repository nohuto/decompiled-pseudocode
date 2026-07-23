/*
 * XREFs of sub_1407D4D5C @ 0x1407D4D5C
 * Callers:
 *     sub_140767820 @ 0x140767820 (sub_140767820.c)
 *     sub_140776CFC @ 0x140776CFC (sub_140776CFC.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 */

__int64 __fastcall sub_1407D4D5C(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r11
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  v4 = a1;
  for ( result = 3221225485LL; a1; result = 0LL )
  {
    result = sub_1402E0AC4((_WORD *)(v4 + 2 * v2), a2 - v2, &v8);
    if ( (int)result < 0 )
      break;
    a1 = v8;
    v7 = v8 + v6;
    if ( v8 + v6 >= v6 )
    {
      v2 = v7 + 1;
      if ( v7 + 1 >= v7 )
        continue;
    }
    return 3221225621LL;
  }
  return result;
}
