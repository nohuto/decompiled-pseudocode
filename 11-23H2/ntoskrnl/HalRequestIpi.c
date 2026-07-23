/*
 * XREFs of HalRequestIpi @ 0x14035C330
 * Callers:
 *     KiIpiSendRequest @ 0x1402540E0 (KiIpiSendRequest.c)
 *     PoIdle @ 0x1402C4DF0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     PoExecuteIdleCheck @ 0x1403CBC90 (PoExecuteIdleCheck.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
 *     PoInitiateProcessorWake @ 0x140584210 (PoInitiateProcessorWake.c)
 *     PpmUnlockProcessors @ 0x140586658 (PpmUnlockProcessors.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140254750 (HalRequestIpiSpecifyVector.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
