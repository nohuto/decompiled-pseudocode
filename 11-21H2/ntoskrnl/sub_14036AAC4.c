/*
 * XREFs of sub_14036AAC4 @ 0x14036AAC4
 * Callers:
 *     sub_1402D66F0 @ 0x1402D66F0 (sub_1402D66F0.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 *     sub_1403698C4 @ 0x1403698C4 (sub_1403698C4.c)
 *     sub_140369A40 @ 0x140369A40 (sub_140369A40.c)
 *     sub_140369FDC @ 0x140369FDC (sub_140369FDC.c)
 *     sub_14036A2C8 @ 0x14036A2C8 (sub_14036A2C8.c)
 *     sub_14036A5FC @ 0x14036A5FC (sub_14036A5FC.c)
 *     sub_14038AB60 @ 0x14038AB60 (sub_14038AB60.c)
 *     sub_140397BB4 @ 0x140397BB4 (sub_140397BB4.c)
 *     sub_1403A15B0 @ 0x1403A15B0 (sub_1403A15B0.c)
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_1405C6B50 @ 0x1405C6B50 (sub_1405C6B50.c)
 *     sub_1405C6B80 @ 0x1405C6B80 (sub_1405C6B80.c)
 *     sub_1405D03D0 @ 0x1405D03D0 (sub_1405D03D0.c)
 *     sub_1405D0450 @ 0x1405D0450 (sub_1405D0450.c)
 *     sub_1405D06C0 @ 0x1405D06C0 (sub_1405D06C0.c)
 *     sub_1405D6A80 @ 0x1405D6A80 (sub_1405D6A80.c)
 *     sub_1405D6DA0 @ 0x1405D6DA0 (sub_1405D6DA0.c)
 *     sub_1405D8820 @ 0x1405D8820 (sub_1405D8820.c)
 *     sub_1405D8850 @ 0x1405D8850 (sub_1405D8850.c)
 *     sub_1405D8980 @ 0x1405D8980 (sub_1405D8980.c)
 *     sub_1405D8DC8 @ 0x1405D8DC8 (sub_1405D8DC8.c)
 *     PoUserShutdownCancelled @ 0x1406EADA0 (PoUserShutdownCancelled.c)
 *     sub_1406EB8A4 @ 0x1406EB8A4 (sub_1406EB8A4.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_140864194 @ 0x140864194 (sub_140864194.c)
 *     sub_14098BC1C @ 0x14098BC1C (sub_14098BC1C.c)
 *     sub_14098C9B0 @ 0x14098C9B0 (sub_14098C9B0.c)
 *     sub_140996B90 @ 0x140996B90 (sub_140996B90.c)
 *     sub_14099858C @ 0x14099858C (sub_14099858C.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

char __fastcall sub_14036AAC4(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
