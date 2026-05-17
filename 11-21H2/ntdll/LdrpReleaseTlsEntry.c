/*
 * XREFs of LdrpReleaseTlsEntry @ 0x180084CD8
 * Callers:
 *     LdrpHandleTlsData @ 0x180033A94 (LdrpHandleTlsData.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLoadDependentModuleInternal @ 0x18003D8F0 (LdrpLoadDependentModuleInternal.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     LdrpFindTlsEntry @ 0x180042D54 (LdrpFindTlsEntry.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 *TlsEntry; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, 0LL, a3, a4);
  TlsEntry = (__int64 *)LdrpFindTlsEntry(a1);
  v7 = (__int64)TlsEntry;
  if ( TlsEntry )
  {
    v8 = *TlsEntry;
    if ( *(_QWORD *)(v8 + 8) != v7 || (v9 = *(_QWORD **)(v7 + 8), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    _bittestandreset((signed __int32 *)Src, *(_DWORD *)(v7 + 64));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v7 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v7;
  else
    RtlFreeHeap(LdrpTlsHeap, 0, v7);
  return 0LL;
}
