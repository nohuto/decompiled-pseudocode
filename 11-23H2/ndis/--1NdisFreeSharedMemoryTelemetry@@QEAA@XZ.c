/*
 * XREFs of ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF8F4
 * Callers:
 *     NdisFreeSharedMemory @ 0x1C00CE150 (NdisFreeSharedMemory.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0023248 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     ?AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CF9C0 (-AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ?GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ @ 0x1C00CFB60 (-GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ.c)
 *     ?WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1C00CFB90 (-WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ndisDmaTelemetryBucketizeTimeInUs @ 0x1C00CFCF0 (ndisDmaTelemetryBucketizeTimeInUs.c)
 */

void __fastcall NdisFreeSharedMemoryTelemetry::~NdisFreeSharedMemoryTelemetry(LARGE_INTEGER *this)
{
  LARGE_INTEGER v1; // rsi

  v1.QuadPart = 0LL;
  if ( this[12].LowPart == 1 && BYTE1(this->LowPart) )
  {
    _InterlockedIncrement64(&qword_1C00F7998);
    _InterlockedExchangeAdd64(&qword_1C00F79A0, this[4].LowPart);
  }
  if ( LOBYTE(this->LowPart) )
  {
    this[6].LowPart = 1;
    if ( LOBYTE(this[10].LowPart) )
    {
      KStopwatch::Stop(this + 7);
      this[11].QuadPart = KStopwatch::GetElapsedTimeInMicroseconds((KStopwatch *)&this[7]);
    }
    this[24].LowPart = this[24].LowPart & 0xFFFFFFC0 | this[6].LowPart & 3 | (4
                                                                            * (this[12].LowPart & 3 | (4 * (this[18].LowPart & 3))));
    if ( LOBYTE(this[10].LowPart) )
      v1 = this[11];
    BYTE3(this[24].QuadPart) = ((__int64 (__fastcall *)(_QWORD))ndisDmaTelemetryBucketizeTimeInUs)((LARGE_INTEGER)v1.QuadPart);
    NdisFreeSharedMemoryTelemetry::AggregateEvent((NdisFreeSharedMemoryTelemetry *)this);
    NdisFreeSharedMemoryTelemetry::WriteEvent((NdisFreeSharedMemoryTelemetry *)this);
  }
}
