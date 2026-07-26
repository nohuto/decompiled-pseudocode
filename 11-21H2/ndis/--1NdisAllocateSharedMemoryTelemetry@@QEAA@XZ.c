/*
 * XREFs of ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CAB10
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00C9070 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0024CF0 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     ??$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00C9C20 (--$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00C9E04 (--$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CA580 (--$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CA704 (--$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ?GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ @ 0x1C00CAE8C (-GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ.c)
 *     ndisDmaTelemetryBucketizeTimeInUs @ 0x1C00CB01C (ndisDmaTelemetryBucketizeTimeInUs.c)
 */

void __fastcall NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry(LARGE_INTEGER *this)
{
  unsigned __int64 LowPart; // rax
  int v3; // edx
  bool v4; // zf
  LARGE_INTEGER v5; // rcx
  char v6; // al

  if ( this[25].LowPart )
  {
    _InterlockedIncrement64(&qword_1C00EE8B0);
    LowPart = this[4].LowPart;
    if ( this[25].LowPart == 1 )
      _InterlockedExchangeAdd64(&qword_1C00EE8B8, LowPart);
    else
      _InterlockedExchangeAdd64(&qword_1C00EE8C0, LowPart);
  }
  if ( LOBYTE(this->LowPart) || BYTE1(this->LowPart) )
  {
    v3 = (this[6].LowPart != 0) + 1;
    v4 = LOBYTE(this[11].LowPart) == 0;
    this[7].LowPart = v3;
    if ( !v4 )
    {
      KStopwatch::Stop(this + 8);
      this[12].QuadPart = KStopwatch::GetElapsedTimeInMicroseconds((KStopwatch *)&this[8]);
      v3 = this[7].LowPart;
    }
    this[6].HighPart = this[6].HighPart & 0xFFFFFF00 | v3 & 3 | (4
                                                               * (this[13].LowPart & 3 | (4
                                                                                        * ((4 * (this[25].LowPart & 3)) | this[19].LowPart & 3))));
    if ( LOBYTE(this[11].LowPart) )
      v5 = this[12];
    else
      v5.QuadPart = 0LL;
    v6 = ((__int64 (__fastcall *)(_QWORD))ndisDmaTelemetryBucketizeTimeInUs)((LARGE_INTEGER)v5.QuadPart);
    v4 = LOBYTE(this->LowPart) == 0;
    HIBYTE(this[6].QuadPart) = v6;
    if ( !v4 )
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
