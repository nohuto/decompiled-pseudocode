/*
 * XREFs of sub_1406930B0 @ 0x1406930B0
 * Callers:
 *     sub_140692DB8 @ 0x140692DB8 (sub_140692DB8.c)
 *     sub_140692E2C @ 0x140692E2C (sub_140692E2C.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 */

void sub_1406930B0()
{
  ExReleasePushLockEx((ULONG_PTR)&qword_140C497D8, 0LL);
  KeLeaveCriticalRegion();
}
