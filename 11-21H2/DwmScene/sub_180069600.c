/*
 * XREFs of sub_180069600 @ 0x180069600
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180069600(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  v4[0] = v1;
  v2 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  v5 = 0LL;
  v4[1] = v2;
  sub_180010910((__int64)v4);
  return sub_180010910((__int64)&v5);
}
