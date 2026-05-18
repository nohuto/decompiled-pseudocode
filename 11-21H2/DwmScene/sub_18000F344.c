/*
 * XREFs of sub_18000F344 @ 0x18000F344
 * Callers:
 *     sub_18000E6AC @ 0x18000E6AC (sub_18000E6AC.c)
 *     sub_18000FEFC @ 0x18000FEFC (sub_18000FEFC.c)
 * Callees:
 *     sub_18000CBBC @ 0x18000CBBC (sub_18000CBBC.c)
 */

__int64 __fastcall sub_18000F344(int a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return sub_18000CBBC(a1, a2, a3, a4, v5, retaddr);
}
