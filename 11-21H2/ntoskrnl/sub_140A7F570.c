/*
 * XREFs of sub_140A7F570 @ 0x140A7F570
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 */

__int64 __fastcall sub_140A7F570(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rbx
  __int64 v5; // rdx

  v2 = a2;
  v4 = sub_140A7F710(KeGetCurrentIrql(), a2);
  sub_140A985B4(a1);
  LOBYTE(v5) = v2;
  sub_14042A5E0(a1, v5);
  return sub_140A7F7DA(v4, 1LL);
}
