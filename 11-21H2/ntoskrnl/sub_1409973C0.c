/*
 * XREFs of sub_1409973C0 @ 0x1409973C0
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_1407FE700 @ 0x1407FE700 (sub_1407FE700.c)
 *     sub_140996EE0 @ 0x140996EE0 (sub_140996EE0.c)
 */

__int64 sub_1409973C0()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+3Ch] [rbp+14h]

  v1 = -1;
  sub_1407FE700(1, (int *)&v1);
  v2 = 2;
  v3 = 30;
  sub_140996EE0(&v2, v1);
  return sub_1407FE700(0, (int *)&v1);
}
