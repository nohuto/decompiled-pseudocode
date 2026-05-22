/*
 * XREFs of ?Destroy@VisualCapture@Composition@UI@Windows@@UEAAXXZ @ 0x180154D60
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

void __fastcall Windows::UI::Composition::VisualCapture::Destroy(Microsoft::WRL2::NestableRuntimeClass **this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx

  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(this + 31);
  v2 = (__int64)this[3];
  v3 = (__int64)this[32];
  this[32] = 0LL;
  Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v2, v3);
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
