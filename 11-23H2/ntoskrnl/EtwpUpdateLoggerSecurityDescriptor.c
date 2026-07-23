/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x1409EC5A4
 * Callers:
 *     EtwpUpdateTrace @ 0x1407F824C (EtwpUpdateTrace.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     ObDereferenceSecurityDescriptor @ 0x140728C50 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140728EC0 (ObLogSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E3E94 (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, __int16 *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v9, 0x10u);
  if ( v3 >= 0 )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 784), (v9 | 0xF) & -(__int64)(v9 != 0));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v8, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&EtwpSecurityLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObDereferenceSecurityDescriptor(v4 & 0xFFFFFFFFFFFFFFF0uLL, (v4 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v6, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
