/*
 * XREFs of KxPlatformSwapStacksAndCall @ 0x140428610
 * Callers:
 *     KiPlatformSwapStacksAndCall @ 0x1404285F0 (KiPlatformSwapStacksAndCall.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __fastcall KxPlatformSwapStacksAndCall(__int64 a1, void (*a2)(void))
{
  a2();
  JUMPOUT(0x1404285FFLL);
}
