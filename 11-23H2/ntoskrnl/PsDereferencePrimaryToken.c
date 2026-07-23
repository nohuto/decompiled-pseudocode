/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406ECFF0
 * Callers:
 *     DifIoDeleteControllerWrapper @ 0x1405DF150 (DifIoDeleteControllerWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
