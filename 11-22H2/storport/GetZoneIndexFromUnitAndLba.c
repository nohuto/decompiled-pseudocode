/*
 * XREFs of GetZoneIndexFromUnitAndLba @ 0x1C0022320
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     IsZonedWriteRequest @ 0x1C000F7D0 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C00409D8 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0040C6C (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     GetZoneCountFromUnit @ 0x1C0022258 (GetZoneCountFromUnit.c)
 *     McTemplateK0sssxiqxqq_EtwWriteTransfer @ 0x1C0022554 (McTemplateK0sssxiqxqq_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall GetZoneIndexFromUnitAndLba(__int64 a1, ULONG_PTR a2)
{
  char ZoneCountFromUnit; // al
  int v5; // r8d
  char v6; // al

  if ( a2 > *(_QWORD *)(a1 + 3376) )
  {
    ZoneCountFromUnit = GetZoneCountFromUnit(a1);
    ++*(_DWORD *)(a1 + 3388);
    v6 = ZoneCountFromUnit - 1;
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0092A04 & 4) != 0 )
        McTemplateK0sssxiqxqq_EtwWriteTransfer(
          a1 + 186,
          a1 + 169,
          v5,
          a1 + 160,
          a1 + 169,
          a1 + 186,
          a2,
          *(_QWORD *)(a1 + 3376),
          *(_DWORD *)(a1 + 868),
          *(_QWORD *)(a1 + 3328),
          *(_DWORD *)(a1 + 3384),
          v6);
    }
    KeBugCheckEx(0x2Cu, 0x141CuLL, a2, *(_QWORD *)(a1 + 3376), 0LL);
  }
  return a2 * *(unsigned int *)(a1 + 868) / *(_QWORD *)(a1 + 3328);
}
