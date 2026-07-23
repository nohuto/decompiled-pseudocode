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

void __fastcall RtlpTpIoDllLoaded(__int64 a1)
{
  PRTL_SPLAY_LINKS v2; // rbx
  PRTL_SPLAY_LINKS v3; // rcx
  _QWORD *p_Parent; // r14
  PRTL_SPLAY_LINKS v5; // rdi
  unsigned __int64 Parent; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  _RTL_SPLAY_LINKS *v9; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v3 = RtlpTpIoTree;
  while ( 1 )
  {
    p_Parent = &v3->Parent;
    if ( !v3 )
      break;
    v5 = v3 - 4;
    Parent = (unsigned __int64)v3[-4].Parent;
    if ( Parent < *(_QWORD *)(a1 + 24) )
      goto LABEL_7;
    if ( Parent >= *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
    {
      if ( Parent >= *(_QWORD *)(a1 + 24) )
        v3 = v3->LeftChild;
      else
LABEL_7:
        v3 = v3->RightChild;
    }
    else
    {
      v3 = RtlDelete(v3);
      RtlpTpIoTree = v3;
      *p_Parent = v2;
      v2 = v5;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  while ( v2 )
  {
    v9 = v2[4].Parent;
    TpDereferenceGlobalPool(v2[3].LeftChild, v7, v8);
    RtlFreeUnicodeString((PUNICODE_STRING)&v2[5].LeftChild);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v2 = v9;
  }
}
