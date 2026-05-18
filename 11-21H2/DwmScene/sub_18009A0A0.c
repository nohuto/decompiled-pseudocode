/*
 * XREFs of sub_18009A0A0 @ 0x18009A0A0
 * Callers:
 *     sub_180057108 @ 0x180057108 (sub_180057108.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 */

__int64 __fastcall sub_18009A0A0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_18001875C(v5, a2);
  return sub_18002BC44(a1, v3);
}
