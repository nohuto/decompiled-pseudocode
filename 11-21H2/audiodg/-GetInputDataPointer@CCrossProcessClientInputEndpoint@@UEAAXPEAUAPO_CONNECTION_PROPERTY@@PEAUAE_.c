/*
 * XREFs of ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140089EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140002FF4 (-Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x140082818 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140088228 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140088EC8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140088F5C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14008946C (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14008A380 (McTemplateU0pqxxx_EventWriteTransfer.c)
 */

void __fastcall CCrossProcessClientInputEndpoint::GetInputDataPointer(
        CCrossProcessClientInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 a4)
{
  CCrossProcessBaseEndpoint *v4; // r14
  UINT32 u32ValidFrameCount; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  const char *v13; // r8
  unsigned int v14; // edx
  struct SharedMessageQueueItem *v15; // r15
  bool v16; // [rsp+70h] [rbp+8h] BYREF
  struct SharedMessageQueueItem *v17; // [rsp+78h] [rbp+10h] BYREF

  v4 = (CCrossProcessClientInputEndpoint *)((char *)this - 456);
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      (_DWORD)this,
      (_DWORD)a2,
      (_DWORD)this - 456,
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
  if ( !CCrossProcessBaseEndpoint::IsValidFlags(v4, *(unsigned int *)(*((_QWORD *)this - 48) + 164LL), (__int64)a3, a4) )
  {
    if ( (byte_1400C1841 & 4) != 0 )
      McTemplateU0p_EventWriteTransfer(v10, v9, (__int64)v4);
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
  v16 = 0;
  if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(v4, &v17, &v16) )
  {
    if ( (byte_1400C1841 & 1) != 0 )
      McTemplateU0pq_EventWriteTransfer(v11, &EVT_GLITCH_CP_CLIENT_INPUT_NO_MESSAGES, (__int64)v4, 0);
    v13 = "CpGlitchEvent::CLIENT_INPUT_NO_MESSAGES";
    v14 = 1;
LABEL_18:
    CCrossProcessEndpointTraceLogger::Glitch((__int64)this - 256, v14, (__int64)v13, v12);
    goto LABEL_9;
  }
  v15 = v17;
  if ( *((_DWORD *)v17 + 14) != u32ValidFrameCount )
  {
    if ( (byte_1400C1841 & 1) != 0 )
      McTemplateU0pq_EventWriteTransfer(v11, &EVT_GLITCH_CP_CLIENT_INPUT_SIZE_MISMATCH, (__int64)v4, 0);
    v13 = "CpGlitchEvent::CLIENT_INPUT_SIZE_MISMATCH";
    v14 = 2;
    goto LABEL_18;
  }
  if ( a3 )
  {
    *(_OWORD *)&a3->u64DevicePosition = *((_OWORD *)v17 + 1);
    *(_OWORD *)&a3->u64PaddingFrames = *((_OWORD *)v15 + 2);
    *(_QWORD *)&a3->f32FramesPerSecond = *((_QWORD *)v15 + 6);
    if ( *((_BYTE *)this - 56) )
    {
      if ( (unsigned int)ConvertHostPerfCounterToPerfCounter((unsigned __int64 *)&a3->hnsQPCPosition) )
        *((_BYTE *)this - 56) = 0;
    }
  }
  if ( *((_DWORD *)v15 + 2) == 2 )
  {
    *((_DWORD *)this + 4) = v16 ? 4 : 0;
    goto LABEL_9;
  }
  a2->u32BufferFlags = BUFFER_VALID;
  a2->pBuffer = *((_QWORD *)this - 48) + *((unsigned int *)v15 + 1);
  *((_DWORD *)this + 4) = v16 ? 4 : 0;
LABEL_10:
  if ( (byte_1400C1841 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      a2->u32ValidFrameCount,
      v9,
      (_DWORD)v4,
      14,
      a2->u32ValidFrameCount,
      0,
      a2->u32BufferFlags);
}
