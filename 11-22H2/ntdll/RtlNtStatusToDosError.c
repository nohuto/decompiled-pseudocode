/*
 * XREFs of RtlNtStatusToDosError @ 0x180053810
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180002154 (EtwpProviderArrivalCallback.c)
 *     EtwpSetProviderTraits @ 0x18002FD98 (EtwpSetProviderTraits.c)
 *     EtwpEventWriteFull @ 0x180030348 (EtwpEventWriteFull.c)
 *     EtwEventWriteTransfer @ 0x1800304F0 (EtwEventWriteTransfer.c)
 *     EtwpRegisterProvider @ 0x18003266C (EtwpRegisterProvider.c)
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlSizeHeap @ 0x18003ABB0 (RtlSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     EtwSendNotification @ 0x180052C30 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180052D84 (EtwpReceiveReplyDataBlock.c)
 *     EtwTraceMessageVa @ 0x180053720 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800537F0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwEventActivityIdControl @ 0x18005C440 (EtwEventActivityIdControl.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005E754 (EtwpFinalizeLogFileHeader.c)
 *     EtwpStartUmLogger @ 0x18005EB9C (EtwpStartUmLogger.c)
 *     EtwReplyNotification @ 0x180061F10 (EtwReplyNotification.c)
 *     EtwpGenerateFileName @ 0x180062318 (EtwpGenerateFileName.c)
 *     EtwpStopUmLogger @ 0x180062480 (EtwpStopUmLogger.c)
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800762D0 (RtlSetUserValueHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x18007B290 (EtwWriteUMSecurityEvent.c)
 *     EtwpTrackProviderBinary @ 0x18008490C (EtwpTrackProviderBinary.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180086FD0 (EtwEventWriteNoRegistration.c)
 *     EtwSetMark @ 0x18008C3D0 (EtwSetMark.c)
 *     EtwRegisterSecurityProvider @ 0x18008E2E0 (EtwRegisterSecurityProvider.c)
 *     EtwLogTraceEvent @ 0x1800AFC80 (EtwLogTraceEvent.c)
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104364 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105124 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180105448 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105DC8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180106114 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1801066D8 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x1801239E0 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x180123C10 (EtwpUseDescriptorType.c)
 *     EtwTraceEventInstance @ 0x180123D60 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x180123F00 (EtwpBufferingModeFlush.c)
 *     EtwpIncrementUmLoggerFile @ 0x18012440C (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180124AC4 (EtwpUpdateUmLogger.c)
 * Callees:
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
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
  v3 = 316;
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
  if ( v7 >= (unsigned __int8)byte_180145044[v5] )
  {
    v2 = v4 + 1;
    goto LABEL_12;
  }
  v10 = (unsigned __int16)word_180145046[v5 / 2];
  if ( byte_180145045[v5] == 1 )
    return (unsigned __int16)RtlpStatusTable[v7 + v10];
  return (unsigned __int16)RtlpStatusTable[2 * v7 + v10] | ((unsigned __int16)RtlpStatusTable[2 * v7 + 1 + v10] << 16);
}
