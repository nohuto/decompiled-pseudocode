/*
 * XREFs of sub_18004D6B4 @ 0x18004D6B4
 * Callers:
 *     sub_18004FD30 @ 0x18004FD30 (sub_18004FD30.c)
 * Callees:
 *     sub_18001CAA0 @ 0x18001CAA0 (sub_18001CAA0.c)
 *     sub_18001CB40 @ 0x18001CB40 (sub_18001CB40.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_180025470 @ 0x180025470 (sub_180025470.c)
 *     sub_1800275E4 @ 0x1800275E4 (sub_1800275E4.c)
 *     sub_18004EA98 @ 0x18004EA98 (sub_18004EA98.c)
 */

__int64 __fastcall sub_18004D6B4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]

  v6 = sub_18001CAA0(a1, (__int64)&v15, (_QWORD *)a3);
  v7 = *(_OWORD *)v6;
  v18 = *(_QWORD *)(v6 + 16);
  v8 = v18;
  if ( sub_18001CB40(v9, v18, (_QWORD *)a3) )
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_1800275E4((__int64)a1);
    v10 = *a1;
    sub_180025470(&v15, (__int64)a1);
    v11 = v16;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_OWORD *)(v11 + 32) = *(_OWORD *)a3;
    *(_OWORD *)(v11 + 48) = *(_OWORD *)(a3 + 16);
    v12 = (__int64 *)v16;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 15LL;
    *(_BYTE *)a3 = 0;
    *v12 = v10;
    *(_QWORD *)(v16 + 8) = v10;
    *(_QWORD *)(v16 + 16) = v10;
    *(_BYTE *)(v16 + 24) = 0;
    *(_BYTE *)(v16 + 25) = 0;
    v13 = v16;
    v16 = 0LL;
    sub_18004EA98(&v15);
    v17 = v7;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v17, v13);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
