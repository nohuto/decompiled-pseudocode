/*
 * XREFs of sub_18005E478 @ 0x18005E478
 * Callers:
 *     sub_18005B86C @ 0x18005B86C (sub_18005B86C.c)
 * Callees:
 *     sub_18005E544 @ 0x18005E544 (sub_18005E544.c)
 */

float __fastcall sub_18005E478(__int64 a1, float a2)
{
  float v3; // [rsp+80h] [rbp+10h] BYREF
  float v4; // [rsp+88h] [rbp+18h] BYREF

  sub_18005E544(&v4, &v3);
  return (float)(v3 / v4) / a2;
}
