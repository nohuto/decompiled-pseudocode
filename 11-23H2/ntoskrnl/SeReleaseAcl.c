/*
 * XREFs of SeReleaseAcl @ 0x1406BA35C
 * Callers:
 *     NtCreateTokenEx @ 0x1406BB560 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1407EF750 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
