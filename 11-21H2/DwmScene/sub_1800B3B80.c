/*
 * XREFs of sub_1800B3B80 @ 0x1800B3B80
 * Callers:
 *     sub_1800B2890 @ 0x1800B2890 (sub_1800B2890.c)
 *     sub_1800B3618 @ 0x1800B3618 (sub_1800B3618.c)
 *     sub_1800B37A4 @ 0x1800B37A4 (sub_1800B37A4.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_1800B3A30 @ 0x1800B3A30 (sub_1800B3A30.c)
 */

__int64 __fastcall sub_1800B3B80(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // di
  unsigned __int64 v12; // rsi
  __int64 result; // rax

  v4 = a1[4];
  v5 = v4;
  v6 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v6) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    sub_1800B3A30(a1);
    v6 = a1[3];
    v5 = a1[4];
  }
  v7 = a1[2];
  v8 = v6 & (2 * v7 - 1);
  v9 = v7 - 1;
  a1[3] = v8;
  v10 = a1[1];
  v11 = v8 + v5;
  v12 = ((unsigned __int64)(v8 + v5) >> 1) & v9;
  if ( !*(_QWORD *)(v10 + 8 * v12) )
  {
    *(_QWORD *)(a1[1] + 8 * v12) = sub_180011088(0x10uLL);
    v10 = a1[1];
  }
  result = *a2;
  *(_QWORD *)(*(_QWORD *)(v10 + 8 * v12) + 8LL * (v11 & 1)) = *a2;
  ++a1[4];
  return result;
}
