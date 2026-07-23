/*
 * XREFs of NtTraceControl @ 0x140725DD0
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083B990 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083BBD8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409DDBB0 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140228234 (EtwpQueryUsedProcessorCount.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentThreadProcessId @ 0x1402AFB30 (PsGetCurrentThreadProcessId.c)
 *     EtwpCreateActivityId @ 0x140349F50 (EtwpCreateActivityId.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     WdiUpdateSem @ 0x1405FBD58 (WdiUpdateSem.c)
 *     EtwpGetPmcOwnership @ 0x1405FC56C (EtwpGetPmcOwnership.c)
 *     EtwpGetPmcSessions @ 0x1405FC714 (EtwpGetPmcSessions.c)
 *     EtwpTransitionToRealtime @ 0x1405FFAF8 (EtwpTransitionToRealtime.c)
 *     EtwpGetCompressionSettings @ 0x140602E48 (EtwpGetCompressionSettings.c)
 *     EtwpSetCompressionSettings @ 0x1406030A8 (EtwpSetCompressionSettings.c)
 *     EtwpRealtimeDisconnectConsumerByHandle @ 0x140682094 (EtwpRealtimeDisconnectConsumerByHandle.c)
 *     EtwpReleaseLoggerContext @ 0x1406BE238 (EtwpReleaseLoggerContext.c)
 *     EtwpSetProviderTraitsUm @ 0x1406BE3D0 (EtwpSetProviderTraitsUm.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BECFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpRegisterUMProvider @ 0x1406BF240 (EtwpRegisterUMProvider.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     EtwpReceiveReplyDataBlock @ 0x14077EFC0 (EtwpReceiveReplyDataBlock.c)
 *     EtwpSendReplyDataBlock @ 0x14077F12C (EtwpSendReplyDataBlock.c)
 *     EtwpNotifyGuid @ 0x14077FBD8 (EtwpNotifyGuid.c)
 *     EtwpAddNotificationEvent @ 0x14077FE48 (EtwpAddNotificationEvent.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     EtwpReceiveNotification @ 0x14078182C (EtwpReceiveNotification.c)
 *     EtwpStartTrace @ 0x1407E50B0 (EtwpStartTrace.c)
 *     WdiDispatchControl @ 0x1407E56FC (WdiDispatchControl.c)
 *     EtwpRealtimeConnect @ 0x1407F57C4 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F5CC8 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x1407F8554 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407F8BF0 (EtwpQueryTrace.c)
 *     EtwpValidateLoggerInfo @ 0x1407F8CD8 (EtwpValidateLoggerInfo.c)
 *     EtwpGetTraceGuidInfo @ 0x140852888 (EtwpGetTraceGuidInfo.c)
 *     EtwpTrackProviderBinary @ 0x14085AB50 (EtwpTrackProviderBinary.c)
 *     EtwpGetGuidList @ 0x1408A74E6 (EtwpGetGuidList.c)
 *     EtwpGetTraceGroupInfo @ 0x1408A75C2 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowList @ 0x1409E7B88 (EtwpUpdateDisallowList.c)
 *     EtwpEnumerateTraceGuids @ 0x1409E7E18 (EtwpEnumerateTraceGuids.c)
 *     EtwpGetDisallowList @ 0x1409E7F58 (EtwpGetDisallowList.c)
 *     EtwpGetTraceGuidList @ 0x1409E8034 (EtwpGetTraceGuidList.c)
 *     EtwpUseDescriptorTypeUm @ 0x1409E8130 (EtwpUseDescriptorTypeUm.c)
 *     EtwpIncrementTraceFile @ 0x1409E81C0 (EtwpIncrementTraceFile.c)
 *     EtwpQueryReferenceTime @ 0x1409E82AC (EtwpQueryReferenceTime.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC874 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpQuerySessionDemuxObject @ 0x1409ECA70 (EtwpQuerySessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1409ECAEC (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409ECDA8 (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpSetProviderBinaryTracking @ 0x1409F567C (EtwpSetProviderBinaryTracking.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  unsigned __int64 v6; // rbx
  _QWORD *Pool2; // r13
  unsigned __int64 v8; // rdx
  volatile void *v9; // r9
  unsigned int v10; // r10d
  ULONG v11; // r11d
  NTSTATUS Trace; // edi
  unsigned int v13; // r14d
  char v14; // r8
  PULONG v15; // rsi
  __int64 v16; // rcx
  int v17; // eax
  ULONG v18; // r15d
  ULONG v19; // r12d
  PVOID v20; // rcx
  __int64 v21; // rcx
  NTSTATUS updated; // eax
  ULONG v24; // eax
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // edx
  unsigned int *v31; // rax
  unsigned int *v32; // r14
  void *v33; // rcx
  unsigned int v34; // edx
  _QWORD *v35; // r9
  __int64 v36; // r8
  __int64 v37; // rdx
  char *v38; // rcx
  int v39; // [rsp+30h] [rbp-68h] BYREF
  ULONG Size; // [rsp+34h] [rbp-64h] BYREF
  int Size_4; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+40h] [rbp-58h]
  _QWORD *v43; // [rsp+48h] [rbp-50h]
  void *v44; // [rsp+50h] [rbp-48h]
  __int64 v45; // [rsp+58h] [rbp-40h]

  v6 = (unsigned int)FunctionCode;
  Pool2 = 0LL;
  v43 = 0LL;
  Size = 0;
  v42 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  Trace = v11;
  Size_4 = v11;
  LOBYTE(v13) = 0;
  if ( v14 )
  {
    v13 = (unsigned int)v6 >> 31;
    LODWORD(v6) = v6 & 0x7FFFFFFF;
    if ( !(_BYTE)v13 )
      v6 = v10;
    if ( v8 )
    {
      if ( InputBufferLength && (v8 + InputBufferLength > 0x7FFFFFFF0000LL || v8 + InputBufferLength < v8) )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      InputBufferLength = v11;
    }
    if ( v9 )
      ProbeForWrite(v9, OutputBufferLength, 1u);
    else
      OutputBufferLength = v11;
    v15 = ReturnLength;
    if ( !ReturnLength )
    {
      Trace = -1073741811;
      Size_4 = -1073741811;
      goto LABEL_38;
    }
    v16 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    Trace = Size_4;
  }
  else
  {
    v15 = ReturnLength;
  }
  if ( (unsigned int)v6 <= 0x1B && (v17 = 134238208, _bittest(&v17, v6)) )
  {
    v18 = OutputBufferLength;
    v19 = InputBufferLength;
  }
  else
  {
    v19 = InputBufferLength;
    v18 = OutputBufferLength;
    if ( InputBufferLength || OutputBufferLength )
    {
      if ( InputBufferLength > OutputBufferLength )
        v24 = InputBufferLength;
      else
        v24 = OutputBufferLength;
      Pool2 = (_QWORD *)ExAllocatePool2(257LL, v24, 1350005829LL);
      v43 = Pool2;
      if ( !Pool2 )
      {
        Trace = -1073741801;
        goto LABEL_38;
      }
      if ( InputBuffer )
        memmove(Pool2, InputBuffer, InputBufferLength);
    }
  }
  if ( (_DWORD)v6 != 12 )
  {
    if ( (_DWORD)v6 == 15 )
    {
      if ( v19 != 160 || v18 - 160 > 0xFF60 )
        goto LABEL_117;
      updated = EtwpRegisterUMProvider(v42, (__int64)Pool2, v18, v13, &Size);
LABEL_45:
      Trace = updated;
    }
    else
    {
      if ( (_DWORD)v6 == 30 )
      {
        if ( v19 == 24 && v18 - 120 <= 0xFF88 )
        {
          Trace = EtwpSetProviderTraitsUm((__int64)Pool2, v18, (int)&Size);
          v20 = OutputBuffer;
          goto LABEL_24;
        }
LABEL_117:
        Trace = -1073741811;
        v20 = OutputBuffer;
        goto LABEL_24;
      }
      v25 = 0x140000000uLL;
      switch ( (int)v6 )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          if ( v19 < 0xB0 || v18 < 0xB0 )
            goto LABEL_119;
          Trace = EtwpValidateLoggerInfo(Pool2, (unsigned int)(v6 - 1), 0x140000000uLL, v9);
          if ( Trace < 0 )
            goto LABEL_69;
          if ( *(_DWORD *)Pool2 > v19 )
          {
LABEL_119:
            Trace = -1073741306;
            break;
          }
          Trace = 0;
LABEL_69:
          if ( Trace < 0 )
            break;
          if ( (_DWORD)v6 == 3 )
          {
            Trace = EtwpQueryTrace(v42, Pool2);
          }
          else if ( (unsigned int)v26 <= 6 )
          {
            __asm { jmp     rdx }
          }
          Size = 176;
          v20 = OutputBuffer;
          goto LABEL_24;
        case 11:
          if ( v19 != 96 || v18 != 96 )
            goto LABEL_117;
          Size = 96;
          Trace = EtwpRealtimeConnect(Pool2);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 13:
          if ( v19 != 48 || v18 )
            goto LABEL_117;
          Trace = WdiDispatchControl(Pool2);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 14:
          if ( v19 != 8 || v18 )
            goto LABEL_117;
          v33 = (void *)*(unsigned int *)InputBuffer;
          v44 = v33;
          Trace = EtwpRealtimeDisconnectConsumerByHandle(v33);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 16:
          if ( v19 || v18 - 72 > 0xFFB8 )
            goto LABEL_117;
          Trace = EtwpReceiveNotification(Pool2);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 17:
          if ( v19 < 0x48 || v18 != 72 || *((_DWORD *)Pool2 + 1) != v19 )
            goto LABEL_117;
          if ( *(_DWORD *)Pool2 == 3 )
          {
            if ( v19 < 0x78 )
              goto LABEL_117;
            LOBYTE(v25) = 1;
            updated = EtwpEnableGuid(v42, Pool2, v25);
            Size = 72;
          }
          else
          {
            LOBYTE(v25) = 1;
            updated = EtwpNotifyGuid(v42, Pool2, v25);
            Size = 72;
          }
          goto LABEL_45;
        case 18:
          if ( v19 < 0x48 || *((_DWORD *)Pool2 + 1) != v19 )
            goto LABEL_117;
          *((_DWORD *)Pool2 + 9) = PsGetCurrentThreadProcessId();
          Trace = EtwpSendReplyDataBlock(Pool2);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 19:
          if ( v19 != 8 )
            goto LABEL_117;
          v39 = 0;
          Trace = EtwpReceiveReplyDataBlock(Pool2);
          Size = 0;
          v20 = OutputBuffer;
          goto LABEL_24;
        case 20:
          if ( v19 || v18 )
            goto LABEL_117;
          updated = WdiUpdateSem();
          goto LABEL_45;
        case 21:
          updated = EtwpGetTraceGuidList(v42, Pool2, v18 >> 4, &Size);
          Size *= 16;
          goto LABEL_45;
        case 22:
          if ( v19 != 16 )
            goto LABEL_117;
          Size = v18;
          Trace = EtwpGetTraceGuidInfo(v42, Pool2, Pool2, &Size);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 23:
          Trace = EtwpEnumerateTraceGuids(v42, Pool2, v18 / 0x24, &Size);
          Size *= 36;
          break;
        case 24:
          if ( v19 || v18 )
            goto LABEL_117;
          if ( !*(_DWORD *)(v42 + 4072) )
          {
            *(_DWORD *)(v42 + 4072) = PsGetCurrentThreadProcessId();
            Trace = 0;
            v20 = OutputBuffer;
            goto LABEL_24;
          }
          Trace = -1073741790;
          break;
        case 25:
          if ( v19 != 4 || v18 != 16 )
            goto LABEL_117;
          updated = EtwpQueryReferenceTime(v42, *(unsigned int *)Pool2, Pool2);
          Size = 16;
          goto LABEL_45;
        case 26:
          if ( v19 != 8 )
            goto LABEL_117;
          Trace = EtwpTrackProviderBinary(v42, Pool2);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 27:
          if ( v19 != 4 )
            goto LABEL_117;
          v28 = *(unsigned int *)InputBuffer;
          v45 = v28;
          if ( !v28 )
            goto LABEL_117;
          Trace = EtwpAddNotificationEvent(v28, (unsigned __int8)v13);
          v20 = OutputBuffer;
          goto LABEL_24;
        case 28:
          if ( v19 < 8 )
            goto LABEL_117;
          v34 = *((_DWORD *)Pool2 + 1);
          if ( 16LL * v34 + 8 != v19 )
            goto LABEL_117;
          v35 = 0LL;
          if ( v34 )
            v35 = Pool2 + 1;
          updated = EtwpUpdateDisallowList(v42, *(unsigned int *)Pool2, v34, v35);
          goto LABEL_45;
        case 31:
          if ( v19 != 16 || v18 )
            goto LABEL_117;
          updated = EtwpUseDescriptorTypeUm(Pool2);
          goto LABEL_45;
        case 32:
          updated = EtwpGetGuidList(v42, 2, (_DWORD)Pool2, v18 >> 4, (__int64)&Size);
          Size *= 16;
          goto LABEL_45;
        case 33:
          if ( v19 != 16 )
            goto LABEL_117;
          Size = v18;
          updated = EtwpGetTraceGroupInfo(v42, Pool2, Pool2, &Size);
          goto LABEL_45;
        case 34:
          if ( v19 != 8 )
            goto LABEL_117;
          Size = v18;
          updated = EtwpGetDisallowList(v42, Pool2, Pool2, &Size);
          goto LABEL_45;
        case 35:
          if ( v19 != 16 || v18 )
            goto LABEL_117;
          updated = EtwpSetCompressionSettings((unsigned int *)Pool2);
          goto LABEL_45;
        case 36:
          if ( v19 != 8 || v18 != 16 )
            goto LABEL_117;
          Size = 16;
          updated = EtwpGetCompressionSettings((unsigned __int16 *)Pool2, (unsigned int *)Pool2);
          goto LABEL_45;
        case 37:
          if ( v19 < 0xC )
            goto LABEL_117;
          v36 = *((unsigned __int16 *)Pool2 + 4);
          if ( (unsigned int)v36 > 0x10 )
          {
            Trace = -1073741811;
            break;
          }
          v37 = *((unsigned int *)Pool2 + 1);
          if ( (unsigned int)(v37 - 1) <= 3 )
          {
            Trace = -1073741811;
            break;
          }
          if ( (_WORD)v36 )
          {
            if ( !(_DWORD)v37 )
            {
              Trace = -1073741811;
              break;
            }
          }
          else if ( (_DWORD)v37 )
          {
            goto LABEL_117;
          }
          if ( 16 * v36 + 12 != v19 )
            goto LABEL_117;
          if ( (_WORD)v36 )
            v38 = (char *)Pool2 + 12;
          else
            v38 = 0LL;
          updated = EtwpUpdatePeriodicCaptureState(*(unsigned int *)Pool2, v37, v36, v38);
          goto LABEL_45;
        case 38:
          if ( v19 < 8 || (v19 & 7) != 0 || v18 < 2 )
            goto LABEL_117;
          LOWORD(v39) = 0;
          Trace = EtwpGetPrivateSessionTraceHandle(Pool2, v19 >> 3, &v39);
          if ( !Trace )
          {
            Size = 2;
            *(_WORD *)Pool2 = v39;
          }
          break;
        case 39:
          if ( v19 < 2 || v18 < 8 )
            goto LABEL_117;
          Trace = EtwpRegisterPrivateSession(v42, *(unsigned __int16 *)Pool2, (char *)Pool2 + 4, Pool2);
          if ( !Trace )
            Size = 8;
          break;
        case 40:
          if ( v19 < 8 || v18 < 2 )
            goto LABEL_117;
          Trace = EtwpQuerySessionDemuxObject(*Pool2, Pool2);
          if ( !Trace )
            Size = 2;
          break;
        case 41:
          if ( v19 < 8 )
            goto LABEL_117;
          updated = EtwpSetProviderBinaryTracking(v42, *(unsigned int *)Pool2, *((unsigned __int8 *)Pool2 + 4));
          goto LABEL_45;
        case 42:
          if ( v18 < 4 )
            goto LABEL_117;
          v29 = *(_DWORD *)(v42 + 16);
          goto LABEL_84;
        case 43:
          if ( v18 < 4 )
            goto LABEL_117;
          v29 = *(_DWORD *)((char *)&NlsMbCodePageTag + 6);
LABEL_84:
          *(_DWORD *)Pool2 = v29;
          Size = 4;
          Trace = 0;
          v20 = OutputBuffer;
          goto LABEL_24;
        case 44:
          if ( v19 != 8 || v18 < 4 )
            goto LABEL_117;
          v30 = *(unsigned __int16 *)Pool2;
          if ( v30 == 0xFFFF )
            v30 = *(unsigned __int8 *)(v42 + 4232);
          v31 = EtwpAcquireLoggerContextByLoggerId(v42, v30, 0);
          v32 = v31;
          if ( v31 )
          {
            Size = 4;
            *(_DWORD *)Pool2 = EtwpQueryUsedProcessorCount((__int64)v31);
            EtwpReleaseLoggerContext(v32, 0);
            v20 = OutputBuffer;
            goto LABEL_24;
          }
          Trace = -1073741811;
          break;
        case 45:
          Size = v18;
          updated = EtwpGetPmcOwnership(Pool2, &Size);
          goto LABEL_45;
        case 46:
          Size = v18;
          updated = EtwpGetPmcSessions((__int64)Pool2, &Size);
          goto LABEL_45;
        default:
          Trace = -1073741808;
          break;
      }
    }
    v20 = OutputBuffer;
    goto LABEL_24;
  }
  if ( v18 != 16 )
    goto LABEL_117;
  Trace = 0;
  EtwpCreateActivityId((volatile signed __int64 *)OutputBuffer);
LABEL_24:
  if ( Trace >= 0 )
  {
    if ( Size )
    {
      if ( Size > v18 )
      {
        Trace = -1073741789;
        Size_4 = -1073741789;
      }
      else
      {
        memmove(v20, Pool2, Size);
      }
    }
    *v15 = Size;
  }
  if ( Trace == -1073741789 && ((unsigned int)(v6 - 15) <= 1 || (unsigned int)(v6 - 21) <= 1)
    || (unsigned int)v6 <= 0x2E && (v21 = 0x41D700880000LL, _bittest64(&v21, v6)) )
  {
    *v15 = Size;
  }
LABEL_38:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return Trace;
}
