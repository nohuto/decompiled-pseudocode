/*
 * XREFs of PopPepDeviceWaitWake @ 0x14028CF84
 * Callers:
 *     PopRequestCompletion @ 0x14028E0C0 (PopRequestCompletion.c)
 *     PopRequestPowerIrp @ 0x14028F230 (PopRequestPowerIrp.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x14028D234 (PopPepUpdateConstraints.c)
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
