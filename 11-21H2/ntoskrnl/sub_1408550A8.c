/*
 * XREFs of sub_1408550A8 @ 0x1408550A8
 * Callers:
 *     sub_1403D6F40 @ 0x1403D6F40 (sub_1403D6F40.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 (__fastcall *__fastcall sub_1408550A8(__int64 a1))(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *result)(__int64, __int64, int); // rax

  memset((void *)a1, 0, 0x1B8uLL);
  *(_DWORD *)(a1 + 432) = -1;
  result = sub_140236EC0;
  *(_QWORD *)(a1 + 256) = sub_140236EC0;
  return result;
}
