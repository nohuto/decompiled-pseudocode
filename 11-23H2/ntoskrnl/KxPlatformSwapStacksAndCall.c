/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x140428280
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x140428260 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, void (*a2)(void))
{
  a2();
  JUMPOUT(0x14042826FLL);
}
