/*
 * XREFs of sub_18002BBC0 @ 0x18002BBC0
 * Callers:
 *     sub_180097128 @ 0x180097128 (sub_180097128.c)
 *     sub_1800E3D8C @ 0x1800E3D8C (sub_1800E3D8C.c)
 *     sub_1800E4630 @ 0x1800E4630 (sub_1800E4630.c)
 *     sub_1800EB150 @ 0x1800EB150 (sub_1800EB150.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800ED330 @ 0x1800ED330 (sub_1800ED330.c)
 *     sub_1800EF960 @ 0x1800EF960 (sub_1800EF960.c)
 *     sub_1800EFC50 @ 0x1800EFC50 (sub_1800EFC50.c)
 *     sub_1800EFF90 @ 0x1800EFF90 (sub_1800EFF90.c)
 *     sub_1800F02D0 @ 0x1800F02D0 (sub_1800F02D0.c)
 *     sub_1800F0F20 @ 0x1800F0F20 (sub_1800F0F20.c)
 * Callees:
 *     sub_18007BD68 @ 0x18007BD68 (sub_18007BD68.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 */

__int64 __fastcall sub_18002BBC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r11d
  __int64 v6; // r8
  __int64 v7; // r10
  unsigned int v8; // r11d
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // r8
  __int64 v13; // r10

  v4 = sub_18007BD8C();
  sub_18007BD68(v4, v5, 2LL);
  sub_18007BD68(v7, *(unsigned int *)(a1 + 56), v6);
  *(_DWORD *)(a1 + 56) = v8;
  *(_QWORD *)(a1 + 64) = a2;
  sub_18007BD68(v10, v8, v9);
  return sub_18007BD68(v13, v11, v12);
}
