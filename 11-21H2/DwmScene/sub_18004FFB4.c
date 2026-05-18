/*
 * XREFs of sub_18004FFB4 @ 0x18004FFB4
 * Callers:
 *     sub_180014370 @ 0x180014370 (sub_180014370.c)
 *     sub_18009BCE8 @ 0x18009BCE8 (sub_18009BCE8.c)
 *     sub_18009BEB0 @ 0x18009BEB0 (sub_18009BEB0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18004FFB4(__int64 a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 124) )
    *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 120) = a2;
}
