/*
 * XREFs of ?ProcessDeferredOperations_NoLock@ContextSession@WRL2@Microsoft@@CAXPEAUDeferredOperation@123@@Z @ 0x18007406C
 * Callers:
 *     ?OnFinalRelease_NoLock@ContextRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z @ 0x180029310 (-OnFinalRelease_NoLock@ContextRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z.c)
 *     ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z @ 0x180075590 (-CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z.c)
 *     ?LeaveSessionLock@CompositorCommon@Composition@UI@Windows@@EEAAXXZ @ 0x180079FD0 (-LeaveSessionLock@CompositorCommon@Composition@UI@Windows@@EEAAXXZ.c)
 *     ?StaticCallCommit_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z @ 0x18007C050 (-StaticCallCommit_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z.c)
 * Callees:
 *     ?ProcessDeferredOperations_NoLockSEH@ContextSession@WRL2@Microsoft@@CAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180029CD4 (-ProcessDeferredOperations_NoLockSEH@ContextSession@WRL2@Microsoft@@CAXPEAUIUnknown@@W4DeferredO.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL2::ContextSession::ProcessDeferredOperations_NoLock(
        struct Microsoft::WRL2::ContextSession::DeferredOperation *a1)
{
  struct Microsoft::WRL2::ContextSession::DeferredOperation *v1; // rdi
  struct Microsoft::WRL2::ContextSession::DeferredOperation *v2; // rbx
  __int64 v3; // rcx
  int v4; // edx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (struct Microsoft::WRL2::ContextSession::DeferredOperation *)*((_QWORD *)v1 + 2);
      v3 = *(_QWORD *)v1;
      v4 = *((_DWORD *)v1 + 2);
      *((_QWORD *)v1 + 2) = 0LL;
      *(_QWORD *)v1 = 0LL;
      Microsoft::WRL2::ContextSession::ProcessDeferredOperations_NoLockSEH(v3, v4);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v1);
      operator delete(v1, 0x18uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
