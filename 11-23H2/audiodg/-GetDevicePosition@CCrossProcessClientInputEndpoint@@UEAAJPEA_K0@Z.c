/*
 * XREFs of ?GetDevicePosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140096DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@Z @ 0x140095E2C (-PeekNextTimestampMessage@CCrossProcessBaseEndpoint@@IEAA_NPEAPEAUSharedMessageQueueItem@@PEA_N@.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x14009642C (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096940 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetDevicePosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  bool v11; // [rsp+68h] [rbp+10h] BYREF
  struct SharedMessageQueueItem *v12; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  if ( a2 )
  {
    v12 = 0LL;
    v11 = 0;
    if ( !CCrossProcessBaseEndpoint::PeekNextTimestampMessage(
            (CCrossProcessClientInputEndpoint *)((char *)this - 424),
            &v12,
            &v11) )
    {
      *a2 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 2, 0LL, 0LL);
      if ( a3 )
        *a3 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 5, 0LL, 0LL);
      if ( (byte_1400CF981 & 4) != 0 )
      {
        LOBYTE(v9) = 0;
        if ( a3 )
          v9 = *a3;
        McTemplateU0pqxxxx_EventWriteTransfer(*a2, v8, 0LL, 7, 0, *a2, 0, v9);
      }
    }
    *((_QWORD *)this - 29) = *a2;
  }
  else
  {
    v4 = -2147467261;
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetDevicePosition", 440, 2147500035LL, a4);
  }
  return v4;
}
