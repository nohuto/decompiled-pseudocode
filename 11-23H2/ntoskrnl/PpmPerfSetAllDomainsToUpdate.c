/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14032B1B0
 * Callers:
 *     PpmCheckStart @ 0x14032C0C4 (PpmCheckStart.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6350 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x1409869D4 (PpmPerfReApplyStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmPerfSetAllDomainsToUpdate()
{
  __int64 result; // rax

  for ( result = PpmPerfDomainHead; (__int64 *)result != &PpmPerfDomainHead; result = *(_QWORD *)result )
    *(_BYTE *)(result + 1061) = 1;
  return result;
}
