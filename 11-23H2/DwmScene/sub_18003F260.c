/*
 * XREFs of sub_18003F260 @ 0x18003F260
 * Callers:
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18003F4EC @ 0x18003F4EC (sub_18003F4EC.c)
 *     sub_18003F614 @ 0x18003F614 (sub_18003F614.c)
 *     sub_18003FAFC @ 0x18003FAFC (sub_18003FAFC.c)
 *     sub_18003FF64 @ 0x18003FF64 (sub_18003FF64.c)
 *     sub_180042868 @ 0x180042868 (sub_180042868.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F260(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm6
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rbx
  char v16[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]

  v8 = sub_18003F4EC(a1, v16);
  v9 = *(_OWORD *)v8;
  v19 = *(_QWORD *)(v8 + 16);
  v10 = v19;
  if ( (unsigned __int8)sub_18003F614(v11, v19, a3) )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180042868(a1);
    v12 = *a1;
    sub_18003FAFC(v16, a1);
    v13 = v17;
    sub_180012440((_QWORD *)(v17 + 32), a3);
    sub_18001246C((_QWORD *)(v13 + 64), a4);
    *(_QWORD *)v17 = v12;
    *(_QWORD *)(v17 + 8) = v12;
    *(_QWORD *)(v17 + 16) = v12;
    *(_BYTE *)(v17 + 24) = 0;
    *(_BYTE *)(v17 + 25) = 0;
    v14 = v17;
    v17 = 0LL;
    sub_18003FF64(v16);
    v18 = v9;
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v18, v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
