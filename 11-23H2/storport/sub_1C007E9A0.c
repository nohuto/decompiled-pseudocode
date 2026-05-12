/*
 * XREFs of sub_1C007E9A0 @ 0x1C007E9A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C0081138 @ 0x1C0081138 (sub_1C0081138.c)
 */

__int64 __fastcall sub_1C007E9A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = *a4;
  sub_1C007A4E8((char *)&v7, 8u);
  result = sub_1C0080EE8(a3, &v7, 8LL);
  if ( (int)result >= 0 )
    return sub_1C0081138(a3, 0LL, a4[1] + 4);
  return result;
}
