/*
 * XREFs of ?StaticDisposeItemProc@CompositorCommon@Composition@UI@Windows@@KAJPEAXIIPEBX@Z @ 0x18008A430
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::StaticDisposeItemProc(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4)
{
  signed __int32 v5; // ebx

  if ( a1 != a4 )
  {
    v5 = _InterlockedIncrement(a4 + 4);
    Microsoft::WRL2::ContextRuntimeClass::Dispose((Microsoft::WRL2::ContextRuntimeClass *)a4);
    if ( v5 == 1 )
    {
      if ( _InterlockedExchangeAdd(a4 + 4, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)a4 + 64LL))(a4, 0LL);
    }
    else
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)a4);
    }
  }
  return 0LL;
}
