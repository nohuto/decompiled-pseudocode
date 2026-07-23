/*
 * XREFs of RtlNtStatusToDosError @ 0x180006840
 * Callers:
 *     EtwSendNotification @ 0x180004BE0 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x180004D10 (EtwpReceiveReplyDataBlock.c)
 *     EtwEventWriteTransfer @ 0x180004F40 (EtwEventWriteTransfer.c)
 *     EtwpStopUmLogger @ 0x180005B64 (EtwpStopUmLogger.c)
 *     EtwpEventWriteFull @ 0x180006228 (EtwpEventWriteFull.c)
 *     EtwTraceMessageVa @ 0x1800064C0 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800067A0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwpStartUmLogger @ 0x180006FB0 (EtwpStartUmLogger.c)
 *     EtwReplyNotification @ 0x180007D40 (EtwReplyNotification.c)
 *     EtwpGenerateFileName @ 0x18000ACA8 (EtwpGenerateFileName.c)
 *     EtwpSetProviderTraits @ 0x180015628 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x1800165B8 (EtwpRegisterProvider.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlSizeHeap @ 0x1800270A0 (RtlSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     EtwEventActivityIdControl @ 0x18005E5A0 (EtwEventActivityIdControl.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     EtwWriteUMSecurityEvent @ 0x1800826A0 (EtwWriteUMSecurityEvent.c)
 *     EtwpTrackProviderBinary @ 0x18008894C (EtwpTrackProviderBinary.c)
 *     EtwEventWriteNoRegistration @ 0x18008AEB0 (EtwEventWriteNoRegistration.c)
 *     EtwLogTraceEvent @ 0x18008EA50 (EtwLogTraceEvent.c)
 *     EtwpFinalizeLogFileHeader @ 0x180090B9C (EtwpFinalizeLogFileHeader.c)
 *     EtwSetMark @ 0x180091E50 (EtwSetMark.c)
 *     EtwRegisterSecurityProvider @ 0x180093420 (EtwRegisterSecurityProvider.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104C50 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180106088 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801066D4 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180106980 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x180121D10 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x180121F48 (EtwpUseDescriptorType.c)
 *     EtwTraceEventInstance @ 0x180122090 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x180122230 (EtwpBufferingModeFlush.c)
 *     EtwpIncrementUmLoggerFile @ 0x1801226D4 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180122B90 (EtwpUpdateUmLogger.c)
 *     EtwpProviderArrivalCallback @ 0x180123318 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  unsigned __int32 v1; // edx
  struct _TEB *v2; // rax
  ULONG result; // eax
  unsigned int v4; // eax
  unsigned int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  int v9; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) != 0x70000 || ((HIBYTE(Status) - 128) & 0xFFFFFFBF) != 0 )
    {
      if ( (Status & 0xF0000000) == 0xD0000000 )
        v1 = Status & 0xCFFFFFFF;
      v4 = 0;
      v5 = 321;
      do
      {
        v6 = (v5 + v4) >> 1;
        v7 = RtlpRunTable[2 * v6];
        v8 = v1 - v7;
        if ( v1 >= v7 )
        {
          if ( v8 < (unsigned __int8)byte_18013C024[8 * v6] )
          {
            v9 = (unsigned __int16)word_18013C026[4 * v6];
            if ( byte_18013C025[8 * v6] == 1 )
              return (unsigned __int16)RtlpStatusTable[v8 + v9];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v8 + v9] | ((unsigned __int16)RtlpStatusTable[2 * v8 + 1 + v9] << 16);
          }
          v4 = v6 + 1;
        }
        else
        {
          v5 = v6 - 1;
        }
      }
      while ( v4 <= v5 );
      if ( (v1 & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)v1;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317;
    }
    else
    {
      return (unsigned __int16)v1;
    }
  }
  return result;
}
