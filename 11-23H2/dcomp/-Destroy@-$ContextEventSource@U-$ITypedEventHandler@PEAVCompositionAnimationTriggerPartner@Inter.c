/*
 * XREFs of ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18013117C
 * Callers:
 *     ?Destroy@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180131240 (-Destroy@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?Destroy@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAXXZ @ 0x180186C30 (-Destroy@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@UEAAXXZ.c)
 * Callees:
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v2; // rbx
  PVOID Ptr; // rax
  __int64 *i; // rsi
  __int64 v7; // rdx
  volatile int *v8; // rdx
  __int64 v9; // rcx

  v2 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( a1->Ptr )
  {
    for ( i = (__int64 *)*((_QWORD *)Ptr + 2); i != *((__int64 **)Ptr + 3); ++i )
    {
      v7 = *i;
      *i = 0LL;
      Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(a2, v7);
      Ptr = a1->Ptr;
    }
    AcquireSRWLockExclusive(a1 + 1);
    v9 = (__int64)a1->Ptr;
    if ( a1->Ptr )
    {
      a1->Ptr = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v9, v8);
    }
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
