/*
 * XREFs of ??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z @ 0x1C00CF554
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C00CDD60 (NdisAllocateSharedMemory.c)
 * Callees:
 *     <none>
 */

NdisAllocateSharedMemoryTelemetry *__fastcall NdisAllocateSharedMemoryTelemetry::NdisAllocateSharedMemoryTelemetry(
        NdisAllocateSharedMemoryTelemetry *this,
        __int64 a2,
        const struct _NDIS_SHARED_MEMORY_PARAMETERS *a3,
        int a4)
{
  bool v6; // al
  LARGE_INTEGER *v7; // rcx

  *(_WORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = a4;
  *((_DWORD *)this + 13) = 0;
  v6 = *(_BYTE *)this != 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  v7 = (LARGE_INTEGER *)((char *)this + 72);
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = v6;
  *((_QWORD *)this + 12) = 0LL;
  v7->QuadPart = 0LL;
  *((_BYTE *)this + 136) = *(_BYTE *)this;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 184) = *(_BYTE *)this;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 232) = *(_BYTE *)this;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 8) = a3->Length;
  if ( *(_BYTE *)this )
  {
    *((_QWORD *)this + 1) = MEMORY[0xFFFFF78000000014];
  }
  else if ( !*((_BYTE *)this + 1) )
  {
    return this;
  }
  if ( *((_BYTE *)this + 88) )
    *((LARGE_INTEGER *)this + 8) = KeQueryPerformanceCounter(v7);
  *((_DWORD *)this + 9) = a3->PreferredNode;
  *((_DWORD *)this + 10) = a3->QueueId;
  if ( a3->Header.Size >= 0x44u )
    *((_DWORD *)this + 11) = a3->VPortId;
  return this;
}
