/*
 * XREFs of sub_140574A7C @ 0x140574A7C
 * Callers:
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_140343C60 @ 0x140343C60 (sub_140343C60.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     sub_140574B54 @ 0x140574B54 (sub_140574B54.c)
 */

__int64 __fastcall sub_140574A7C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1[24];
  result = *(_QWORD *)(v2 + 16);
  if ( (result & a1[4364]) != 0 )
  {
    v4 = *(unsigned __int8 *)(v2 + 185);
    v8 = 0LL;
    v7 = -1;
    v5 = a1[25];
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 24 * v4 + 8);
    result = *(_QWORD *)(v2 + 8);
    if ( (v5 & result) != 0 && (v5 & v6) != 0 )
    {
      result = sub_140574B54(
                 ~*(_QWORD *)(v2 + 40) & (*(_QWORD *)(v2 + 80) | *(_QWORD *)(v2 + 88)) & (v6 ^ *(_QWORD *)(v2 + 128)),
                 &v8,
                 &v7,
                 a1);
      if ( (_BYTE)result )
      {
        result = sub_140574B54(1LL << v7, 0LL, 0LL, a1);
        if ( !(_BYTE)result )
          return sub_140574B54(v8 ^ (1LL << v7), 0LL, 0LL, a1);
      }
    }
  }
  return result;
}
