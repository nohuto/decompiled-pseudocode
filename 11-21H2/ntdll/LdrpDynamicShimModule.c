/*
 * XREFs of LdrpDynamicShimModule @ 0x18004E0F4
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x18004DB8C (LdrpPrepareModuleForExecution.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x180072AA8 (LdrpSendShimEngineInitialNotifications.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800DCB54 (LdrpGetProcApphelpCheckModule.c)
 */

__int64 __fastcall LdrpDynamicShimModule(_QWORD *a1)
{
  int v1; // esi
  unsigned int v3; // ebx
  __int64 result; // rax
  int v5; // eax
  _WORD *i; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned int (__fastcall *v10)(_WORD *, _QWORD, __int64); // [rsp+68h] [rbp+10h] BYREF

  v1 = dword_180177640;
  v3 = 0;
  if ( dword_180177640 && g_pShimmedModuleList )
  {
    dword_180177640 = 0;
    v5 = LdrpGetProcApphelpCheckModule(&v10);
    v3 = v5;
    if ( v5 >= 0 )
    {
      for ( i = g_pShimmedModuleList; *i; i += v7 + 1 )
      {
        if ( !v10(i, 0LL, 1LL) )
        {
          v3 = -1073741502;
          goto LABEL_3;
        }
        v7 = -1LL;
        do
          ++v7;
        while ( i[v7] );
      }
      v8 = MEMORY[0x7FFE0330];
      v9 = __ROR8__(g_pfnSE_DllLoaded, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
      RtlEnterCriticalSection(&LdrpDllNotificationLock);
      if ( LdrInitState < 3 && (*(_DWORD *)(*a1 - 56LL) & 0x800) == 0 )
        LdrpSendShimEngineInitialNotifications(a1, v9 ^ v8);
      RtlLeaveCriticalSection(&LdrpDllNotificationLock);
    }
    else
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3623,
        (__int64)"LdrpDynamicShimModule",
        0,
        "Getting ApphelpCheckModule failed with status 0x%08lx\n",
        v5);
      v3 = 0;
    }
  }
LABEL_3:
  if ( g_pShimmedModuleList && v1 == 1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
    g_pShimmedModuleList = 0LL;
    g_pShimmedModuleListLength = 0LL;
  }
  result = v3;
  dword_180177640 = v1;
  return result;
}
