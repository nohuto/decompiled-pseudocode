/*
 * XREFs of sub_18007BE40 @ 0x18007BE40
 * Callers:
 *     sub_18007C3DC @ 0x18007C3DC (sub_18007C3DC.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_180030B40 @ 0x180030B40 (sub_180030B40.c)
 *     sub_180038040 @ 0x180038040 (sub_180038040.c)
 *     sub_18007C07C @ 0x18007C07C (sub_18007C07C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007BE40(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]

  sub_18001CAA0(a1, (__int64)&v14, a3);
  v6 = v15;
  if ( sub_18001CB40(v7, v15, a3) )
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180038040((__int64)a1);
    v8 = *a1;
    sub_180030B40(&v12, (__int64)a1);
    v9 = v13;
    sub_180017648((_QWORD *)(v13 + 32), (__int64)a3);
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)v13 = v8;
    *(_QWORD *)(v13 + 8) = v8;
    *(_QWORD *)(v13 + 16) = v8;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_18007C07C(&v12);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
