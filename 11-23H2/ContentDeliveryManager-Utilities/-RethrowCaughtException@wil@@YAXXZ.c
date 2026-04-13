/*
 * XREFs of ?RethrowCaughtException@wil@@YAXXZ @ 0x18003F174
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x180031820 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::RethrowCaughtException(wil *this)
{
  if ( wil::details::g_pfnRethrow )
    wil::details::g_pfnRethrow();
}
