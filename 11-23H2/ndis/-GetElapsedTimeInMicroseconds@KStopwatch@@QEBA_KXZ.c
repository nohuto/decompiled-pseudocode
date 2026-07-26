/*
 * XREFs of ?GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ @ 0x1C00CFB60
 * Callers:
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF7E4 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1C00CF8F4 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KStopwatch::GetElapsedTimeInMicroseconds(KStopwatch *this)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 1);
  if ( v1 && (v2 = *((_QWORD *)this + 2), v2 >= *(_QWORD *)this) )
    return 1000000 * (v2 - *(_QWORD *)this) / v1;
  else
    return 0LL;
}
