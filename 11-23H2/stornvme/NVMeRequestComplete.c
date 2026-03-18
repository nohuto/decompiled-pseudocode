/*
 * XREFs of NVMeRequestComplete @ 0x1C00037DC
 * Callers:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C774 (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeFirmwareActivateCompletionAfterReset @ 0x1C0015460 (NVMeFirmwareActivateCompletionAfterReset.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1C0016830 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeWriteBufferFirmwareActivateCompletionAfterReset @ 0x1C0018560 (NVMeWriteBufferFirmwareActivateCompletionAfterReset.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x1C0023CF0 (NVMeSanitizeRecoverWorkItem.c)
 *     ProcessMultipleCommands @ 0x1C00250BC (ProcessMultipleCommands.c)
 *     ProcessNvmeSanitizeStatus @ 0x1C00258C4 (ProcessNvmeSanitizeStatus.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeControllerReclaimLocalCommand @ 0x1C00045C0 (NVMeControllerReclaimLocalCommand.c)
 *     IsInternalSrb @ 0x1C0007D7C (IsInternalSrb.c)
 *     GetLocalCommand @ 0x1C0009DC0 (GetLocalCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeRequestComplete(__int64 a1)
{
  __int64 v2; // rdx
  char v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  __int64 v6; // r11
  __int64 v7; // rbx

  if ( (unsigned __int8)IsInternalSrb(a1) )
  {
    result = GetLocalCommand(a1, v2);
    v7 = result;
    if ( result )
    {
      *(_BYTE *)result = 0;
      if ( *(_DWORD *)(v6 + 12) == 251658240 )
      {
        if ( (*(_BYTE *)(result + 1) & 1) != 0 )
        {
          return NVMeControllerReclaimLocalCommand(a1, result);
        }
        else
        {
          NVMeFreeDmaBuffer(a1, 0x2000LL, v6 + 56, *(_QWORD *)(result + 104));
          return StorPortExtendedFunction(1LL, a1, v7);
        }
      }
    }
  }
  else if ( v3 )
  {
    return StorPortNotification(4104LL, a1, v4);
  }
  else
  {
    return StorPortNotification(0LL, a1, v4);
  }
  return result;
}
