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

PVOID *__fastcall RtlpHeapTrkTrackRemoveHeap(PVOID a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  PVOID **v4; // r8
  PVOID *v5; // rax
  PVOID **v6; // rcx
  PVOID *v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // rbx
  PVOID *result; // rax
  _QWORD *v11; // rcx
  PVOID *v12; // rax
  PVOID **v13; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185950 + 8 * v3));
    v4 = (PVOID **)(16LL * v2 + qword_1801855D0);
    v5 = *v4;
    if ( *v4 != (PVOID *)v4 )
    {
      do
      {
        v6 = (PVOID **)*v5;
        if ( v5[2] == a1 )
        {
          if ( v6[1] != v5
            || (v7 = (PVOID *)v5[1], *v7 != v5)
            || (*v7 = v6, v6[1] = v7, v8 = BaseAddress[0], *((PVOID **)BaseAddress[0] + 1) != BaseAddress) )
          {
LABEL_16:
            __fastfail(3u);
          }
          *v5 = BaseAddress[0];
          v5[1] = BaseAddress;
          v8[1] = v5;
          BaseAddress[0] = v5;
        }
        v5 = (PVOID *)v6;
      }
      while ( v6 != v4 );
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180185950 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v9 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      return result;
    v11 = *(_QWORD **)BaseAddress[0];
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0] )
      goto LABEL_16;
    v12 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1);
    if ( *v12 != BaseAddress[0] )
      goto LABEL_16;
    *v12 = v11;
    v11[1] = v12;
    v13 = (PVOID **)v9[4];
    if ( v13 )
    {
      RtlpHeapTrkDereferenceStack(v13);
      v9[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v9);
  }
}
