/*
 * XREFs of sub_180013AD0 @ 0x180013AD0
 * Callers:
 *     sub_1800128FC @ 0x1800128FC (sub_1800128FC.c)
 * Callees:
 *     memset @ 0x180016A5E (memset.c)
 *     sub_18001F1F8 @ 0x18001F1F8 (sub_18001F1F8.c)
 */

__int64 __fastcall sub_180013AD0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  memset((void *)(a4 + 40), 0, 0x58uLL);
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = -1LL;
  *(_QWORD *)(a4 + 24) = 1LL;
  *(_QWORD *)(a4 + 32) = a3;
  result = sub_18001F1F8(a4 + 64);
  *(_DWORD *)(a4 + 104) &= 0xFFFFFFF8;
  *(_QWORD *)(a4 + 56) = a2;
  *(_DWORD *)(a4 + 80) = a1;
  return result;
}
