/*
 * XREFs of RtlNtStatusToDosError @ 0x1800536B0
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180002184 (EtwpProviderArrivalCallback.c)
 *     EtwpSetProviderTraits @ 0x18002FBC8 (EtwpSetProviderTraits.c)
 *     EtwpEventWriteFull @ 0x180030178 (EtwpEventWriteFull.c)
 *     EtwEventWriteTransfer @ 0x180030320 (EtwEventWriteTransfer.c)
 *     EtwpRegisterProvider @ 0x18003250C (EtwpRegisterProvider.c)
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlSizeHeap @ 0x18003AA50 (RtlSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     EtwSendNotification @ 0x180052AD0 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180052C24 (EtwpReceiveReplyDataBlock.c)
 *     EtwTraceMessageVa @ 0x1800535C0 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180053690 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005B754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpStartUmLogger @ 0x18005BB9C (EtwpStartUmLogger.c)
 *     EtwReplyNotification @ 0x18005F080 (EtwReplyNotification.c)
 *     EtwpGenerateFileName @ 0x18005F488 (EtwpGenerateFileName.c)
 *     EtwpStopUmLogger @ 0x18005F5F0 (EtwpStopUmLogger.c)
 *     EtwEventActivityIdControl @ 0x180061C10 (EtwEventActivityIdControl.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180076940 (RtlSetUserValueHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18007B900 (EtwWriteUMSecurityEvent.c)
 *     EtwpTrackProviderBinary @ 0x18008510C (EtwpTrackProviderBinary.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x1800877D0 (EtwEventWriteNoRegistration.c)
 *     EtwSetMark @ 0x18008CBD0 (EtwSetMark.c)
 *     EtwRegisterSecurityProvider @ 0x18008EAE0 (EtwRegisterSecurityProvider.c)
 *     EtwLogTraceEvent @ 0x1800B1D50 (EtwLogTraceEvent.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FF300 (RtlSetUserFlagsHeap.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180107838 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180107AE8 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x180124E60 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x180125090 (EtwpUseDescriptorType.c)
 *     EtwTraceEventInstance @ 0x1801251E0 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x180125380 (EtwpBufferingModeFlush.c)
 *     EtwpIncrementUmLoggerFile @ 0x18012588C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180125F44 (EtwpUpdateUmLogger.c)
 * Callees:
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _TEB *v1; // rax
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // rdx
  unsigned __int64 v5; // r11
  unsigned int v6; // eax
  unsigned int v7; // r10d
  int v10; // eax

  v1 = NtCurrentTeb();
  if ( v1 )
    v1->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
    return Status;
  if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
    return (unsigned __int16)Status;
  if ( (Status & 0xF0000000) == 0xD0000000 )
    Status &= 0xCFFFFFFF;
  v2 = 0;
  v3 = 327;
  while ( 1 )
  {
    v4 = (v3 + v2) >> 1;
    v5 = 8 * v4;
    v6 = RtlpRunTable[2 * v4];
    v7 = Status - v6;
    if ( Status >= v6 )
      break;
    v3 = v4 - 1;
LABEL_12:
    if ( v2 > v3 )
    {
      if ( (Status & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)Status;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", Status);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317;
    }
  }
  if ( v7 >= (unsigned __int8)byte_1801483C4[v5] )
  {
    v2 = v4 + 1;
    goto LABEL_12;
  }
  v10 = (unsigned __int16)word_1801483C6[v5 / 2];
  if ( byte_1801483C5[v5] == 1 )
    return (unsigned __int16)RtlpStatusTable[v7 + v10];
  return (unsigned __int16)RtlpStatusTable[2 * v7 + v10] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v10] << 16);
}
