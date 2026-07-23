/*
 * XREFs of sub_1405ADB14 @ 0x1405ADB14
 * Callers:
 *     sub_1405AD468 @ 0x1405AD468 (sub_1405AD468.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 */

__int64 __fastcall sub_1405ADB14(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  __m128i *v3; // rsi
  int v4; // r8d
  ULONG_PTR v5; // r10
  unsigned int v6; // ebp
  int v7; // r15d
  ULONG_PTR v8; // r9
  ULONG_PTR v9; // rax
  ULONG v10; // r14d
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v12; // rbx

  v3 = (__m128i *)BugCheckParameter1;
  _InterlockedAdd(&dword_140C52AE8, 1u);
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
        _InterlockedAdd(&dword_140C52AE4, 1u);
        BugCheckParameter4 = 0LL;
        goto LABEL_11;
      }
    }
  }
  v10 = 295;
  BugCheckParameter4 = 4096LL;
LABEL_11:
  if ( (dword_140D052EC & 1) != 0 )
    KeBugCheckEx(v10, (ULONG_PTR)v3, BugCheckParameter2, v8, BugCheckParameter4);
  v12 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  KeSetEvent(*(PRKEVENT *)(v12 + 320), 0, 0);
  if ( (ULONG_PTR *)v12 != &StartContext )
    KeSetEvent(qword_140C550C0, 0, 0);
  if ( (dword_140D06880 & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_140C52A3C, 1, 0) )
  {
    stru_140C52A50.List.Flink = 0LL;
    dword_140C52A40 = v7;
    qword_140C52A48 = v6 + (BugCheckParameter2 << 12);
    stru_140C52A50.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14097E5C0;
    stru_140C52A50.Parameter = &dword_140C52A38;
    dword_140C52A38 = v10;
    ExQueueWorkItem(&stru_140C52A50, DelayedWorkQueue);
  }
  return sub_140424F50(v3, 0x1000uLL);
}
