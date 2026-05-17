/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x18010B8FC
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x18010B200 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800AEA74 (RtlpHeapTrkDereferenceStack.c)
 */

_QWORD *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 **v4; // r8
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 **v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *result; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[1] = v14;
  v2 = 0;
  v14[0] = v14;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180185950 + 8 * v3));
    v4 = (__int64 **)(16LL * v2 + qword_1801855D0);
    v5 = *v4;
    if ( *v4 != (__int64 *)v4 )
    {
      do
      {
        v6 = *v5;
        if ( v5[2] == a1 )
        {
          if ( *(__int64 **)(v6 + 8) != v5
            || (v7 = (__int64 **)v5[1], *v7 != v5)
            || (*v7 = (__int64 *)v6, *(_QWORD *)(v6 + 8) = v7, v8 = v14[0], *(_QWORD **)(v14[0] + 8LL) != v14) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v5 = v14[0];
          v5[1] = (__int64)v14;
          *(_QWORD *)(v8 + 8) = v5;
          v14[0] = v5;
        }
        v5 = (__int64 *)v6;
      }
      while ( (__int64 **)v6 != v4 );
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180185950 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v9 = v14[0];
    result = v14;
    if ( (_QWORD *)v14[0] == v14 )
      return result;
    v11 = *(_QWORD *)v14[0];
    if ( *(_QWORD *)(*(_QWORD *)v14[0] + 8LL) != v14[0] )
      goto LABEL_16;
    v12 = *(_QWORD **)(v14[0] + 8LL);
    if ( *v12 != v14[0] )
      goto LABEL_16;
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(_QWORD *)(v9 + 32);
    if ( v13 )
    {
      RtlpHeapTrkDereferenceStack(v13);
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    RtlFreeHeap(qword_180185970, 0, v9);
  }
}
