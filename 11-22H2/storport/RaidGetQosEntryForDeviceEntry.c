/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C00207F4
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     StorSubmitIoGatewayItem @ 0x1C0004920 (StorSubmitIoGatewayItem.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     RiEnqueueDeviceQueue @ 0x1C0007158 (RiEnqueueDeviceQueue.c)
 *     StorNextIoGatewayItem @ 0x1C0019328 (StorNextIoGatewayItem.c)
 *     RaidRemoveIoQueue @ 0x1C0021C14 (RaidRemoveIoQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
