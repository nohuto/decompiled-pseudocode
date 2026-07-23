/*
 * XREFs of CmpWaitOnHiveWriteQueue @ 0x140860718
 * Callers:
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x1408274A4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140A0D8F0 (NtCompressKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402FD500 (KeAbPreWait.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpWaitOnHiveWriteQueue(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  REGHANDLE v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rbx
  ULONG_PTR v11; // rax
  REGHANDLE v12; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-20h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-18h] BYREF

  memset(&Event, 0, sizeof(Event));
  v15 = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v16 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &Event;
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v5, v4, v6, v7);
  v8 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_START_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v8, &EventDescriptor, 0LL, 0, 0LL);
  v9 = (__int64 *)KeAbPreAcquire(a2, 0LL);
  v10 = (__int64)v9;
  if ( v9 )
    KeAbPreWait(v9);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v10 )
  {
    v11 = KeAbPreAcquire(a2, v10);
    KeAbPostReleaseEx(a2, v11);
  }
  v12 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_FLUSH_FINISH_WAIT_FOR_ACTIVE;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
    EtwWrite(v12, &EventDescriptor, 0LL, 0, 0LL);
  return (unsigned int)v15;
}
