/*
 * XREFs of sub_140813F88 @ 0x140813F88
 * Callers:
 *     sub_140813EFC @ 0x140813EFC (sub_140813EFC.c)
 * Callees:
 *     sub_1406CE7A8 @ 0x1406CE7A8 (sub_1406CE7A8.c)
 *     sub_140813FE4 @ 0x140813FE4 (sub_140813FE4.c)
 */

__int64 __fastcall sub_140813F88(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = sub_140813FE4(SystemFirmwarePartitionInformation, a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return sub_1406CE7A8((__int64)sub_1406BAEF0, a1, a2, a3);
  return result;
}
