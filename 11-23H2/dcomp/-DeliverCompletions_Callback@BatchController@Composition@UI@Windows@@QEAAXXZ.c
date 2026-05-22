/*
 * XREFs of ?DeliverCompletions_Callback@BatchController@Composition@UI@Windows@@QEAAXXZ @ 0x18002C28C
 * Callers:
 *     ?InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18002C0FC (-InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ @ 0x18002C400 (-FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::BatchController::DeliverCompletions_Callback(
        Windows::UI::Composition::BatchController *this,
        __int64 a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rcx

  while ( 1 )
  {
    v3 = *((_QWORD *)this + 7);
    if ( !v3 )
      break;
    v4 = *(volatile signed __int32 **)(v3 + 192);
    if ( v4 && _InterlockedIncrement(v4 + 4) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 80LL))(v4);
    v5 = (volatile signed __int32 *)*((_QWORD *)this + 7);
    if ( v5 && _InterlockedIncrement(v5 + 4) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 80LL))(v5);
    v6 = (volatile signed __int32 *)*((_QWORD *)v5 + 23);
    if ( v6 )
    {
      *((_QWORD *)v5 + 23) = 0LL;
      if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(a2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 64LL))(v6, a2);
      }
    }
    v7 = (volatile signed __int32 *)*((_QWORD *)v5 + 24);
    if ( v7 )
    {
      *((_QWORD *)v5 + 24) = 0LL;
      if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(a2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2);
      }
    }
    if ( *((volatile signed __int32 **)this + 7) != v4 )
    {
      if ( v4 && _InterlockedIncrement(v4 + 4) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 80LL))(v4);
      v8 = (volatile signed __int32 *)*((_QWORD *)this + 7);
      *((_QWORD *)this + 7) = v4;
      if ( v8 && _InterlockedExchangeAdd(v8 + 4, 0xFFFFFFFF) == 1 )
      {
        LOBYTE(a2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 64LL))(v8, a2);
      }
    }
    Windows::UI::Composition::CompositionBatch::FireCompletion_Callback((Windows::UI::Composition::CompositionBatch *)v5);
    if ( v5 && !_InterlockedDecrement(v5 + 4) )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 64LL))(v5, a2);
    }
    if ( v4 )
    {
      if ( !_InterlockedDecrement(v4 + 4) )
      {
        LOBYTE(a2) = 1;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 64LL))(v4, a2);
      }
    }
  }
}
