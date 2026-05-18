/*
 * XREFs of sub_180095740 @ 0x180095740
 * Callers:
 *     sub_18008918C @ 0x18008918C (sub_18008918C.c)
 *     sub_180089950 @ 0x180089950 (sub_180089950.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008BE10 @ 0x18008BE10 (sub_18008BE10.c)
 *     sub_18008C410 @ 0x18008C410 (sub_18008C410.c)
 *     sub_18008D920 @ 0x18008D920 (sub_18008D920.c)
 *     sub_1800A956C @ 0x1800A956C (sub_1800A956C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_180095740(__int64 a1, int a2, int a3, int a4, char a5)
{
  char v6; // cl
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v6 = a5 & 0xE | 1;
  if ( *(_BYTE *)(a1 + 124) != v6
    || *(_DWORD *)(a1 + 112) != a2
    || *(_DWORD *)(a1 + 116) != a3
    || *(_DWORD *)(a1 + 120) != a4
    || (result = a5 & 1, *(_BYTE *)(a1 + 125) != (_BYTE)result) )
  {
    *(_DWORD *)(a1 + 112) = a2;
    *(_DWORD *)(a1 + 116) = a3;
    *(_DWORD *)(a1 + 120) = a4;
    v8 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
    v16 = v8;
    v9 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_BYTE *)(a1 + 124) = v6;
    v17 = v9;
    *(_BYTE *)(a1 + 125) = a5 & 1;
    v18 = 0LL;
    sub_180010910((__int64)&v16);
    sub_180010910((__int64)&v18);
    v10 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = 0LL;
    v16 = v10;
    v11 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
    v17 = v11;
    v18 = 0LL;
    sub_180010910((__int64)&v16);
    sub_180010910((__int64)&v18);
    v12 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = 0LL;
    v16 = v12;
    v13 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = 0LL;
    v17 = v13;
    v18 = 0LL;
    sub_180010910((__int64)&v16);
    sub_180010910((__int64)&v18);
    v14 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = 0LL;
    v16 = v14;
    v15 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a1 + 104) = 0LL;
    v17 = v15;
    v18 = 0LL;
    sub_180010910((__int64)&v16);
    return sub_180010910((__int64)&v18);
  }
  return result;
}
