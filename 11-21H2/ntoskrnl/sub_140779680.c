/*
 * XREFs of sub_140779680 @ 0x140779680
 * Callers:
 *     sub_140699E6C @ 0x140699E6C (sub_140699E6C.c)
 *     sub_1407646C0 @ 0x1407646C0 (sub_1407646C0.c)
 *     sub_140778B24 @ 0x140778B24 (sub_140778B24.c)
 *     sub_140779620 @ 0x140779620 (sub_140779620.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140779680(__int64 a1, ULONG a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, a2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, a2);
}
