/*
 * XREFs of ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400A0AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A342 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14003B61C (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA8E (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CSpatialCrossProcessBaseEndpoint *v3; // rdi
  UINT32 u32ValidFrameCount; // ebp
  char v8; // al
  __int16 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int ObjectsAvailableForProcessing; // eax
  __int64 v13; // r9
  bool v14; // zf
  int v15; // eax

  v3 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1432);
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      (__int64)this,
      (__int64)a2,
      (__int64)v3,
      5,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  if ( u32ValidFrameCount )
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 17) + 44LL), u32ValidFrameCount);
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 17) + 64LL), 0, 0);
  v9 = u32ValidFrameCount * *((_WORD *)this - 560);
  *((_BYTE *)this + 73) = (v8 & 0x10) != 0;
  (*(void (__fastcall **)(CSpatialCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, _QWORD))(*(_QWORD *)v3 + 80LL))(
    v3,
    a3,
    u32ValidFrameCount);
  if ( u32ValidFrameCount )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsRunning(v3) )
    {
      *((_DWORD *)this + 20) = 2;
      a2->u32BufferFlags = BUFFER_VALID;
      ObjectsAvailableForProcessing = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
                                        v3,
                                        (unsigned int *)this + 16,
                                        (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = ObjectsAvailableForProcessing;
      if ( ObjectsAvailableForProcessing < 0 )
      {
        if ( ObjectsAvailableForProcessing != -2005139358 )
          SpatialCPTraceLoggingErrorHelper(
            "CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer",
            313,
            (unsigned int)ObjectsAvailableForProcessing,
            v13);
      }
      else
      {
        *((_BYTE *)this + 72) = 1;
      }
      goto LABEL_17;
    }
    v14 = *((_DWORD *)this + 20) == 2;
    *((_DWORD *)this + 20) = v14;
    if ( v14 )
    {
      v15 = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
              v3,
              (unsigned int *)this + 16,
              (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = v15;
      if ( v15 >= 0 )
        *((_BYTE *)this + 72) = 1;
    }
  }
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v11, v10, (__int64)v3, 23, 0, u32ValidFrameCount, 101);
  a2->u32BufferFlags = BUFFER_SILENT;
  *((_DWORD *)this + 19) = 0;
LABEL_17:
  a2->pBuffer = *((_QWORD *)this - 166);
  if ( (byte_1400CF981 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v11, v10, (__int64)v3, 6, v9, v9, 0);
}
