/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x1C00106EC
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000FCE4 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000FE54 (NVMePowerInitialize.c)
 *     NVMeValidatePowerStates @ 0x1C0010C98 (NVMeValidatePowerStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerStateGetMaxPower(unsigned __int16 *a1)
{
  if ( a1 )
    return *a1 * ((*((_BYTE *)a1 + 3) & 1) != 0 ? 100 : 10000);
  else
    return 0xFFFFFFFFLL;
}
