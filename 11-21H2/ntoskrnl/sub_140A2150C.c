/*
 * XREFs of sub_140A2150C @ 0x140A2150C
 * Callers:
 *     sub_14064D064 @ 0x14064D064 (sub_14064D064.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 * Callees:
 *     sub_1406CE7A8 @ 0x1406CE7A8 (sub_1406CE7A8.c)
 *     sub_140813FE4 @ 0x140813FE4 (sub_140813FE4.c)
 */

__int64 __fastcall sub_140A2150C(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = sub_140813FE4(SystemSystemPartitionInformation, a1, a2, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return sub_1406CE7A8((__int64)sub_1406BAEA0, a1, a2, a3);
  return result;
}
