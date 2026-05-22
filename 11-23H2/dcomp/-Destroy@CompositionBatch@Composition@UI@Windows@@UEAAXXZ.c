/*
 * XREFs of ?Destroy@CompositionBatch@Composition@UI@Windows@@UEAAXXZ @ 0x180029D80
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007F5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall Windows::UI::Composition::CompositionBatch::Destroy(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rbp
  RTL_SRWLOCK *v2; // rdi
  _QWORD *v4; // rax
  __int64 *i; // rsi
  __int64 v6; // rdx
  PVOID v7; // rcx

  Ptr = this[3].Ptr;
  v2 = this + 21;
  AcquireSRWLockExclusive(this + 21);
  v4 = this[19].Ptr;
  if ( v4 )
  {
    for ( i = (__int64 *)v4[2]; i != (__int64 *)v4[3]; ++i )
    {
      v6 = *i;
      *i = 0LL;
      Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(Ptr, v6);
      v4 = this[19].Ptr;
    }
    AcquireSRWLockExclusive(this + 20);
    v7 = this[19].Ptr;
    if ( v7 )
    {
      this[19].Ptr = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
    }
    if ( this != (RTL_SRWLOCK *)-160LL )
      ReleaseSRWLockExclusive(this + 20);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Windows::UI::Composition::CompositionObject::Destroy((Windows::UI::Composition::CompositionObject *)this);
}
