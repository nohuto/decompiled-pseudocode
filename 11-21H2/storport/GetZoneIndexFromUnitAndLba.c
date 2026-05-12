/*
 * XREFs of GetZoneIndexFromUnitAndLba @ 0x1C0022E6C
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     RiNormalizeDeviceQueue @ 0x1C000936C (RiNormalizeDeviceQueue.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     IsZonedWriteRequest @ 0x1C00159A0 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C003E304 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C003E538 (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     GetZoneCountFromUnit @ 0x1C0022DA4 (GetZoneCountFromUnit.c)
 *     McTemplateK0sssxiqxqq_EtwWriteTransfer @ 0x1C0023094 (McTemplateK0sssxiqxqq_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall GetZoneIndexFromUnitAndLba(__int64 a1, ULONG_PTR a2)
{
  char ZoneCountFromUnit; // al
  int v5; // r8d
  char v6; // al

  if ( a2 > *(_QWORD *)(a1 + 3328) )
  {
    ZoneCountFromUnit = GetZoneCountFromUnit(a1);
    ++*(_DWORD *)(a1 + 3340);
    v6 = ZoneCountFromUnit - 1;
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C00799E4 & 2) != 0 )
        McTemplateK0sssxiqxqq_EtwWriteTransfer(
          a1 + 186,
          a1 + 169,
          v5,
          a1 + 160,
          a1 + 169,
          a1 + 186,
          a2,
          *(_QWORD *)(a1 + 3328),
          *(_DWORD *)(a1 + 812),
          *(_QWORD *)(a1 + 3280),
          *(_DWORD *)(a1 + 3336),
          v6);
    }
    KeBugCheckEx(0x2Cu, 0x141CuLL, a2, *(_QWORD *)(a1 + 3328), 0LL);
  }
  return a2 * *(unsigned int *)(a1 + 812) / *(_QWORD *)(a1 + 3280);
}
