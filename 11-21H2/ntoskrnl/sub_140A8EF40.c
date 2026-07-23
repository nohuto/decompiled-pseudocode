/*
 * XREFs of sub_140A8EF40 @ 0x140A8EF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 */

void __fastcall sub_140A8EF40(__int64 a1, char a2)
{
  char *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = sub_140A7F710(KeGetCurrentIrql(), a2);
  sub_14042A5E0(v4, v3);
  sub_140A7F7DA((__int64)v2, 1u);
}
