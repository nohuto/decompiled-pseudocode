/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406ECFC0
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x1405DEBE0 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
