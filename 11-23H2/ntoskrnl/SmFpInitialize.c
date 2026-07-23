/*
 * XREFs of SmFpInitialize @ 0x1403A8A88
 * Callers:
 *     SmFirstTimeInit @ 0x1407B7FF4 (SmFirstTimeInit.c)
 *     SmPartitionInitialize @ 0x14084F5DC (SmPartitionInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall SmFpInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 12) = 0;
  result = a1 + 16;
  *(_WORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 10) = 6;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
