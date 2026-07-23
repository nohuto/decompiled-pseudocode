/*
 * XREFs of sub_140AAED14 @ 0x140AAED14
 * Callers:
 *     sub_140AAECA0 @ 0x140AAECA0 (sub_140AAECA0.c)
 *     sub_140B565BC @ 0x140B565BC (sub_140B565BC.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 */

void __fastcall sub_140AAED14(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1403A8CB4(v2);
  sub_1403A8CB4(a1);
}
