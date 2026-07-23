/*
 * XREFs of sub_14064CD04 @ 0x14064CD04
 * Callers:
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_140A1CC1C @ 0x140A1CC1C (sub_140A1CC1C.c)
 * Callees:
 *     sub_1403A7718 @ 0x1403A7718 (sub_1403A7718.c)
 *     sub_14064CC20 @ 0x14064CC20 (sub_14064CC20.c)
 *     sub_1408132F0 @ 0x1408132F0 (sub_1408132F0.c)
 */

__int64 __fastcall sub_14064CD04(void *a1)
{
  int v1; // edi
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v1 = sub_14064CC20(a1, &v3);
  if ( v1 >= 0 )
    sub_1403A7718(v3, 1);
  if ( v3 )
    sub_1408132F0(v3);
  return (unsigned int)v1;
}
