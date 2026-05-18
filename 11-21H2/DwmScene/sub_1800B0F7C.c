/*
 * XREFs of sub_1800B0F7C @ 0x1800B0F7C
 * Callers:
 *     sub_1800B1040 @ 0x1800B1040 (sub_1800B1040.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_1800B0F7C(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1 + 17;
  v11 = 0LL;
  v3 = 8LL;
  do
  {
    v4 = *v1;
    *v1 = 0LL;
    v9 = v4;
    v5 = v1[1];
    v1[1] = 0LL;
    v10 = v5;
    sub_180010910((__int64)&v9);
    sub_180010910((__int64)&v11);
    v1 += 2;
    --v3;
  }
  while ( v3 );
  v6 = a1[51];
  a1[51] = 0LL;
  v9 = v6;
  v7 = a1[52];
  a1[52] = 0LL;
  v10 = v7;
  v11 = 0LL;
  sub_180010910((__int64)&v9);
  return sub_180010910((__int64)&v11);
}
