/*
 * XREFs of sub_1C007B3C0 @ 0x1C007B3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 *     sub_1C0080EE8 @ 0x1C0080EE8 (sub_1C0080EE8.c)
 *     sub_1C00811A0 @ 0x1C00811A0 (sub_1C00811A0.c)
 */

__int64 __fastcall sub_1C007B3C0(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 result; // rax
  int v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = *a4;
  sub_1C007A4E8((char *)&v6, 4u);
  result = sub_1C0080EE8(a3, &v6, 4LL);
  if ( (int)result >= 0 )
    return sub_1C00811A0(a3, 2LL, 1LL);
  return result;
}
