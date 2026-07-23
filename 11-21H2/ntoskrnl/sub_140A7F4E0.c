/*
 * XREFs of sub_140A7F4E0 @ 0x140A7F4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7F710 @ 0x140A7F710 (sub_140A7F710.c)
 *     sub_140A7F7DA @ 0x140A7F7DA (sub_140A7F7DA.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 */

__int64 __fastcall sub_140A7F4E0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdx

  sub_140A985B4(*(_DWORD *)(a1 + 8) & 0xFFFFFFFC);
  LOBYTE(v2) = *(_BYTE *)(a1 + 16);
  v3 = sub_140A7F710(KeGetCurrentIrql(), v2);
  sub_14042A5E0(a1, v4);
  return sub_140A7F7DA(v3, 1LL);
}
