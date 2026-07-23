/*
 * XREFs of sub_140782774 @ 0x140782774
 * Callers:
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 * Callees:
 *     sub_1407827B8 @ 0x1407827B8 (sub_1407827B8.c)
 */

__int64 __fastcall sub_140782774(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // r11
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  result = sub_1407827B8(a1, &xmmword_140010B20, &v3);
  if ( (int)result >= 0 )
  {
    *v2 = v3 + 48;
    return 0LL;
  }
  return result;
}
