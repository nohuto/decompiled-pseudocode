/*
 * XREFs of sub_1409536B0 @ 0x1409536B0
 * Callers:
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_140763500 @ 0x140763500 (sub_140763500.c)
 *     sub_1407645E0 @ 0x1407645E0 (sub_1407645E0.c)
 * Callees:
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409536B0(PVOID P)
{
  void *v2; // rcx
  char *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (char *)*((_QWORD *)P + 3);
  if ( v3 )
    sub_140779620(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
