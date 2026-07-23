/*
 * XREFs of sub_1402EDFB0 @ 0x1402EDFB0
 * Callers:
 *     sub_14070592C @ 0x14070592C (sub_14070592C.c)
 *     sub_14079EA28 @ 0x14079EA28 (sub_14079EA28.c)
 *     sub_14079EC58 @ 0x14079EC58 (sub_14079EC58.c)
 *     sub_1407F74C4 @ 0x1407F74C4 (sub_1407F74C4.c)
 *     sub_1408833DA @ 0x1408833DA (sub_1408833DA.c)
 *     sub_1409E637C @ 0x1409E637C (sub_1409E637C.c)
 *     sub_1409E6524 @ 0x1409E6524 (sub_1409E6524.c)
 *     sub_1409E668C @ 0x1409E668C (sub_1409E668C.c)
 *     sub_1409E7418 @ 0x1409E7418 (sub_1409E7418.c)
 *     sub_1409E7718 @ 0x1409E7718 (sub_1409E7718.c)
 *     sub_1409E8BEC @ 0x1409E8BEC (sub_1409E8BEC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402EDFB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)a1 = a2 + 1232;
  *(_QWORD *)(a1 + 16) = a2 + 1152;
  result = 2LL;
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 24) = 8;
  return result;
}
