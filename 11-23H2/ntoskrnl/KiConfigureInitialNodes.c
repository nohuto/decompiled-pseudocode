/*
 * XREFs of KiConfigureInitialNodes @ 0x1403A8CE8
 * Callers:
 *     KiInitializeKernel @ 0x140A8BF10 (KiInitializeKernel.c)
 * Callees:
 *     KiAssignProcessorNumberToPrcb @ 0x1403767E0 (KiAssignProcessorNumberToPrcb.c)
 *     KiAllocateProcessorNumber @ 0x140377458 (KiAllocateProcessorNumber.c)
 *     KiInitializeSchedulerSubNode @ 0x1403A8E38 (KiInitializeSchedulerSubNode.c)
 */

__int64 __fastcall KiConfigureInitialNodes(__int64 a1)
{
  _QWORD *v2; // rdx
  _WORD *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  dword_140D4AAC4 = -1;
  byte_140D4AACA |= 2u;
  byte_140D0E4C5 |= 5u;
  KeNodeBlock[0] = (__int64)&ExNode0;
  v5 = 0;
  ExNode0 = 0;
  KiInitialNodeStructures = 0;
  qword_140D0E4D0 = 0LL;
  word_140D0E4C6 = 0;
  KiSubNodeCount = 1;
  word_140D4AAC8 = KiMaximumGroupSize;
  xmmword_140D4ABD8 = (__int128)_mm_load_si128((const __m128i *)&_xmm);
  KiSubNodeConfigBlock = (__int64)&KiInitialNodeStructures;
  dword_140D4ABE8 = _mm_cvtsi128_si32((__m128i)xmmword_140D4ABD8);
  KiSubNodes = (__int64)&qword_140D0F100;
  byte_140D0E4C4 = KiMaximumGroupSize;
  KiInitializeSchedulerSubNode(&unk_140D0E500);
  byte_140D0E5B9 = 8;
  qword_140D0E5C0 = (__int64)&unk_140D0E680;
  qword_140D0F100 = (__int64)&unk_140D0E500;
  qword_140D4AAD8 = (__int64)&unk_140D0E500;
  KiAllocateProcessorNumber(0, (__int64)&v5);
  KiAssignProcessorNumberToPrcb(a1, (char *)&v5, 0);
  qword_140D0E5A0 |= 1uLL;
  v2 = &unk_140D496C8;
  qword_140D0E550 |= 1uLL;
  v3 = &unk_140D55E50;
  *(_BYTE *)(a1 + 35) = 1;
  LODWORD(result) = 1;
  qword_140D20580 |= 1uLL;
  do
  {
    *v2++ = v3;
    *v3 = result;
    result = (unsigned int)(result + 1);
    v3 += 152;
  }
  while ( (unsigned int)result < 0x40 );
  return result;
}
