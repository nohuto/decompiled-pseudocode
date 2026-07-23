/*
 * XREFs of sub_1403A2630 @ 0x1403A2630
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A2E60 @ 0x1403A2E60 (sub_1403A2E60.c)
 */

__int64 __fastcall sub_1403A2630(__int64 a1)
{
  int v1; // eax
  _DWORD *v2; // rdx

  v1 = *(_DWORD *)(a1 + 120);
  v2 = *(_DWORD **)(a1 + 96);
  if ( v1 )
  {
    if ( v1 == 3 )
      *v2 = *(_DWORD *)(a1 + 104);
    else
      *(_WORD *)v2 = *(_WORD *)(a1 + 104);
  }
  else
  {
    *(_BYTE *)v2 = *(_BYTE *)(a1 + 104);
  }
  return sub_1403A2E60(a1, *(unsigned int *)(a1 + 108));
}
