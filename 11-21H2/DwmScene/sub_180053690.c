/*
 * XREFs of sub_180053690 @ 0x180053690
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800535FC @ 0x1800535FC (sub_1800535FC.c)
 */

__int64 __fastcall sub_180053690(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  sub_1800535FC(a1, 0LL);
  v2 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  v5[0] = v2;
  v3 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  v5[1] = v3;
  v6 = 0LL;
  sub_180010910((__int64)v5);
  return sub_180010910((__int64)&v6);
}
