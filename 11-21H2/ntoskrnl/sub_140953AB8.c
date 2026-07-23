/*
 * XREFs of sub_140953AB8 @ 0x140953AB8
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140661C4C @ 0x140661C4C (sub_140661C4C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_14095341C @ 0x14095341C (sub_14095341C.c)
 *     sub_1409539A8 @ 0x1409539A8 (sub_1409539A8.c)
 * Callees:
 *     sub_140661CD8 @ 0x140661CD8 (sub_140661CD8.c)
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140953AB8(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rdx

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x57706E50u);
    *(_QWORD *)P = 0LL;
  }
  sub_140661CD8((__int64)P + 8);
  v3 = (void *)*((_QWORD *)P + 7);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x57706E50u);
    *((_QWORD *)P + 7) = 0LL;
  }
  v4 = (char *)*((_QWORD *)P + 9);
  if ( v4 )
    sub_140779620(*((_DWORD *)P + 20), v4, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
