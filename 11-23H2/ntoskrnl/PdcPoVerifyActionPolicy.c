/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x140997BD0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x140824778 (PopVerifyPowerActionPolicy.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquirePolicyLock((_DWORD)a1);
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock(v3, v2, v4);
}
