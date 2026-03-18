/*
 * XREFs of SepGetSystemSigningLevel @ 0x1406E9350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char SepGetSystemSigningLevel()
{
  char v0; // cl

  v0 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    return SeILSigningPolicyRuntime;
  return v0;
}
