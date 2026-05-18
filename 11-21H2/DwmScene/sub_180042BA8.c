/*
 * XREFs of sub_180042BA8 @ 0x180042BA8
 * Callers:
 *     sub_1800400C8 @ 0x1800400C8 (sub_1800400C8.c)
 *     sub_180042C3C @ 0x180042C3C (sub_180042C3C.c)
 * Callees:
 *     sub_18001380C @ 0x18001380C (sub_18001380C.c)
 *     sub_180042AB0 @ 0x180042AB0 (sub_180042AB0.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

unsigned __int64 __fastcall sub_180042BA8(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  sub_1800436D4(a1);
  v8 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a2;
  DWORD2(v11) = v8;
  sub_18001380C(a1, &v11);
  v11 = *a3;
  sub_180042AB0(a1, &v11);
  v9 = *(_DWORD *)(a4 + 8);
  *(_QWORD *)&v11 = *(_QWORD *)a4;
  DWORD2(v11) = v9;
  return sub_180042B30(a1, &v11);
}
