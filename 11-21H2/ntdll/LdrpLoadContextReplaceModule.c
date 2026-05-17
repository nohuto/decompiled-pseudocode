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

signed __int64 __fastcall LdrpLoadContextReplaceModule(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r8
  __int64 v9; // rdi
  int v10; // eax
  _QWORD **v11; // rcx
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // r9
  _QWORD **v18; // rcx
  _QWORD *i; // rdx
  _QWORD **v20; // rax
  int v21; // eax
  _QWORD *v24; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
  *(_QWORD *)(a1 + 56) = a2;
  v9 = *(_QWORD *)(a2 + 152);
  v10 = *(_DWORD *)(v9 + 24);
  if ( v10 != -1 )
    *(_DWORD *)(v9 + 24) = v10 + 1;
  *(_DWORD *)(v8 + 24) = 0;
  v11 = *(_QWORD ***)(v8 + 48);
  if ( v11 )
  {
    v12 = *v11;
    if ( *v11 == v11 )
      *(_QWORD *)(v8 + 48) = 0LL;
    else
      *v11 = (_QWORD *)*v12;
    LdrpDereferenceModule(a2, v6, v8, v7);
    v13 = v12[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
    if ( (unsigned __int8)LdrpDependencyExist(v13, v9) )
    {
      v18 = *(_QWORD ***)(v13 + 40);
      for ( i = *v18; i != v16; i = (_QWORD *)*i )
        v18 = (_QWORD **)i;
      *v18 = (_QWORD *)*v16;
      if ( *(_QWORD **)(v13 + 40) == v16 )
      {
        v20 = 0LL;
        if ( v18 != v16 )
          v20 = v18;
        *(_QWORD *)(v13 + 40) = v20;
      }
      v21 = *(_DWORD *)(v9 + 24);
      if ( v21 != -1 )
        *(_DWORD *)(v9 + 24) = v21 - 1;
      RtlFreeHeap(LdrpHeap, 0, (__int64)v16);
      v16 = 0LL;
    }
    else
    {
      v16[1] = v9;
      v24 = *(_QWORD **)(v9 + 48);
      if ( v24 )
      {
        *v12 = *v24;
        *v24 = v12;
      }
      else
      {
        *v12 = v12;
      }
      *(_QWORD *)(v9 + 48) = v12;
    }
    if ( v14 && (*(int *)(v9 + 56) >= 2 || !v16) && (*(_DWORD *)(v14 + 108))-- == 1 )
    {
      *(_DWORD *)(v13 + 56) = 4;
      LdrpQueueWork(v14, v15, v16, v17);
    }
  }
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
