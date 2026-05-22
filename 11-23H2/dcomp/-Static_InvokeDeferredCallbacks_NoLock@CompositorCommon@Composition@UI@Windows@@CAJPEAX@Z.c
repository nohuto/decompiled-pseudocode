/*
 * XREFs of ?Static_InvokeDeferredCallbacks_NoLock@CompositorCommon@Composition@UI@Windows@@CAJPEAX@Z @ 0x18002C0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18002C0FC (-InvokeDeferredCallbacks_Callback@CompositorCommon@Composition@UI@Windows@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Static_InvokeDeferredCallbacks_NoLock(
        Windows::UI::Composition::CompositorCommon *this)
{
  __int64 v2; // rdx
  unsigned int v3; // edi

  if ( this && _InterlockedIncrement((volatile signed __int32 *)this + 4) == 1 )
    (*(void (__fastcall **)(Windows::UI::Composition::CompositorCommon *))(*(_QWORD *)this + 80LL))(this);
  v3 = Windows::UI::Composition::CompositorCommon::InvokeDeferredCallbacks_Callback(this);
  if ( this && _InterlockedExchangeAdd((volatile signed __int32 *)this + 4, 0xFFFFFFFF) == 1 )
  {
    LOBYTE(v2) = 1;
    (*(void (__fastcall **)(Windows::UI::Composition::CompositorCommon *, __int64))(*(_QWORD *)this + 64LL))(this, v2);
  }
  return v3;
}
