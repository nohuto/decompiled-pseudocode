/*
 * XREFs of sub_180024E9C @ 0x180024E9C
 * Callers:
 *     sub_180026720 @ 0x180026720 (sub_180026720.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_180024E10 @ 0x180024E10 (sub_180024E10.c)
 *     sub_180025470 @ 0x180025470 (sub_180025470.c)
 *     sub_180025A78 @ 0x180025A78 (sub_180025A78.c)
 *     sub_1800275E4 @ 0x1800275E4 (sub_1800275E4.c)
 */

__int64 __fastcall sub_180024E9C(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  _BYTE v10[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  sub_180024E10(a1, (__int64)&v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *a3 < *(_DWORD *)(v13 + 32) )
  {
    sub_1800275E4(a1);
    v6 = *a1;
    sub_180025470(v10, a1);
    v7 = (_QWORD *)v11;
    *(_DWORD *)(v11 + 32) = *a3;
    v7[6] = 0LL;
    v7[7] = 0LL;
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    *(_QWORD *)v11 = v6;
    *(_QWORD *)(v11 + 8) = v6;
    *(_QWORD *)(v11 + 16) = v6;
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 25) = 0;
    v8 = v11;
    v11 = 0LL;
    sub_180025A78(v10);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v12, v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
