/*
 * XREFs of HamIpcChannelAllocateState @ 0x180005C80
 * Callers:
 *     HampConnectionAllocateState @ 0x1800047D0 (HampConnectionAllocateState.c)
 *     RmpClientConnectionAllocateState @ 0x18000A4D4 (RmpClientConnectionAllocateState.c)
 * Callees:
 *     RmpClientWnfCreateSubscription @ 0x180005CB0 (RmpClientWnfCreateSubscription.c)
 */

__int64 __fastcall HamIpcChannelAllocateState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = RmpClientWnfCreateSubscription(a2, HampIpcChannelWnfCallback, a1, a1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
