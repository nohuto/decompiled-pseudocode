/*
 * XREFs of ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14007AFC4
 * Callers:
 *     ?Stop@CCrossProcessControl@@UEAAJXZ @ 0x1400962A0 (-Stop@CCrossProcessControl@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B1B4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall AERTUnlockZoneHeap(void *a1, int a2, int a3)
{
  char v3; // di
  int v4; // ebx

  v3 = (char)a1;
  if ( a1 )
    v4 = RtlUnlockMemoryZone();
  else
    v4 = 0;
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer((_DWORD)a1, a2, a3, 9, v3, 0, 0, 0);
  return v4 | 0x10000000u;
}
