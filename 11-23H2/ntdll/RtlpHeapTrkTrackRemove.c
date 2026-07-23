/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x18010CC84
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18010C670 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800B0B44 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkHash @ 0x1800B0BDE (RtlpHeapTrkHash.c)
 */

void __fastcall RtlpHeapTrkTrackRemove(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD **v9; // rdi
  _QWORD *i; // rax
  PVOID **v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A20 + 8 * v7));
  v9 = (_QWORD **)(qword_1801886A0 + 16 * v8);
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v4 = i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v12 = *i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v13 = (_QWORD *)i[1], (_QWORD *)*v13 != i) )
        __fastfail(3u);
      *v13 = v12;
      v5 = 1;
      *(_QWORD *)(v12 + 8) = v13;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180188A20 + 8 * v7));
  if ( v5 )
  {
    v11 = (PVOID **)v4[4];
    if ( v11 )
    {
      RtlpHeapTrkDereferenceStack(v11);
      v4[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v4);
  }
}
