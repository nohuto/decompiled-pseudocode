/*
 * XREFs of sub_180055DE8 @ 0x180055DE8
 * Callers:
 *     sub_1800185E0 @ 0x1800185E0 (sub_1800185E0.c)
 *     sub_1800D5D0C @ 0x1800D5D0C (sub_1800D5D0C.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_180055AE8 @ 0x180055AE8 (sub_180055AE8.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 *     sub_1800566D0 @ 0x1800566D0 (sub_1800566D0.c)
 *     sub_180056744 @ 0x180056744 (sub_180056744.c)
 *     sub_180056848 @ 0x180056848 (sub_180056848.c)
 *     sub_1800568F8 @ 0x1800568F8 (sub_1800568F8.c)
 *     sub_180056918 @ 0x180056918 (sub_180056918.c)
 */

__int64 __fastcall sub_180055DE8(__int64 a1, _QWORD *a2)
{
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  char v15; // dl
  int v16; // r8d
  int v17; // r9d
  char v18; // r10
  char v19; // r11
  _QWORD *v20; // rax
  _QWORD v22[3]; // [rsp+50h] [rbp-18h] BYREF

  sub_180029870(a1, 1, 0);
  sub_180029870(v5, v4 + 2, v4);
  sub_180029870(v7, v6 + 4, v6);
  sub_1800568F8(*a2);
  v8 = sub_180056744(*a2);
  v9 = sub_1800566D0(*a2, v8);
  v12 = sub_180056848(*a2, v10, v11, v9);
  v14 = sub_180056918(*a2, v13, v12);
  sub_180055EA0(a1, v14, v16, v17, v15, v18, v19, 0LL, 0, 0LL);
  v20 = sub_18001246C(v22, a2);
  return sub_180055AE8(a1, v20);
}
