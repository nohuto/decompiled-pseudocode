/*
 * XREFs of PsDereferenceImpersonationToken @ 0x1406D1760
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    ObfDereferenceObject(ImpersonationToken);
}
