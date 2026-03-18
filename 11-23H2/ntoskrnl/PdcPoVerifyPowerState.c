/*
 * XREFs of PdcPoVerifyPowerState @ 0x140823420
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifySystemPowerState @ 0x1408248AC (PopVerifySystemPowerState.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  PopAcquirePolicyLock(a1);
  PopVerifySystemPowerState(a1, a2);
  return PopReleasePolicyLock(v5, v4, v6);
}
