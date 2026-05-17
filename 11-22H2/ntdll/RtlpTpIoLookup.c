/*
 * XREFs of RtlpTpIoLookup @ 0x180126D5C
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180126920 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     TpBindFileToDirect @ 0x18004BDD4 (TpBindFileToDirect.c)
 *     RtlSplay @ 0x180062E70 (RtlSplay.c)
 *     RtlpTpIoAlloc @ 0x180126AAC (RtlpTpIoAlloc.c)
 */

__int64 __fastcall RtlpTpIoLookup(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
  v7 = RtlpTpIoTree;
  if ( RtlpTpIoTree )
  {
    while ( 1 )
    {
      v9 = v7 - 96;
      v13 = v7 - 96;
      if ( *(_QWORD *)(v7 - 96) == a2 )
        break;
      if ( *(_QWORD *)(v7 - 96) <= a2 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        if ( !v10 )
        {
          v8 = RtlpTpIoAlloc(&v13, a2, a3);
          v9 = v13;
          if ( !v13 )
            goto LABEL_14;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v7 + 16) = v13 + 96;
          goto LABEL_13;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 8);
        if ( !v10 )
        {
          v8 = RtlpTpIoAlloc(&v13, a2, a3);
          v9 = v13;
          if ( !v13 )
            goto LABEL_14;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v7 + 8) = v13 + 96;
LABEL_13:
          *v11 = v7;
          goto LABEL_14;
        }
      }
      v7 = v10;
    }
    v8 = TpBindFileToDirect(a3, v9 + 8, *(_PEB_LDR_DATA **)(v7 - 16), v6);
    if ( v8 >= 0 )
      ++*(_DWORD *)(v7 - 8);
  }
  else
  {
    v8 = RtlpTpIoAlloc(&v13, a2, a3);
    v9 = v13;
  }
LABEL_14:
  if ( v9 && RtlpTpIoTree != v9 + 96 )
    RtlpTpIoTree = (__int64)RtlSplay((_QWORD *)(v9 + 96));
  RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  *a1 = v9;
  return (unsigned int)v8;
}
