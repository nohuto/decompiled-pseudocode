/*
 * XREFs of sub_18004F498 @ 0x18004F498
 * Callers:
 *     sub_180014370 @ 0x180014370 (sub_180014370.c)
 *     sub_18009BCE8 @ 0x18009BCE8 (sub_18009BCE8.c)
 *     sub_18009BEB0 @ 0x18009BEB0 (sub_18009BEB0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18004F498(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 116) )
    *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
}
