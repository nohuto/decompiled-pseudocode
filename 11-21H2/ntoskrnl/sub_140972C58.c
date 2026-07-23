/*
 * XREFs of sub_140972C58 @ 0x140972C58
 * Callers:
 *     sub_140972E78 @ 0x140972E78 (sub_140972E78.c)
 *     sub_1409730F0 @ 0x1409730F0 (sub_1409730F0.c)
 *     sub_140973D6C @ 0x140973D6C (sub_140973D6C.c)
 *     sub_140973EA4 @ 0x140973EA4 (sub_140973EA4.c)
 *     sub_140977B70 @ 0x140977B70 (sub_140977B70.c)
 *     sub_140B2F2BC @ 0x140B2F2BC (sub_140B2F2BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140972C58(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= *(_DWORD *)(a2 + 24) )
  {
    if ( v2 > *(_DWORD *)(a2 + 24) )
      return 1LL;
    v3 = *(_DWORD *)(a1 + 28);
    if ( v3 >= *(_DWORD *)(a2 + 28) )
      return v3 > *(_DWORD *)(a2 + 28);
  }
  return 0xFFFFFFFFLL;
}
