/*
 * XREFs of SmpInitCoreProcessArray @ 0x14000CBE0
 * Callers:
 *     SmpInitializeSessionManagement @ 0x14000CB80 (SmpInitializeSessionManagement.c)
 * Callees:
 *     <none>
 */

__int64 SmpInitCoreProcessArray()
{
  int v0; // esi
  SIZE_T v1; // rdi
  _OWORD *Heap; // rax
  _OWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF

  v0 = SmpNumberInitialSessions;
  memset(v4, 0, 24);
  v1 = 40LL * (unsigned int)SmpNumberInitialSessions;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, v1);
  SmpCoreProcessIds = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( v0 )
  {
    *Heap = 0xFFFFFFFFuLL;
    Heap[1] = v4[0];
    *((_QWORD *)Heap + 4) = *(_QWORD *)&v4[1];
    qmemcpy((char *)Heap + 40, Heap, 8 * ((v1 - 40) >> 3));
  }
  return 0LL;
}
