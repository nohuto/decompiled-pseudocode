/*
 * XREFs of RaidResumeAndRestartAdapterQueues @ 0x1C003B74C
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterDeviceReset @ 0x1C003463C (RaidAdapterDeviceReset.c)
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00546E0 (RaidUnitCompleteResetRequest.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     RaidAdapterRestartQueues @ 0x1C001DEE0 (RaidAdapterRestartQueues.c)
 *     StorResumeIoGateway @ 0x1C0059444 (StorResumeIoGateway.c)
 */

__int64 __fastcall RaidResumeAndRestartAdapterQueues(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = StorResumeIoGateway(a1, 0LL);
  v3 = v2;
  if ( (qword_1C00793A8 & 0x200) != 0 )
    DbgLogRequest(a1, 7, retaddr, v2, a1, *(unsigned int *)(a1 + 56), 0LL);
  if ( !v3 )
    RaidAdapterRestartQueues(a1, 0);
  return v3;
}
