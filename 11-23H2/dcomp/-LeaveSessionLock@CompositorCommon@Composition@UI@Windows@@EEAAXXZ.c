/*
 * XREFs of ?LeaveSessionLock@CompositorCommon@Composition@UI@Windows@@EEAAXXZ @ 0x180079FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z @ 0x18007406C (-ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositorCommon::LeaveSessionLock(
        Windows::UI::Composition::CompositorCommon *this)
{
  int v1; // eax
  struct Microsoft::WRL2::ContextSession::DeferredOperation *v2; // rbx

  v1 = *((_DWORD *)this - 16) + *((_DWORD *)this - 17);
  if ( --*((_DWORD *)this - 18) != v1 )
    Microsoft::WRL2::FailFast::Unexpected("ContextSession end counts");
  v2 = (struct Microsoft::WRL2::ContextSession::DeferredOperation *)*((_QWORD *)this - 2);
  *((_QWORD *)this - 2) = 0LL;
  *((_QWORD *)this - 1) = 0LL;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this - 112));
  if ( v2 )
    Microsoft::WRL2::ContextSession::ProcessDeferredOperations_NoLock(v2);
}
