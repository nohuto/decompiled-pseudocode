/*
 * XREFs of sub_18002FD24 @ 0x18002FD24
 * Callers:
 *     sub_1800321D4 @ 0x1800321D4 (sub_1800321D4.c)
 * Callees:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001D32C @ 0x18001D32C (sub_18001D32C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_180030B0C @ 0x180030B0C (sub_180030B0C.c)
 *     sub_180038018 @ 0x180038018 (sub_180038018.c)
 */

__int64 __fastcall sub_18002FD24(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  char v12[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]

  sub_18001CAA0(a1, (__int64)&v14, (_QWORD *)a3);
  v6 = v15;
  if ( sub_18001CB40(v7, v15, (_QWORD *)a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180038018(a1);
    v8 = *a1;
    sub_180030B0C(v12, a1);
    v9 = v13;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_QWORD *)(v9 + 48) = 0LL;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_OWORD *)(v9 + 32) = *(_OWORD *)a3;
    *(_OWORD *)(v9 + 48) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 15LL;
    *(_BYTE *)a3 = 0;
    *(_DWORD *)(v9 + 64) = 0;
    *(_QWORD *)v13 = v8;
    *(_QWORD *)(v13 + 8) = v8;
    *(_QWORD *)(v13 + 16) = v8;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_18001D32C((__int64)v12);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
