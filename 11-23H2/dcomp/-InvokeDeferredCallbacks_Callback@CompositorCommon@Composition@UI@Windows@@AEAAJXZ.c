/*
 * XREFs of ?InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18002C0FC
 * Callers:
 *     ?Static_InvokeDeferredCallbacks_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z @ 0x18002C0A0 (-Static_InvokeDeferredCallbacks_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z.c)
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?DeliverCompletions_Callback@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x18002C28C (-DeliverCompletions_Callback@BatchController@Composition@UI@Windows@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ReferencePropertyChanged_Callback@ProxyObject@Composition@UI@Windows@@QEAAXI@Z @ 0x180094E30 (-ReferencePropertyChanged_Callback@ProxyObject@Composition@UI@Windows@@QEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::InvokeDeferredCallbacks_Callback(
        struct _RTL_CRITICAL_SECTION *this)
{
  int *LockSemaphore; // rbp
  HANDLE *p_LockSemaphore; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rdx
  struct _RTL_CRITICAL_SECTION_DEBUG *v5; // rcx
  ULONG_PTR v6; // rax
  ULONG_PTR SpinCount; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *OwningThread; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  int v10; // ecx
  __int64 v11; // r14
  LONG *p_LockCount; // rax
  HANDLE v13; // rdi
  __int64 v14; // rsi
  HANDLE v15; // r15
  char v17; // [rsp+20h] [rbp-38h] BYREF

  Microsoft::WRL2::ContextSession::BeginApiEntry(this);
  LockSemaphore = (int *)this->LockSemaphore;
  if ( LockSemaphore[22] > 0 && !*((_BYTE *)LockSemaphore + 97) )
    Microsoft::WRL2::FailFast::Unexpected(0LL);
  ++LockSemaphore[23];
  (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, _QWORD))(*(_QWORD *)this[11].DebugInfo + 48LL))(
    this[11].DebugInfo,
    0LL);
  Windows::UI::Composition::BatchController::DeliverCompletions_Callback((Windows::UI::Composition::BatchController *)&this[15].LockCount);
  if ( (this->SpinCount & 2) != 0 )
  {
    Windows::UI::Composition::BatchController::DeliverCompletions_Callback((Windows::UI::Composition::BatchController *)&this[17]);
    if ( (this->SpinCount & 2) != 0 )
      Windows::UI::Composition::BatchController::DeliverCompletions_Callback((Windows::UI::Composition::BatchController *)&this[18].SpinCount);
  }
  if ( (this->SpinCount & 2) != 0 )
  {
    p_LockSemaphore = &this[23].LockSemaphore;
    v4 = this + 23;
    if ( &this[23].LockSemaphore != (HANDLE *)&this[23] )
    {
      v5 = (struct _RTL_CRITICAL_SECTION_DEBUG *)*p_LockSemaphore;
      *p_LockSemaphore = v4->DebugInfo;
      v6 = *(_QWORD *)&this[23].LockCount;
      v4->DebugInfo = v5;
      SpinCount = this[23].SpinCount;
      this[23].SpinCount = v6;
      OwningThread = (struct _RTL_CRITICAL_SECTION_DEBUG *)this[23].OwningThread;
      *(_QWORD *)&this[23].LockCount = SpinCount;
      DebugInfo = this[24].DebugInfo;
      this[24].DebugInfo = OwningThread;
      this[23].OwningThread = DebugInfo;
    }
    while ( 1 )
    {
      v10 = this->SpinCount;
      if ( (v10 & 2) == 0 )
        break;
      if ( *p_LockSemaphore == (HANDLE)this[23].SpinCount )
      {
        if ( (v10 & 2) != 0 )
        {
          v11 = 0LL;
          p_LockCount = &this[24].LockCount;
          v13 = 0LL;
          v14 = 0LL;
          v15 = 0LL;
          if ( &v17 != (char *)&this[24].LockCount )
          {
            v11 = *(_QWORD *)p_LockCount;
            *(_QWORD *)p_LockCount = 0LL;
            v15 = this[24].OwningThread;
            this[24].OwningThread = 0LL;
            v13 = this[24].LockSemaphore;
            this[24].LockSemaphore = 0LL;
            v14 = v11;
          }
          while ( (HANDLE)v14 != v15 )
          {
            Windows::UI::Composition::ProxyObject::ReferencePropertyChanged_Callback(
              *(Windows::UI::Composition::ProxyObject **)v14,
              *(_DWORD *)(v14 + 8));
            if ( (this->SpinCount & 2) == 0 )
              break;
            v14 += 16LL;
          }
          if ( v11 )
            std::_Deallocate<16,0>(v11, ((unsigned __int64)v13 - v11) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        break;
      }
      this[23].SpinCount -= 8LL;
      (***(void (__fastcall ****)(_QWORD))this[23].SpinCount)(*(_QWORD *)this[23].SpinCount);
    }
  }
  --LockSemaphore[23];
  Microsoft::WRL2::ContextSession::EndApiEntry(this);
  return 0LL;
}
