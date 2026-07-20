/*
 * XREFs of SmpNtSerializeBoot @ 0x14000B0FC
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140004430 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000B010 (SmpAsyncMemoryConfiguration.c)
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140005C30 (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x14000C78C (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
