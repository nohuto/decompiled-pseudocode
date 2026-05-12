/*
 * XREFs of sub_1C007B420 @ 0x1C007B420
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 */

__int64 __fastcall sub_1C007B420(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // edx
  __int64 result; // rax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = *a4;
  sub_1C007A4E8((char *)&v7, 8u);
  result = sub_1C0080EE8(a3, &v7, v5);
  if ( (int)result >= 0 )
    return sub_1C00811A0(a3, 0LL, 0LL);
  return result;
}
