/*
 * XREFs of sub_18003F644 @ 0x18003F644
 * Callers:
 *     sub_1800422EC @ 0x1800422EC (sub_1800422EC.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001DBFC @ 0x18001DBFC (sub_18001DBFC.c)
 *     sub_18003F4EC @ 0x18003F4EC (sub_18003F4EC.c)
 *     sub_18003F614 @ 0x18003F614 (sub_18003F614.c)
 *     sub_18003FAFC @ 0x18003FAFC (sub_18003FAFC.c)
 *     sub_18003FF64 @ 0x18003FF64 (sub_18003FF64.c)
 *     sub_180042868 @ 0x180042868 (sub_180042868.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F644(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbx
  char v10[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]

  sub_18003F4EC(a1, (__int64)&v12, &qword_1801D3FE8);
  v4 = v13;
  if ( sub_18003F614(v5, v13, &qword_1801D3FE8) )
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    sub_180042868(a1);
    v6 = *a1;
    sub_18003FAFC(v10, a1);
    v7 = v11;
    sub_180012440((_QWORD *)(v11 + 32), (__int64)&qword_1801D3FE8);
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_QWORD *)(v7 + 72) = 0LL;
    *(_QWORD *)v11 = v6;
    *(_QWORD *)(v11 + 8) = v6;
    *(_QWORD *)(v11 + 16) = v6;
    *(_BYTE *)(v11 + 24) = 0;
    *(_BYTE *)(v11 + 25) = 0;
    v8 = v11;
    v11 = 0LL;
    sub_18003FF64(v10);
    *(_QWORD *)a2 = sub_18001DBFC((__int64)a1, (__int64)&v12, v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
