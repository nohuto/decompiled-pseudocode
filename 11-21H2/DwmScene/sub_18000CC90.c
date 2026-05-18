/*
 * XREFs of sub_18000CC90 @ 0x18000CC90
 * Callers:
 *     sub_18000F364 @ 0x18000F364 (sub_18000F364.c)
 * Callees:
 *     sub_18000CAC8 @ 0x18000CAC8 (sub_18000CAC8.c)
 *     sub_18000E82C @ 0x18000E82C (sub_18000E82C.c)
 */

__int64 __fastcall sub_18000CC90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp-10h]

  LODWORD(v12) = a7;
  HIDWORD(v12) = sub_18000E82C(a7);
  LOBYTE(v13) = 0;
  v15 = v13;
  v14 = v12;
  return sub_18000CAC8(v9, v8, v7, v8, v11, a6, (__int64)&v14);
}
