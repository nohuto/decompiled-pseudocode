/*
 * XREFs of sub_18003FBB0 @ 0x18003FBB0
 * Callers:
 *     sub_18003FBE0 @ 0x18003FBE0 (sub_18003FBE0.c)
 *     sub_18003FC8C @ 0x18003FC8C (sub_18003FC8C.c)
 * Callees:
 *     sub_18003FA7C @ 0x18003FA7C (sub_18003FA7C.c)
 */

__int64 __fastcall sub_18003FBB0(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18003FA7C(a1, &v3);
  return a1;
}
