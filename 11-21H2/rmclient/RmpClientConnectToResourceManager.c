/*
 * XREFs of RmpClientConnectToResourceManager @ 0x18000A458
 * Callers:
 *     RmConnectToResourceManager @ 0x18000A400 (RmConnectToResourceManager.c)
 * Callees:
 *     RmpClientConnectionAllocateState @ 0x18000A4D4 (RmpClientConnectionAllocateState.c)
 *     RmpClientConnectionInitialize @ 0x18000A580 (RmpClientConnectionInitialize.c)
 *     RmpClientConnectionCleanup @ 0x18001BB1C (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmpClientConnectToResourceManager(__int64 a1, _QWORD *a2)
{
  PVOID Heap; // rax
  void *v5; // rbx
  int State; // edi

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x68uLL);
  v5 = Heap;
  if ( Heap )
  {
    RmpClientConnectionInitialize(Heap);
    State = RmpClientConnectionAllocateState(a1, v5);
    if ( State < 0 )
    {
      RmpClientConnectionCleanup(v5);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
