/*
 * XREFs of sub_1402EDEB4 @ 0x1402EDEB4
 * Callers:
 *     sub_14024BD24 @ 0x14024BD24 (sub_14024BD24.c)
 *     sub_14070592C @ 0x14070592C (sub_14070592C.c)
 *     sub_14079EA28 @ 0x14079EA28 (sub_14079EA28.c)
 *     sub_14079EC58 @ 0x14079EC58 (sub_14079EC58.c)
 *     sub_1407F74C4 @ 0x1407F74C4 (sub_1407F74C4.c)
 *     sub_1408833DA @ 0x1408833DA (sub_1408833DA.c)
 *     sub_1409E637C @ 0x1409E637C (sub_1409E637C.c)
 *     sub_1409E6524 @ 0x1409E6524 (sub_1409E6524.c)
 *     sub_1409E668C @ 0x1409E668C (sub_1409E668C.c)
 *     sub_1409E67F0 @ 0x1409E67F0 (sub_1409E67F0.c)
 *     sub_1409E6BB0 @ 0x1409E6BB0 (sub_1409E6BB0.c)
 *     sub_1409E7418 @ 0x1409E7418 (sub_1409E7418.c)
 *     sub_1409E7718 @ 0x1409E7718 (sub_1409E7718.c)
 *     sub_1409E7AD4 @ 0x1409E7AD4 (sub_1409E7AD4.c)
 *     sub_1409E8614 @ 0x1409E8614 (sub_1409E8614.c)
 *     sub_1409E8BEC @ 0x1409E8BEC (sub_1409E8BEC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402EDEB4(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax

  a1[1] = 4LL;
  *a1 = a2 + 1088;
  a1[2] = a2 + 1128;
  a1[3] = 8LL;
  *a3 = *(_QWORD *)(a2 + 2296) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  a1[6] = a2 + 2168;
  a1[8] = a2 + 2169;
  a1[10] = a2 + 2170;
  result = 6LL;
  a1[4] = a3;
  a1[5] = 8LL;
  a1[7] = 1LL;
  a1[9] = 1LL;
  a1[11] = 1LL;
  return result;
}
