/*
 * XREFs of sub_140997374 @ 0x140997374
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     sub_1407FE700 @ 0x1407FE700 (sub_1407FE700.c)
 *     sub_140996EE0 @ 0x140996EE0 (sub_140996EE0.c)
 */

__int64 __fastcall sub_140997374(int a1)
{
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  v3 = -1;
  sub_1407FE700(1, (int *)&v3);
  v4 = 0;
  v5 = a1;
  sub_140996EE0(&v4, v3);
  return sub_1407FE700(0, (int *)&v3);
}
