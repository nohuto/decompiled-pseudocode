/*
 * XREFs of sub_1405CD96C @ 0x1405CD96C
 * Callers:
 *     PoFxSetTargetDripsDevicePowerState @ 0x14098CEF0 (PoFxSetTargetDripsDevicePowerState.c)
 *     sub_14098D024 @ 0x14098D024 (sub_14098D024.c)
 *     sub_14098E120 @ 0x14098E120 (sub_14098E120.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1405CD96C(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 244), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 248), 0, 0);
  return result;
}
