/*
 * XREFs of MiPageNotZero @ 0x14064DFFC
 * Callers:
 *     MiArePageContentsZero @ 0x14064D970 (MiArePageContentsZero.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1404249D0 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  __m128i *v3; // rbp
  int v4; // r8d
  ULONG_PTR v5; // r10
  unsigned int v6; // esi
  int v7; // r15d
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // rax
  ULONG v10; // r14d
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v12; // rbx

  v3 = (__m128i *)BugCheckParameter1;
  _InterlockedAdd(&dword_140C67F68, 1u);
  v4 = 0;
  v5 = BugCheckParameter1 + 4096;
  v6 = 0;
  v7 = 0;
  v8 = 4096LL;
  if ( BugCheckParameter1 < BugCheckParameter1 + 4096 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)BugCheckParameter1 )
      {
        v9 = BugCheckParameter1 - (_QWORD)v3;
        if ( v8 != 4096 )
          v9 = v8;
        ++v4;
        v8 = v9;
        if ( v4 != 1 )
          break;
        v6 = BugCheckParameter1 & 0xFFF;
        v7 = *(_DWORD *)BugCheckParameter1;
        if ( ((*(_DWORD *)BugCheckParameter1 - 1) & *(_DWORD *)BugCheckParameter1) != 0 )
          break;
      }
      BugCheckParameter1 += 4LL;
      if ( BugCheckParameter1 >= v5 )
      {
        if ( v4 != 1 )
          break;
        v10 = 299;
        v8 = 0LL;
        _InterlockedAdd(&dword_140C67F64, 1u);
        BugCheckParameter4 = 0LL;
        goto LABEL_11;
      }
    }
  }
  v10 = 295;
  BugCheckParameter4 = 4096LL;
LABEL_11:
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v10, (ULONG_PTR)v3, BugCheckParameter2, v8, BugCheckParameter4);
  v12 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v12 + 344), 0, 0);
  if ( (unsigned __int16 *)v12 != MiSystemPartition )
    KeSetEvent(qword_140C6B598, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_140C67EBC, 1, 0) )
  {
    stru_140C67ED0.List.Flink = 0LL;
    dword_140C67EC0 = v7;
    qword_140C67EC8 = v6 + (BugCheckParameter2 << 12);
    stru_140C67ED0.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_140C67ED0.Parameter = &dword_140C67EB8;
    dword_140C67EB8 = v10;
    ExQueueWorkItem(&stru_140C67ED0, DelayedWorkQueue);
  }
  return KeZeroPages(v3, 0x1000uLL);
}
