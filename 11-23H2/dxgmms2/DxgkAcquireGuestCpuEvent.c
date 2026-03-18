/*
 * XREFs of DxgkAcquireGuestCpuEvent @ 0x1C002CEA0
 * Callers:
 *     VidSchCreateSyncObject @ 0x1C008CCC0 (VidSchCreateSyncObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A870 (_guard_dispatch_icall_nop.c)
 */

__int64 DxgkAcquireGuestCpuEvent()
{
  return ((__int64 (*)(void))DxgCoreInterface[91])();
}
