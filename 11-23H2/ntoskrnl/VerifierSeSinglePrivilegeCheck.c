/*
 * XREFs of VerifierSeSinglePrivilegeCheck @ 0x140AD0350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierSeSinglePrivilegeCheck()
{
  return ((__int64 (*)(void))pXdvSeSinglePrivilegeCheck)();
}
