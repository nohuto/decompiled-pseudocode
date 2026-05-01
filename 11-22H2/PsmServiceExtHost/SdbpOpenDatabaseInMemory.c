/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x1800909A0
 * Callers:
 *     SdbpOpenCompressedDatabase @ 0x18009731C (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     SdbpReadMappedData @ 0x180090A98 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x180090B24 (SdbpValidateAndApplyCompatFlags.c)
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 */

void *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2)
{
  _QWORD *Heap; // rax
  void *v5; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA80uLL);
  v5 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1949, (unsigned int)"Failed to allocate DB structure");
    return 0LL;
  }
  *((_DWORD *)Heap + 4) = 0;
  *((_DWORD *)Heap + 6) |= 1u;
  *Heap = 0LL;
  Heap[1] = a1;
  *((_DWORD *)Heap + 5) = a2;
  if ( !(unsigned int)SdbpReadMappedData(Heap, 0LL, v7, 12LL) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenDatabaseInMemory", 1960, (unsigned int)"Can't read database header");
LABEL_7:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    return 0LL;
  }
  if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v5, v7) )
    goto LABEL_7;
  return v5;
}
