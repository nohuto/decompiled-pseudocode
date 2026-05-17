/*
 * XREFs of RtlpHpSegReportSegment @ 0x180064008
 * Callers:
 *     RtlpHpSegWalk @ 0x180063CE0 (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x1800640D4 (RtlpHpSegPageRangeCountCommittedPages.c)
 */

__int64 __fastcall RtlpHpSegReportSegment(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v7; // eax
  int v8; // r10d
  __int64 v9; // r11
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 result; // rax

  v5 = -*(_DWORD *)a1;
  v6 = a3 + 32LL * *(unsigned __int8 *)(a1 + 10);
  v7 = RtlpHpSegPageRangeCountCommittedPages(a1, v6, 256 - (unsigned int)*(unsigned __int8 *)(a1 + 10));
  *(_QWORD *)(a2 + 8) = v5;
  *(_WORD *)(a2 + 18) = 2;
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 17) = 0;
  v10 = (v8 + v7) << 12;
  *(_DWORD *)(a2 + 24) = v10;
  *(_DWORD *)(a2 + 28) = v5 - v10;
  v11 = v6 & *(_QWORD *)a1;
  v12 = v6 - v11;
  v6 += 8160LL;
  *(_QWORD *)(a2 + 32) = v11 + (v12 >> 5 << *(_BYTE *)(a1 + 8));
  result = v6 & *(_QWORD *)a1;
  *(_QWORD *)(a2 + 40) = result + ((v6 - result) >> 5 << *(_BYTE *)(a1 + 8));
  return result;
}
