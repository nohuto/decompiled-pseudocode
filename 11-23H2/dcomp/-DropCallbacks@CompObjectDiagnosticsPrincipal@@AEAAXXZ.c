/*
 * XREFs of ?DropCallbacks@CompObjectDiagnosticsPrincipal@@AEAAXXZ @ 0x18019D674
 * Callers:
 *     ??1CompObjectDiagnosticsPrincipal@@EEAA@XZ @ 0x18019C7F0 (--1CompObjectDiagnosticsPrincipal@@EEAA@XZ.c)
 *     ?ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019D780 (-ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Compositio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::DropCallbacks(CompObjectDiagnosticsPrincipal *this)
{
  __int64 *v1; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx

  v1 = (__int64 *)((char *)this + 88);
  v3 = *(_DWORD *)(*((_QWORD *)this + 9) + 56LL);
  if ( v3 == GetCurrentThreadId() )
  {
    v4 = *((_QWORD *)this + 9);
    v5 = *v1;
    *v1 = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v4, v5);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(v1);
  }
}
