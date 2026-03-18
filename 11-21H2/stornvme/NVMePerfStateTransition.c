/*
 * XREFs of NVMePerfStateTransition @ 0x1C0019B68
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C0009354 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C0019C58 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1680) & 2) != 0
      && *(_BYTE *)(a1 + 1687) != *(_BYTE *)(a1 + 1688)
      && !(unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL);
}
