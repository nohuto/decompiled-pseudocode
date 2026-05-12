/*
 * XREFs of StorEnableAdapterOperationalEvents @ 0x1C005A53C
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 *     StorEtwEnableCallback @ 0x1C005A5CC (StorEtwEnableCallback.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000C724 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C000C76C (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall StorEnableAdapterOperationalEvents(__int64 a1)
{
  char v2; // bl
  __int64 result; // rax

  v2 = StorMiniportOperationalEventsEnabled;
  if ( !a1 )
    return 3221225485LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 20) )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 110) & 8) != 0) == v2 )
    return 0LL;
  result = RaCallMiniportAdapterControl(a1 + 336);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (8 * v2)) & 8;
  return result;
}
