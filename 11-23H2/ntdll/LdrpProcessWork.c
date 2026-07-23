/*
 * XREFs of LdrpProcessWork @ 0x1800112B8
 * Callers:
 *     LdrpWorkCallback @ 0x180011180 (LdrpWorkCallback.c)
 *     LdrpLoadDependentModuleInternal @ 0x1800251E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLoadDllInternal @ 0x180028CA4 (LdrpLoadDllInternal.c)
 *     LdrpDrainWorkQueue @ 0x18002A48C (LdrpDrainWorkQueue.c)
 * Callees:
 *     LdrpReportError @ 0x18000C07C (LdrpReportError.c)
 *     LdrpMapDllSearchPath @ 0x180010E68 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011480 (LdrpMapDllFullPath.c)
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlLeaveCriticalSection @ 0x180027020 (RtlLeaveCriticalSection.c)
 *     LdrpMapDllRetry @ 0x18007330C (LdrpMapDllRetry.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180081474 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081FDC (LdrpLogLoadFailureEtwEvent.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 */

void __fastcall LdrpProcessWork(__int64 a1, char a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  char v7; // bl
  int v8; // [rsp+20h] [rbp-28h]

  if ( **(int **)(a1 + 40) < 0 )
    goto LABEL_16;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 152LL) + 56LL) )
  {
    v4 = LdrpSnapModule(a1);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 32) & 0x100000) != 0 )
    {
      v5 = LdrpMapDllRetry(a1);
    }
    else if ( (*(_DWORD *)(a1 + 32) & 0x200) != 0 )
    {
      v5 = LdrpMapDllFullPath(a1);
    }
    else
    {
      v5 = LdrpMapDllSearchPath(a1);
    }
    v4 = v5;
    if ( v5 >= 0 || v5 == -1073741267 )
      goto LABEL_16;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      2002,
      (unsigned int)"LdrpProcessWork",
      0,
      "Unable to load DLL: \"%wZ\", Parent Module: \"%wZ\", Status: 0x%x\n",
      a1,
      (*(_QWORD *)(a1 + 48) + 72LL) & (unsigned __int64)((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
      v5);
    if ( v4 == -1073741515 )
    {
      LdrpLogError(3221225781LL, 25LL, 0LL, a1);
      LdrpLogDeprecatedDllEtwEvent(a1);
      LOBYTE(v8) = 0;
      LdrpLogLoadFailureEtwEvent(
        a1,
        (*(_QWORD *)(a1 + 48) + 72LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 48) >> 64),
        3221225781LL,
        &LoadFailure,
        v8);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 104LL) & 0x20) != 0 )
        LdrpReportError((_UNICODE_STRING *)a1, 0LL, -1073741515);
    }
  }
  if ( v4 < 0 )
    **(_DWORD **)(a1 + 40) = v4;
LABEL_16:
  if ( !a2 )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v6 = --LdrpWorkInProgress;
    if ( (__int64 *)LdrpWorkQueue != &LdrpWorkQueue || (v7 = 1, v6 != 1) )
      v7 = 0;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v7 )
      ZwSetEvent(LdrpWorkCompleteEvent, 0LL);
  }
}
