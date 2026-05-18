/*
 * XREFs of sub_18002E3D0 @ 0x18002E3D0
 * Callers:
 *     sub_180030DE4 @ 0x180030DE4 (sub_180030DE4.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001D32C @ 0x18001D32C (sub_18001D32C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_180030B0C @ 0x180030B0C (sub_180030B0C.c)
 *     sub_180038018 @ 0x180038018 (sub_180038018.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002E3D0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int128 v6; // xmm6
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  char v11[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-20h]

  v5 = sub_18002EBE0(a1, v11, a2, a3);
  v6 = *(_OWORD *)v5;
  v13 = *(_OWORD *)v5;
  v14 = *(_QWORD *)(v5 + 16);
  if ( (_BYTE)v14 )
    return v13;
  sub_180038018(a1);
  v8 = *a1;
  sub_180030B0C(v11, a1);
  v9 = v12;
  sub_180017648((_QWORD *)(v12 + 32), a3);
  *(_DWORD *)(v9 + 64) = *(_DWORD *)(a3 + 32);
  *(_QWORD *)v12 = v8;
  *(_QWORD *)(v12 + 8) = v8;
  *(_QWORD *)(v12 + 16) = v8;
  *(_BYTE *)(v12 + 24) = 0;
  *(_BYTE *)(v12 + 25) = 0;
  v10 = v12;
  v12 = 0LL;
  sub_18001D32C((__int64)v11);
  v13 = v6;
  return sub_18001DBFC((__int64)a1, (__int64)&v13, v10);
}
