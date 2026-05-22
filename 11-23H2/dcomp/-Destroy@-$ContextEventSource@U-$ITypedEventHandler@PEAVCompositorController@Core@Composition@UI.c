/*
 * XREFs of ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18000F23C
 * Callers:
 *     ?Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ @ 0x18000F1F0 (-Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ @ 0x1800804CC (-FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ.c)
 * Callees:
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v2; // rbx
  _QWORD *Ptr; // rax
  __int64 *i; // rsi
  __int64 v7; // rdx
  PVOID v8; // rcx

  v2 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( a1->Ptr )
  {
    for ( i = (__int64 *)Ptr[2]; i != (__int64 *)Ptr[3]; ++i )
    {
      v7 = *i;
      *i = 0LL;
      Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(a2, v7);
      Ptr = a1->Ptr;
    }
    AcquireSRWLockExclusive(a1 + 1);
    v8 = a1->Ptr;
    if ( a1->Ptr )
    {
      a1->Ptr = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
    }
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
