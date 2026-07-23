/*
 * XREFs of PoDeleteThermalRequest @ 0x14098B2F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(CMSPAddress *P)
{
  sub_14098B5B8(P);
  sub_14036B090(*((_QWORD **)P + 3));
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
