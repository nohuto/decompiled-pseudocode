/*
 * XREFs of sub_140663448 @ 0x140663448
 * Callers:
 *     sub_1406647E0 @ 0x1406647E0 (sub_1406647E0.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140663448(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
