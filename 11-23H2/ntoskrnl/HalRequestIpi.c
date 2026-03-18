/*
 * XREFs of HalRequestIpi @ 0x14035C190
 * Callers:
 *     KiIpiSendRequest @ 0x140254020 (KiIpiSendRequest.c)
 *     PoIdle @ 0x1402C4B60 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x1403CBAB0 (PoExecuteIdleCheck.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FF6C (KiHaltOnAddressWakeEntireList.c)
 *     PoInitiateProcessorWake @ 0x140583D20 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140586168 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140254690 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 __fastcall HalRequestIpi(int a1, __int64 a2)
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = a1;
  result = HalRequestIpiSpecifyVector(a1, a2, 0xE1u);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  return result;
}
