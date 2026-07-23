/*
 * XREFs of sub_1402210C0 @ 0x1402210C0
 * Callers:
 *     sub_1402AC180 @ 0x1402AC180 (sub_1402AC180.c)
 *     sub_14037A8BC @ 0x14037A8BC (sub_14037A8BC.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 *     sub_1403813C0 @ 0x1403813C0 (sub_1403813C0.c)
 *     sub_140584030 @ 0x140584030 (sub_140584030.c)
 *     sub_140584C78 @ 0x140584C78 (sub_140584C78.c)
 *     sub_1405FAAC8 @ 0x1405FAAC8 (sub_1405FAAC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402210C0(_QWORD *a1, unsigned __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax
  char *v5; // r11
  _QWORD *v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx

  v4 = 3603962101LL * (a4 + 1654206401);
  v5 = (char *)a1 + a2;
  v7 = a1;
  if ( a2 >= 0x20 )
  {
    v12 = 3603962101LL * (a4 + 1654206401);
    v13 = v4;
    v14 = v4;
    v15 = v4;
    do
    {
      v12 = v13 + __ROR8__(3603962101LL * *v7 + v12, 29);
      v16 = 1654206401LL * v7[2] + v13;
      v17 = 817650473LL * v7[3];
      v18 = __ROR8__(2729050939LL * v7[1] + v14, 29);
      v7 += 4;
      v14 = v15 + v18;
      v13 = v12 + __ROR8__(v16, 29);
      v15 = v14 + __ROR8__(v17 + v15, 29);
    }
    while ( v7 <= (_QWORD *)v5 - 4 );
    v19 = v13 ^ (2729050939LL * __ROR8__(v14 + 3603962101LL * (v12 + v15), 37));
    v20 = v15 ^ (3603962101LL * __ROR8__(v12 + 2729050939LL * (v19 + v14), 37));
    v4 += v14 ^ v12 ^ (3603962101LL * __ROR8__(v19 + 2729050939LL * (v14 + v20), 37)) ^ (2729050939LL
                                                                                       * __ROR8__(
                                                                                           v20
                                                                                         + 3603962101LL * (v19 + v12),
                                                                                           37));
  }
  if ( v5 - (char *)v7 >= 16 )
  {
    v22 = 817650473LL * __ROR8__(v4 + 1654206401LL * *v7, 29);
    v23 = 1654206401LL * v7[1];
    v7 += 2;
    v24 = __ROR8__(v4 + v23, 29);
    v4 += (817650473 * v24) ^ (__ROR8__(0x9472CC564AE2C91LL * v24, 21)
                             + (v22 ^ (817650473 * v24 + __ROR8__(3603962101LL * v22, 21))));
  }
  if ( v5 - (char *)v7 >= 8 )
  {
    v8 = 817650473LL * *v7++;
    v4 = (2729050939LL * __ROR8__(v8 + v4, 55)) ^ (v8 + v4);
  }
  if ( v5 - (char *)v7 >= 4 )
  {
    v9 = *(unsigned int *)v7;
    v7 = (_QWORD *)((char *)v7 + 4);
    v4 = (2729050939LL * __ROR8__(817650473 * v9 + v4, 26)) ^ (817650473 * v9 + v4);
  }
  if ( v5 - (char *)v7 >= 2 )
  {
    v21 = *(unsigned __int16 *)v7;
    v7 = (_QWORD *)((char *)v7 + 2);
    v4 = (2729050939LL * __ROR8__(817650473 * v21 + v4, 48)) ^ (817650473 * v21 + v4);
  }
  if ( v5 - (char *)v7 >= 1 )
    v4 = (2729050939LL * __ROR8__(817650473LL * *(unsigned __int8 *)v7 + v4, 37)) ^ (817650473LL
                                                                                   * *(unsigned __int8 *)v7
                                                                                   + v4);
  v10 = 3603962101u * (v4 ^ __ROR8__(v4, 28));
  result = v10 ^ __ROR8__(v10, 29);
  *a3 = result;
  return result;
}
