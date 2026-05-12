/*
 * XREFs of RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0042078
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000C8C8 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponentFromMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v5; // di
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v5 = RaidUnitPoFxActivateComponent(a1, a2, a3, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1744) + 40LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1744) + 152LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  v6 = *(_QWORD *)(v3 + 4832);
  if ( v6 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 80));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v3 + 4832) + 88LL));
  }
  return v5 == 0 ? 0xC100000C : 0;
}
