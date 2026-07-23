/*
 * XREFs of sub_140A7F480 @ 0x140A7F480
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 */

__int64 __fastcall sub_140A7F480(char a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  LOBYTE(a2) = a1;
  v2 = sub_140A7F710(KeGetCurrentIrql(), a2);
  LOBYTE(v4) = v3;
  sub_14042A5E0(v4, v3);
  return sub_140A7F7DA(v2, 1LL);
}
