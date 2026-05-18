/*
 * XREFs of sub_180062F40 @ 0x180062F40
 * Callers:
 *     sub_1800642E4 @ 0x1800642E4 (sub_1800642E4.c)
 * Callees:
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_180028034 @ 0x180028034 (sub_180028034.c)
 *     sub_18002F04C @ 0x18002F04C (sub_18002F04C.c)
 *     sub_180063CEC @ 0x180063CEC (sub_180063CEC.c)
 *     sub_18006E4C4 @ 0x18006E4C4 (sub_18006E4C4.c)
 */

__int64 __fastcall sub_180062F40(__int64 *a1, __int64 a2, int *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  char v10[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  sub_18002F04C(a1, (__int64)&v12, a3);
  if ( *(_BYTE *)(v13 + 25) || *a3 < *(_DWORD *)(v13 + 32) )
  {
    sub_18006E4C4(a1);
    v6 = *a1;
    sub_180063CEC(v10, a1);
    v7 = v11;
    *(_DWORD *)(v11 + 32) = *a3;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)(v7 + 40) = 0LL;
    *(_QWORD *)(v7 + 48) = 0LL;
    *(_QWORD *)v11 = v6;
    *(_QWORD *)(v11 + 8) = v6;
    *(_QWORD *)(v11 + 16) = v6;
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 25) = 0;
    v8 = v11;
    v11 = 0LL;
    sub_180028034((__int64)v10);
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
