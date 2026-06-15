/*
 * XREFs of ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x1400970F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x1400951F8 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x1400964E8 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096940 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessClientInputEndpoint::GetPosition(
        CCrossProcessClientInputEndpoint *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  int v7; // ebx
  signed __int64 v8; // rdx
  char v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  v7 = 0;
  if ( a2 )
  {
    *a2 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 43) + 16LL), 0LL, 0LL);
    if ( a3 )
    {
      *a3 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 43) + 56LL), 0LL, 0LL);
      if ( *((_BYTE *)this - 16) )
      {
        if ( (unsigned int)ConvertHostPerfCounterToPerfCounter(a3) )
          *((_BYTE *)this - 16) = 0;
      }
    }
    *((_QWORD *)this - 29) = *a2;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( (byte_1400CF981 & 4) != 0 )
  {
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 43) + 24LL), 0LL, 0LL);
    v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this - 43) + 16LL), 0LL, 0LL);
    v10 = 0LL;
    if ( a3 )
      v10 = *a3;
    LOBYTE(v11) = 0;
    if ( a2 )
      v11 = *a2;
    McTemplateU0pqxxxxffff_EventWriteTransfer(v10, v8, 0LL, 6, v11, v10, v9, v8, 0, 0, 0, 0);
  }
  if ( v7 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientInputEndpoint::GetPosition", 368, (unsigned int)v7, a4);
  return (unsigned int)v7;
}
