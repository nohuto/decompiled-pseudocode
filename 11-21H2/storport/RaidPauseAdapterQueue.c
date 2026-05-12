/*
 * XREFs of RaidPauseAdapterQueue @ 0x1C0014BF8
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0014A90 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDeviceReset @ 0x1C003463C (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortCompleteRequest @ 0x1C0042D30 (StorPortCompleteRequest.c)
 *     StorPortPause @ 0x1C00437C0 (StorPortPause.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C008CBD0 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseAdapterQueue(__int64 a1)
{
  unsigned __int32 v1; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 860));
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest(a1, 6, (_DWORD)retaddr, v1, a1, *(unsigned int *)(a1 + 56), 0LL);
  return v1;
}
