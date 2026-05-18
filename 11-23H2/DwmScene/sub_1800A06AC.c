/*
 * XREFs of sub_1800A06AC @ 0x1800A06AC
 * Callers:
 *     sub_1800A09BC @ 0x1800A09BC (sub_1800A09BC.c)
 * Callees:
 *     sub_180010AF8 @ 0x180010AF8 (sub_180010AF8.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_180029304 @ 0x180029304 (sub_180029304.c)
 *     sub_1800A09FC @ 0x1800A09FC (sub_1800A09FC.c)
 *     sub_1800A18FC @ 0x1800A18FC (sub_1800A18FC.c)
 */

__int64 __fastcall sub_1800A06AC(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // rax
  __int128 v7; // xmm6
  __int64 v8; // rbx
  __int64 v9; // rbx
  _BYTE v11[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]

  v6 = sub_180010AF8(a1, (__int64)v11, a3);
  v7 = *(_OWORD *)v6;
  v14 = *(_QWORD *)(v6 + 16);
  if ( *(_BYTE *)(v14 + 25) || *a3 < *(_QWORD *)(v14 + 32) )
  {
    sub_1800A18FC(a1);
    v8 = *a1;
    sub_1800A09FC(v11, a1);
    *(_QWORD *)(v12 + 32) = *a3;
    *(_QWORD *)v12 = v8;
    *(_QWORD *)(v12 + 8) = v8;
    *(_QWORD *)(v12 + 16) = v8;
    *(_BYTE *)(v12 + 24) = 0;
    *(_BYTE *)(v12 + 25) = 0;
    v9 = v12;
    v12 = 0LL;
    sub_180029304((__int64)v11);
    v13 = v7;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v13, v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
