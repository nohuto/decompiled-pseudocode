/*
 * XREFs of PsDereferenceImpersonationToken @ 0x1407BAE00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    ObfDereferenceObject(ImpersonationToken);
}
