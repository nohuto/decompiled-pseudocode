/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406DADF0
 * Callers:
 *     sub_14060E6A0 @ 0x14060E6A0 (sub_14060E6A0.c)
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_140965C1C @ 0x140965C1C (sub_140965C1C.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  ObfDereferenceObject(PrimaryToken);
}
