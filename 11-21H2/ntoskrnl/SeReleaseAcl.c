/*
 * XREFs of SeReleaseAcl @ 0x140663448
 * Callers:
 *     NtCreateTokenEx @ 0x1406647E0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
