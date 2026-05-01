/*
 * XREFs of HamFreeBuffer_0 @ 0x180009A20
 * Callers:
 *     HamConnectToServerEx @ 0x180003150 (HamConnectToServerEx.c)
 *     sub_180008E08 @ 0x180008E08 (sub_180008E08.c)
 *     sub_180012A10 @ 0x180012A10 (sub_180012A10.c)
 *     sub_180014518 @ 0x180014518 (sub_180014518.c)
 *     HamCompleteActivityRestore @ 0x180014870 (HamCompleteActivityRestore.c)
 *     HamFreeBuffer @ 0x180014B20 (HamFreeBuffer.c)
 *     sub_18001599C @ 0x18001599C (sub_18001599C.c)
 *     DestroyActivityCoordinatorPolicy @ 0x180015F20 (DestroyActivityCoordinatorPolicy.c)
 *     UnsubscribeActivityCoordinatorPolicy_0 @ 0x1800162F4 (UnsubscribeActivityCoordinatorPolicy_0.c)
 *     RmDisconnectProcessManager @ 0x18001C400 (RmDisconnectProcessManager.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall HamFreeBuffer_0(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
