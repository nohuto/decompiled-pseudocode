/*
 * XREFs of LdrpLoadContextReplaceModule @ 0x180053F88
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadKnownDll @ 0x18004D3FC (LdrpLoadKnownDll.c)
 *     LdrpMapDllFullPath @ 0x18005133C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x1800569C0 (LdrpMapDllRetry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpDependencyExist @ 0x1800541D0 (LdrpDependencyExist.c)
 *     LdrpQueueWork @ 0x1800559C0 (LdrpQueueWork.c)
 */

void __fastcall LdrpLoadContextReplaceModule(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // eax
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // r9
  _QWORD **v14; // rcx
  _QWORD *i; // rdx
  _QWORD **v16; // rax
  int v17; // eax
  _QWORD *v19; // rcx

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 != -1 )
    *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(v4 + 24) = 0;
  v7 = *(_QWORD ***)(v4 + 48);
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      *(_QWORD *)(v4 + 48) = 0LL;
    else
      *v7 = (_QWORD *)*v8;
    LdrpDereferenceModule((char *)a2);
    v9 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v9, v5) )
    {
      v14 = *(_QWORD ***)(v9 + 40);
      for ( i = *v14; i != v12; i = (_QWORD *)*i )
        v14 = (_QWORD **)i;
      *v14 = (_QWORD *)*v12;
      if ( *(_QWORD **)(v9 + 40) == v12 )
      {
        v16 = 0LL;
        if ( v14 != v12 )
          v16 = v14;
        *(_QWORD *)(v9 + 40) = v16;
      }
      v17 = *(_DWORD *)(v5 + 24);
      if ( v17 != -1 )
        *(_DWORD *)(v5 + 24) = v17 - 1;
      RtlFreeHeap(LdrpHeap, 0, v12);
      v12 = 0LL;
    }
    else
    {
      v12[1] = v5;
      v19 = *(_QWORD **)(v5 + 48);
      if ( v19 )
      {
        *v8 = *v19;
        *v19 = v8;
      }
      else
      {
        *v8 = v8;
      }
      *(_QWORD *)(v5 + 48) = v8;
    }
    if ( v10 && (*(int *)(v5 + 56) >= 2 || !v12) && (*(_DWORD *)(v10 + 108))-- == 1 )
    {
      *(_DWORD *)(v9 + 56) = 4;
      LdrpQueueWork(v10, v11, v12, v13);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
