/*
 * XREFs of sub_14078C4EC @ 0x14078C4EC
 * Callers:
 *     sub_140255030 @ 0x140255030 (sub_140255030.c)
 *     sub_1402DE270 @ 0x1402DE270 (sub_1402DE270.c)
 *     sub_1403A6C78 @ 0x1403A6C78 (sub_1403A6C78.c)
 *     sub_140768194 @ 0x140768194 (sub_140768194.c)
 *     sub_1407699F8 @ 0x1407699F8 (sub_1407699F8.c)
 *     sub_14076C288 @ 0x14076C288 (sub_14076C288.c)
 *     sub_14078AB30 @ 0x14078AB30 (sub_14078AB30.c)
 *     sub_1409404FC @ 0x1409404FC (sub_1409404FC.c)
 *     sub_140950968 @ 0x140950968 (sub_140950968.c)
 *     sub_1409509D8 @ 0x1409509D8 (sub_1409509D8.c)
 *     sub_140950AE4 @ 0x140950AE4 (sub_140950AE4.c)
 *     sub_140950B80 @ 0x140950B80 (sub_140950B80.c)
 *     sub_140950C38 @ 0x140950C38 (sub_140950C38.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14078C4EC(unsigned int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, a1, 1265659472LL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
