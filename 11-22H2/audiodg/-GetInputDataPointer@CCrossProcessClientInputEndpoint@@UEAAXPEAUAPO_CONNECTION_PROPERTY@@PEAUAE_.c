/*
 * XREFs of ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140096F20
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pq_EventWriteTransfer @ 0x140039D32 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x14003A268 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A342 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140095248 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140095E20 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140095E7C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14009638C (McTemplateU0p_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CCrossProcessBaseEndpoint *v3; // r14
  UINT32 u32ValidFrameCount; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  const char *v12; // r8
  unsigned int v13; // edx
  struct SharedMessageQueueItem *v14; // r15
  bool v15; // [rsp+70h] [rbp+8h] BYREF
  struct SharedMessageQueueItem *v16; // [rsp+78h] [rbp+10h] BYREF

  v3 = (CCrossProcessClientInputEndpoint *)((char *)this - 456);
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      (__int64)this,
      (__int64)a2,
      (__int64)this - 456,
      13,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  *((_DWORD *)this + 4) = 2;
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = 0LL;
    *(_OWORD *)&a3->u64PaddingFrames = 0LL;
    *(_QWORD *)&a3->f32FramesPerSecond = 0LL;
  }
  if ( !CCrossProcessBaseEndpoint::IsValidFlags(v3, *(unsigned int *)(*((_QWORD *)this - 48) + 164LL)) )
  {
    if ( (byte_1400CF981 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v9, v8, (__int64)v3);
    _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 48) + 164LL), 0xFFFFFFFE);
    goto LABEL_9;
  }
  if ( !u32ValidFrameCount )
  {
LABEL_9:
    _InterlockedExchange((volatile __int32 *)this - 74, 1);
    a2->pBuffer = *((_QWORD *)this - 43);
    a2->u32BufferFlags = BUFFER_SILENT;
    goto LABEL_10;
  }
  v15 = 0;
  if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(v3, &v16, &v15) )
  {
    if ( (byte_1400CF981 & 1) != 0 )
      McTemplateU0pq_EventWriteTransfer(v10, &EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, (__int64)v3, 0);
    v12 = "CpGlitchEvent::CLIENT_INPUT_NO_MESSAGES";
    v13 = 1;
LABEL_18:
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 256, v13, (const unsigned __int16 *)v12, v11);
    goto LABEL_9;
  }
  v14 = v16;
  if ( *((_DWORD *)v16 + 14) != u32ValidFrameCount )
  {
    if ( (byte_1400CF981 & 1) != 0 )
      McTemplateU0pq_EventWriteTransfer(v10, &EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, (__int64)v3, 0);
    v12 = "CpGlitchEvent::CLIENT_INPUT_SIZE_MISMATCH";
    v13 = 2;
    goto LABEL_18;
  }
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = *((_OWORD *)v16 + 1);
    *(_OWORD *)&a3->u64PaddingFrames = *((_OWORD *)v14 + 2);
    *(_QWORD *)&a3->f32FramesPerSecond = *((_QWORD *)v14 + 6);
    if ( *((_BYTE *)this - 56) )
    {
      if ( (unsigned int)ConvertHostPerfCounterToPerfCounter((unsigned __int64 *)&a3->hnsQPCPosition) )
        *((_BYTE *)this - 56) = 0;
    }
  }
  if ( *((_DWORD *)v14 + 2) == 2 )
  {
    *((_DWORD *)this + 4) = v15 ? 4 : 0;
    goto LABEL_9;
  }
  a2->u32BufferFlags = BUFFER_VALID;
  a2->pBuffer = *((_QWORD *)this - 48) + *((unsigned int *)v14 + 1);
  *((_DWORD *)this + 4) = v15 ? 4 : 0;
LABEL_10:
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      a2->u32ValidFrameCount,
      v8,
      (__int64)v3,
      14,
      a2->u32ValidFrameCount,
      0,
      a2->u32BufferFlags);
}
