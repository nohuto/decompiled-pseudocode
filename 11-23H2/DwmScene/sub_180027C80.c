/*
 * XREFs of sub_180027C80 @ 0x180027C80
 * Callers:
 *     sub_180027E8C @ 0x180027E8C (sub_180027E8C.c)
 *     sub_18003678C @ 0x18003678C (sub_18003678C.c)
 *     sub_18004FDD4 @ 0x18004FDD4 (sub_18004FDD4.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_18006F004 @ 0x18006F004 (sub_18006F004.c)
 *     sub_1800707C4 @ 0x1800707C4 (sub_1800707C4.c)
 *     sub_1800734B8 @ 0x1800734B8 (sub_1800734B8.c)
 *     sub_180082034 @ 0x180082034 (sub_180082034.c)
 *     sub_18008301C @ 0x18008301C (sub_18008301C.c)
 *     sub_18009D490 @ 0x18009D490 (sub_18009D490.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180027B38 @ 0x180027B38 (sub_180027B38.c)
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 */

__int64 __fastcall sub_180027C80(__int64 a1, int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  if ( a2 >= 0 )
  {
    v3 = (_BYTE *)sub_180027E0C(v5);
  }
  else
  {
    v3 = (_BYTE *)(sub_180027E0C(v5) - 1);
    *v3 = 45;
  }
  sub_180027B38(a1, v3, v5);
  return a1;
}
