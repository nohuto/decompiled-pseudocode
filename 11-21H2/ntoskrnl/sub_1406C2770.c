/*
 * XREFs of sub_1406C2770 @ 0x1406C2770
 * Callers:
 *     <none>
 * Callees:
 *     ntoskrnl_19 @ 0x14041DE80 (ntoskrnl_19.c)
 */

__int64 __fastcall sub_1406C2770(__int64 a1, __int128 *a2, _BYTE *a3, int a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]

  v4 = *a2;
  v9 = 0;
  v8 = a4;
  v7 = v4;
  result = ntoskrnl_19(23LL, (__int64)&v7);
  *a3 = v9;
  return result;
}
