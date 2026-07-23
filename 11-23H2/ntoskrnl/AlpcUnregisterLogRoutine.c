/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x14097A31C
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1407D56D4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // ebx
  __int64 (__fastcall **v1)(__int64, int); // rcx
  __int64 (__fastcall *v2)(__int64, int); // rax
  PVOID *v4; // rdx

  v0 = -1073741275;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpLogLock, 0LL);
  v1 = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
  if ( AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( v1[2] == EtwpTraceALPC )
        break;
      v1 = (__int64 (__fastcall **)(__int64, int))*v1;
      if ( (char *)v2 == (char *)&AlpcpLogCallbackListHead )
        goto LABEL_4;
    }
    if ( *((__int64 (__fastcall ***)(__int64, int))v2 + 1) != v1 || (v4 = (PVOID *)v1[1], *v4 != v1) )
      __fastfail(3u);
    *v4 = v2;
    *((_QWORD *)v2 + 1) = v4;
    ExFreePoolWithTag(v1, 0);
    v0 = 0;
  }
LABEL_4:
  AlpcpLogEnabled = AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v0;
}
