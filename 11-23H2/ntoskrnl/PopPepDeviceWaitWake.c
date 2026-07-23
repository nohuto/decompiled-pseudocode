/*
 * XREFs of PopPepDeviceWaitWake @ 0x14028D214
 * Callers:
 *     PopRequestCompletion @ 0x14028E350 (PopRequestCompletion.c)
 *     PopRequestPowerIrp @ 0x14028F4C0 (PopRequestPowerIrp.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x14028D4C4 (PopPepUpdateConstraints.c)
 */

__int64 __fastcall PopPepDeviceWaitWake(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  else
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(a3) = a2;
    return PopPepUpdateConstraints(a1, 5LL, a3);
  }
  return result;
}
