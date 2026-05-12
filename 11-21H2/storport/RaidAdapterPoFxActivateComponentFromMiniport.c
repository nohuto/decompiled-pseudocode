/*
 * XREFs of RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0024DC8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxActivateComponentFromMiniport(__int64 a1)
{
  char v2; // al

  v2 = RaidAdapterPoFxActivateComponent(a1);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4832) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4832) + 88LL));
  return v2 == 0 ? 0xC100000C : 0;
}
