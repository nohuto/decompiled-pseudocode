/*
 * XREFs of sub_140B19F5C @ 0x140B19F5C
 * Callers:
 *     sub_140B19880 @ 0x140B19880 (sub_140B19880.c)
 *     sub_140B199D0 @ 0x140B199D0 (sub_140B199D0.c)
 *     sub_140B19A20 @ 0x140B19A20 (sub_140B19A20.c)
 *     sub_140B19A70 @ 0x140B19A70 (sub_140B19A70.c)
 *     sub_140B19AC0 @ 0x140B19AC0 (sub_140B19AC0.c)
 *     sub_140B19B10 @ 0x140B19B10 (sub_140B19B10.c)
 *     sub_140B19B60 @ 0x140B19B60 (sub_140B19B60.c)
 *     sub_140B19BC0 @ 0x140B19BC0 (sub_140B19BC0.c)
 *     sub_140B19C20 @ 0x140B19C20 (sub_140B19C20.c)
 *     sub_140B19C80 @ 0x140B19C80 (sub_140B19C80.c)
 *     sub_140B19CE0 @ 0x140B19CE0 (sub_140B19CE0.c)
 *     sub_140B19DF0 @ 0x140B19DF0 (sub_140B19DF0.c)
 *     sub_140B19E40 @ 0x140B19E40 (sub_140B19E40.c)
 *     sub_140B19EB0 @ 0x140B19EB0 (sub_140B19EB0.c)
 *     sub_140B19F00 @ 0x140B19F00 (sub_140B19F00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140B19F5C(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
