/*
 * XREFs of PsmHamTerminateHost @ 0x18006C8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsmHamTerminateHost(__int64 a1, unsigned int a2)
{
  return HamSrvTerminateHostForBi((char *)RmSvcGlobals + 2248, a1, a2);
}
