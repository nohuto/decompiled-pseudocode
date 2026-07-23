/*
 * XREFs of sub_1407E1FE0 @ 0x1407E1FE0
 * Callers:
 *     sub_1407E1DC8 @ 0x1407E1DC8 (sub_1407E1DC8.c)
 * Callees:
 *     sub_1407E3440 @ 0x1407E3440 (sub_1407E3440.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 */

__int64 __fastcall sub_1407E1FE0(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1407E3440(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_1407E3F10(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
