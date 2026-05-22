/*
 * XREFs of ?StaticCallCommit_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z @ 0x18007C050
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z @ 0x18007406C (-ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::StaticCallCommit_NoLock(
        struct _RTL_CRITICAL_SECTION *a1)
{
  int DebugInfo; // ecx
  int *LockSemaphore; // rdi
  int v4; // eax
  int v5; // eax
  struct Microsoft::WRL2::ContextSession::DeferredOperation *OwningThread; // rdi
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( HIDWORD(a1[2].LockSemaphore) )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession RIP");
  EnterCriticalSection(a1 + 1);
  DebugInfo = (int)a1[2].DebugInfo;
  if ( DebugInfo != HIDWORD(a1[2].DebugInfo) + a1[2].LockCount )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession begin counts");
  LockSemaphore = (int *)a1->LockSemaphore;
  LODWORD(a1[2].DebugInfo) = DebugInfo + 1;
  if ( LockSemaphore[22] > 0 && !*((_BYTE *)LockSemaphore + 97) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  ++LockSemaphore[23];
  if ( a1[11].LockCount <= 0 && (a1[11].RecursionCount & 1) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD))(*(_QWORD *)a1[10].SpinCount + 48LL))(a1[10].SpinCount, 0LL);
    if ( v4 < 0 )
      Microsoft::WRL2::FailFast::ForHR(v4, retaddr);
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))a1->DebugInfo[2].ProcessLocksList.Flink)(a1);
  }
  --LockSemaphore[23];
  v5 = a1[2].LockCount + HIDWORD(a1[2].DebugInfo);
  if ( --LODWORD(a1[2].DebugInfo) != v5 )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession end counts");
  OwningThread = (struct Microsoft::WRL2::ContextSession::DeferredOperation *)a1[3].OwningThread;
  a1[3].OwningThread = 0LL;
  a1[3].LockSemaphore = 0LL;
  LeaveCriticalSection(a1 + 1);
  if ( OwningThread )
    Microsoft::WRL2::ContextSession::ProcessDeferredOperations_NoLock(OwningThread);
  return 0LL;
}
