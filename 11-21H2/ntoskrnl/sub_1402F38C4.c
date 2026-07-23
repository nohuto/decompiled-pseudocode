/*
 * XREFs of sub_1402F38C4 @ 0x1402F38C4
 * Callers:
 *     sub_14024AC78 @ 0x14024AC78 (sub_14024AC78.c)
 *     sub_140255E2C @ 0x140255E2C (sub_140255E2C.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_14045A748 @ 0x14045A748 (sub_14045A748.c)
 *     sub_140570F88 @ 0x140570F88 (sub_140570F88.c)
 *     sub_140A69470 @ 0x140A69470 (sub_140A69470.c)
 * Callees:
 *     sub_1402FFB70 @ 0x1402FFB70 (sub_1402FFB70.c)
 */

__int64 __fastcall sub_1402F38C4(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = a5;
  v7[3] = a3;
  v7[0] = a4;
  v7[2] = a6;
  return sub_1402FFB70((unsigned int)KeGetCurrentPrcb(), a1, a2, (unsigned int)v7, 5LL);
}
