/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14032B440
 * Callers:
 *     PpmCheckStart @ 0x14032C354 (PpmCheckStart.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1407A6540 (PpmPerfUpdateDomainPolicy.c)
 *     PpmPerfReApplyStates @ 0x140986BD4 (PpmPerfReApplyStates.c)
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
