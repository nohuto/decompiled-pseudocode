/*
 * XREFs of PdcPoVerifyPowerState @ 0x140823720
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifySystemPowerState @ 0x140824BAC (PopVerifySystemPowerState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(__int64 a1, unsigned int a2)
{
  PopAcquirePolicyLock(a1);
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock();
}
