/*
 * XREFs of sub_1C007A530 @ 0x1C007A530
 * Callers:
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 * Callees:
 *     sub_1C007A4E8 @ 0x1C007A4E8 (sub_1C007A4E8.c)
 */

__int64 __fastcall sub_1C007A530(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  sub_1C007A4E8((char *)&v2, 4u);
  return v2;
}
