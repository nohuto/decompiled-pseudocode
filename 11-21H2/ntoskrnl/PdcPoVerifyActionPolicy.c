/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x140996DC0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x140819A74 (PopVerifyPowerActionPolicy.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  PopAcquirePolicyLock((_DWORD)a1);
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock(v3, v2);
}
