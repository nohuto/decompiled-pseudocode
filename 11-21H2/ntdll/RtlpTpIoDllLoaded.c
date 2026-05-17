/*
 * XREFs of RtlpTpIoDllLoaded @ 0x1800B1D36
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800B1E50 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlDelete @ 0x18006A780 (RtlDelete.c)
 *     TpDereferenceGlobalPool @ 0x180071288 (TpDereferenceGlobalPool.c)
 */

signed __int64 __fastcall RtlpTpIoDllLoaded(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 *v7; // r14
  __int64 *v8; // rdi
  unsigned __int64 v9; // rdx
  signed __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // [rsp+20h] [rbp-18h]

  v5 = 0LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
  v6 = (__int64 *)RtlpTpIoTree;
  while ( 1 )
  {
    v7 = v6;
    if ( !v6 )
      break;
    v8 = v6 - 12;
    v9 = *(v6 - 12);
    if ( v9 < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( v9 >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( v9 >= *(_QWORD *)(a1 + 24) )
        v6 = (__int64 *)v6[1];
      else
LABEL_7:
        v6 = (__int64 *)v6[2];
    }
    else
    {
      v6 = RtlDelete(v6);
      RtlpTpIoTree = (__int64)v6;
      *v7 = v5;
      v5 = (__int64)v8;
    }
  }
  result = RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v5 )
  {
    v14 = *(_QWORD *)(v5 + 96);
    TpDereferenceGlobalPool(*(_QWORD *)(v5 + 80), v11, v12, v13);
    RtlFreeUnicodeString((PUNICODE_STRING)(v5 + 128));
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    v5 = v14;
  }
  return result;
}
