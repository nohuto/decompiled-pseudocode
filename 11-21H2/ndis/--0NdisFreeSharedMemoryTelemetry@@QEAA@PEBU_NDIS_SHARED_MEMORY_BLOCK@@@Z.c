/*
 * XREFs of ??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z @ 0x1C00CA9B0
 * Callers:
 *     NdisFreeSharedMemory @ 0x1C00C9480 (NdisFreeSharedMemory.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0024D50 (_tlgKeywordOn.c)
 */

NdisFreeSharedMemoryTelemetry *__fastcall NdisFreeSharedMemoryTelemetry::NdisFreeSharedMemoryTelemetry(
        NdisFreeSharedMemoryTelemetry *this,
        const struct _NDIS_SHARED_MEMORY_BLOCK *a2)
{
  bool v4; // zf
  char v5; // al
  unsigned int Flags; // eax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx

  if ( (a2->Flags & 0x10) == 0
    || (unsigned int)dword_1C00EB5C8 <= 4
    || (v4 = tlgKeywordOn((__int64)&dword_1C00EB5C8, 2112LL) == 0, v5 = 1, v4) )
  {
    v5 = 0;
  }
  *(_BYTE *)this = v5;
  Flags = a2->Flags;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 1) = (Flags & 0x30) == 16;
  *((_OWORD *)this + 1) = 0LL;
  LOBYTE(Flags) = *(_BYTE *)this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 80) = Flags;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 128) = *(_BYTE *)this;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 176) = *(_BYTE *)this;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 8) = a2->SharedMemoryParameters.Length;
  if ( *(_BYTE *)this )
  {
    *((_QWORD *)this + 1) = MEMORY[0xFFFFF78000000014];
    if ( *((_BYTE *)this + 80) )
      *((LARGE_INTEGER *)this + 7) = KeQueryPerformanceCounter((PLARGE_INTEGER)this + 8);
    *((_DWORD *)this + 9) = a2->SharedMemoryParameters.PreferredNode;
    *((_DWORD *)this + 10) = a2->SharedMemoryParameters.QueueId;
    if ( a2->SharedMemoryParameters.Header.Size >= 0x44u )
      *((_DWORD *)this + 11) = a2->SharedMemoryParameters.VPortId;
    if ( (a2->Flags & 0x10) != 0 )
      Miniport = (_NDIS_MINIPORT_BLOCK *)*((_QWORD *)a2->ProviderAllocationContext + 1);
    else
      Miniport = a2->Miniport;
    if ( Miniport )
      *((_OWORD *)this + 1) = Miniport->InterfaceGuid;
  }
  return this;
}
