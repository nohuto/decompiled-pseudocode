/*
 * XREFs of ?Destroy@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ @ 0x18008B080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@IEAAKXZ @ 0x18003AB54 (-InternalRelease@-$ComPtr@VCSurfaceFactory@DirectComposition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?RemoveDeferredCallback@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAXXZ @ 0x18008B138 (-RemoveDeferredCallback@CompositionGraphicsDevice@Composition@UI@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionGraphicsDevice::Destroy(
        Windows::UI::Composition::CompositionGraphicsDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 *i; // rsi
  __int64 v6; // rdx
  volatile int *v7; // rdx
  __int64 v8; // rcx

  Windows::UI::Composition::CompositionGraphicsDevice::RemoveDeferredCallback(this);
  Microsoft::WRL::ComPtr<DirectComposition::CSurfaceFactory>::InternalRelease((DirectComposition::CSurfaceFactory **)this + 26);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)this + 27);
  v2 = *((_QWORD *)this + 28);
  if ( v2 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_QWORD *)this + 34) = *((_QWORD *)this + 33);
  v3 = *((_QWORD *)this + 3);
  AcquireSRWLockExclusive((PSRWLOCK)this + 31);
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    for ( i = *(__int64 **)(v4 + 16); i != *(__int64 **)(v4 + 24); ++i )
    {
      v6 = *i;
      *i = 0LL;
      Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v3, v6);
      v4 = *((_QWORD *)this + 29);
    }
    AcquireSRWLockExclusive((PSRWLOCK)this + 30);
    v8 = *((_QWORD *)this + 29);
    if ( v8 )
    {
      *((_QWORD *)this + 29) = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8, v7);
    }
    if ( this != (Windows::UI::Composition::CompositionGraphicsDevice *)-240LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 30);
  }
  if ( this != (Windows::UI::Composition::CompositionGraphicsDevice *)-248LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 31);
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
