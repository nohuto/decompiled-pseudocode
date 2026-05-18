/*
 * XREFs of sub_1800A5528 @ 0x1800A5528
 * Callers:
 *     sub_18000AD10 @ 0x18000AD10 (sub_18000AD10.c)
 * Callees:
 *     sub_1800A5488 @ 0x1800A5488 (sub_1800A5488.c)
 */

__int64 __fastcall sub_1800A5528(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_1800A5488(a1, &v3);
  return a1;
}
