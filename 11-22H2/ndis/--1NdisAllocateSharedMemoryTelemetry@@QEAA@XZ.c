/*
 * XREFs of ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7C4
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00CDD40 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C00230B8 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     ??$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CE8CC (--$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CEAB0 (--$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF22C (--$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF3B0 (--$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ?GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ @ 0x1C00CFB40 (-GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ.c)
 *     ndisDmaTelemetryBucketizeTimeInUs @ 0x1C00CFCD0 (ndisDmaTelemetryBucketizeTimeInUs.c)
 */

void __fastcall NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry(LARGE_INTEGER *this)
{
  unsigned __int64 LowPart; // rax
  bool v3; // zf
  LARGE_INTEGER v4; // rcx
  char v5; // al

  if ( this[25].LowPart )
  {
    _InterlockedIncrement64(&qword_1C00F7980);
    LowPart = this[4].LowPart;
    if ( this[25].LowPart == 1 )
      _InterlockedExchangeAdd64(&qword_1C00F7988, LowPart);
    else
      _InterlockedExchangeAdd64(&qword_1C00F7990, LowPart);
  }
  if ( LOBYTE(this->LowPart) || BYTE1(this->LowPart) )
  {
    v3 = LOBYTE(this[11].LowPart) == 0;
    this[7].LowPart = (this[6].LowPart != 0) + 1;
    if ( !v3 )
    {
      KStopwatch::Stop(this + 8);
      this[12].QuadPart = KStopwatch::GetElapsedTimeInMicroseconds((KStopwatch *)&this[8]);
    }
    this[6].HighPart = this[7].LowPart & 3 | this[6].HighPart & 0xFFFFFF00 | (4
                                                                            * (this[13].LowPart & 3 | (4 * (this[19].LowPart & 3 | (4 * (this[25].LowPart & 3))))));
    if ( LOBYTE(this[11].LowPart) )
      v4 = this[12];
    else
      v4.QuadPart = 0LL;
    v5 = ((__int64 (__fastcall *)(_QWORD))ndisDmaTelemetryBucketizeTimeInUs)((LARGE_INTEGER)v4.QuadPart);
    v3 = LOBYTE(this->LowPart) == 0;
    HIBYTE(this[6].QuadPart) = v5;
    if ( !v3 )
    {
      if ( (this[6].HighPart & 3) == 2 )
        NdisAllocateSharedMemoryTelemetry::AggregateEvent<2>((__int64)this);
      else
        NdisAllocateSharedMemoryTelemetry::AggregateEvent<4>((__int64)this);
      if ( (this[6].HighPart & 3) == 2 )
        NdisAllocateSharedMemoryTelemetry::WriteEvent<2>((__int64)this);
      else
        NdisAllocateSharedMemoryTelemetry::WriteEvent<4>((__int64)this);
    }
  }
}
