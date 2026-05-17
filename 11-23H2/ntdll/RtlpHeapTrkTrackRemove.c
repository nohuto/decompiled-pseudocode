/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x18010CCB4
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18010C6A0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800B0B44 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkHash @ 0x1800B0BDE (RtlpHeapTrkHash.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackRemove(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD **v9; // rdi
  _QWORD *i; // rax
  signed __int64 result; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180188A20 + 8 * v7));
  v9 = (_QWORD **)(qword_1801886A0 + 16 * v8);
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v4 = (__int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v13 = (_QWORD *)*i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v14 = (_QWORD *)i[1], (_QWORD *)*v14 != i) )
        __fastfail(3u);
      *v14 = v13;
      v5 = 1;
      v13[1] = v14;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180188A20 + 8 * v7));
  if ( v5 )
  {
    v12 = *(_QWORD *)(v4 + 32);
    if ( v12 )
    {
      RtlpHeapTrkDereferenceStack(v12);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_180188A40, 0, v4);
  }
  return result;
}
