/*
 * XREFs of sub_1406930D4 @ 0x1406930D4
 * Callers:
 *     sub_1406902B4 @ 0x1406902B4 (sub_1406902B4.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     sub_1407FC920 @ 0x1407FC920 (sub_1407FC920.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void sub_1406930D4()
{
  ExReleasePushLockEx((ULONG_PTR)&qword_140C497E0, 0LL);
  KeLeaveCriticalRegion();
}
