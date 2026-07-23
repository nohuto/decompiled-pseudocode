/*
 * XREFs of sub_14028A78C @ 0x14028A78C
 * Callers:
 *     sub_14023F250 @ 0x14023F250 (sub_14023F250.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     sub_140388FC8 @ 0x140388FC8 (sub_140388FC8.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14028A78C(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
