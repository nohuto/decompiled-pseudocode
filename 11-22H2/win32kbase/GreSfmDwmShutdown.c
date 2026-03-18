/*
 * XREFs of GreSfmDwmShutdown @ 0x1C00B5910
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C00B59C0 (-DeInitialize@SfmTokenArray@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSfmDwmShutdown(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v1 + 72));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v1 + 72), 7);
  SfmTokenArray::DeInitialize(*(SfmTokenArray **)(v1 + 6472));
  if ( qword_1C0294E38 && (int)qword_1C0294E38() >= 0 && qword_1C0294E40 )
    qword_1C0294E40();
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v1 + 72));
  v3 = *(struct _ERESOURCE **)(v1 + 72);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion();
  }
  return result;
}
