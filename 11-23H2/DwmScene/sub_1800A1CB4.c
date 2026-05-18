/*
 * XREFs of sub_1800A1CB4 @ 0x1800A1CB4
 * Callers:
 *     sub_1800A26C0 @ 0x1800A26C0 (sub_1800A26C0.c)
 *     sub_1800A29C8 @ 0x1800A29C8 (sub_1800A29C8.c)
 *     sub_1800A2CD0 @ 0x1800A2CD0 (sub_1800A2CD0.c)
 *     sub_1800A2DA0 @ 0x1800A2DA0 (sub_1800A2DA0.c)
 *     sub_1800A2EC0 @ 0x1800A2EC0 (sub_1800A2EC0.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 *     sub_1800A38B4 @ 0x1800A38B4 (sub_1800A38B4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_1800A218C @ 0x1800A218C (sub_1800A218C.c)
 */

__int64 __fastcall sub_1800A1CB4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h]

  sub_1800A218C();
  v4 = *a2;
  v5 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)a1 = v4;
  v6 = *(volatile signed __int32 **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5;
  if ( v6 )
    sub_180010574(v6);
  v7 = a2[2];
  v8 = a2[3];
  a2[2] = 0LL;
  a2[3] = 0LL;
  *(_QWORD *)(a1 + 16) = v7;
  v9 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v8;
  if ( v9 )
    sub_180010530(v9);
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 36) = *((_DWORD *)a2 + 9);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 5);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 7);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 9);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 11);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 13);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 15);
  *(_QWORD *)(a1 + 136) = a2[17];
  sub_180011020((_QWORD *)(a1 + 144), a2 + 18);
  sub_180011020((_QWORD *)(a1 + 160), a2 + 20);
  *((_DWORD *)a2 + 9) = 4;
  result = a1;
  *(_QWORD *)&v11 = 0LL;
  BYTE8(v11) = 1;
  *(_OWORD *)(a2 + 5) = v11;
  a2[7] = 0LL;
  a2[8] = 0LL;
  a2[9] = 0LL;
  a2[10] = 0LL;
  a2[11] = 0LL;
  a2[12] = 0LL;
  a2[13] = 0LL;
  a2[14] = 0LL;
  a2[15] = 0LL;
  a2[16] = 0LL;
  a2[17] = 0LL;
  return result;
}
