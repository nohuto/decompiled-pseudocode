/*
 * XREFs of WheaInitializeRecordHeader @ 0x1406124F0
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x140502868 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCreateMcaProcessorErrorRecord @ 0x140502B50 (HalpCreateMcaProcessorErrorRecord.c)
 *     HalpCreateNMIErrorRecord @ 0x140506474 (HalpCreateNMIErrorRecord.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x140612858 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     WheapGetTimestamp @ 0x140612354 (WheapGetTimestamp.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  memset(a1, 0, 0x80uLL);
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[4] |= 2u;
  *((GUID *)a1 + 4) = WHEA_RECORD_CREATOR_GUID;
  *a1 = 1380274243;
  *((_WORD *)a1 + 2) = 528;
  a1[3] = 3;
  WheapGetTimestamp((_BYTE *)a1 + 24, v2, v3);
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&WheapErrorRecordId);
  return 0LL;
}
