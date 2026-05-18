/*
 * XREFs of sub_18008CA6C @ 0x18008CA6C
 * Callers:
 *     sub_18008D2E8 @ 0x18008D2E8 (sub_18008D2E8.c)
 * Callees:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_180084330 @ 0x180084330 (sub_180084330.c)
 *     sub_180085B08 @ 0x180085B08 (sub_180085B08.c)
 *     sub_180085BB8 @ 0x180085BB8 (sub_180085BB8.c)
 *     sub_180085DE8 @ 0x180085DE8 (sub_180085DE8.c)
 */

__int64 __fastcall sub_18008CA6C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10

  v3 = *a1;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 2);
  if ( v7 == 0x1555555555555555LL )
    sub_180011B80();
  v8 = v7 + 1;
  v9 = sub_180085B08(a1, v7 + 1);
  v11 = sub_180085DE8(v10, v9);
  v12 = v11 + 12 * ((a2 - v3) / 12);
  *(_QWORD *)v12 = *(_QWORD *)a3;
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(a3 + 8);
  v13 = a1[1];
  v14 = *a1;
  if ( a2 != v13 )
  {
    sub_180084330(v14, a2, v11);
    v13 = a1[1];
    v11 = v12 + 12;
    v14 = a2;
  }
  sub_180084330(v14, v13, v11);
  sub_180085BB8((__int64)a1, v15, v8, v9);
  return v12;
}
