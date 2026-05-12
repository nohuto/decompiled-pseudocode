/*
 * XREFs of StorEnableAdapterHealthEvents @ 0x1C0067450
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0039A7C (RaidAdapterStartMiniport.c)
 *     StorEtwEnableCallback @ 0x1C0067570 (StorEtwEnableCallback.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00075D8 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x1C00196B0 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall StorEnableAdapterHealthEvents(__int64 a1)
{
  char v2; // bl
  __int64 result; // rax

  v2 = StorMiniportHealthEventsEnabled;
  if ( !a1 )
    return 3221225485LL;
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 20) )
    return 3221225659LL;
  if ( ((*(_BYTE *)(a1 + 110) & 0x10) != 0) == v2 )
    return 0LL;
  result = RaCallMiniportAdapterControl(a1 + 336);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 110) ^= (*(_BYTE *)(a1 + 110) ^ (16 * v2)) & 0x10;
  return result;
}
