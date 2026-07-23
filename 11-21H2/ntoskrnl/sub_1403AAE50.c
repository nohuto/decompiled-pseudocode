/*
 * XREFs of sub_1403AAE50 @ 0x1403AAE50
 * Callers:
 *     sub_1403AAA10 @ 0x1403AAA10 (sub_1403AAA10.c)
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 *     sub_1403AAB4C @ 0x1403AAB4C (sub_1403AAB4C.c)
 *     sub_1403AAC80 @ 0x1403AAC80 (sub_1403AAC80.c)
 *     sub_1403AAD30 @ 0x1403AAD30 (sub_1403AAD30.c)
 *     sub_1403AAD84 @ 0x1403AAD84 (sub_1403AAD84.c)
 *     sub_1403AADCC @ 0x1403AADCC (sub_1403AADCC.c)
 *     sub_1403AADFC @ 0x1403AADFC (sub_1403AADFC.c)
 *     sub_140506F6C @ 0x140506F6C (sub_140506F6C.c)
 *     sub_140507040 @ 0x140507040 (sub_140507040.c)
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 *     sub_140509620 @ 0x140509620 (sub_140509620.c)
 *     sub_140509D78 @ 0x140509D78 (sub_140509D78.c)
 *     sub_140509E58 @ 0x140509E58 (sub_140509E58.c)
 *     sub_14050E490 @ 0x14050E490 (sub_14050E490.c)
 *     sub_14050E638 @ 0x14050E638 (sub_14050E638.c)
 *     sub_14051BC28 @ 0x14051BC28 (sub_14051BC28.c)
 *     sub_14051BC80 @ 0x14051BC80 (sub_14051BC80.c)
 *     sub_14051C5D8 @ 0x14051C5D8 (sub_14051C5D8.c)
 *     sub_140A5367C @ 0x140A5367C (sub_140A5367C.c)
 *     sub_140A53718 @ 0x140A53718 (sub_140A53718.c)
 *     sub_140A5B19C @ 0x140A5B19C (sub_140A5B19C.c)
 * Callees:
 *     sub_1403AAE80 @ 0x1403AAE80 (sub_1403AAE80.c)
 */

char sub_1403AAE50()
{
  char v0; // al
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = sub_1403AAE80(0LL, 0LL, 0LL, &v2);
  return v0 != 0 ? v2 : 0;
}
