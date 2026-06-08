/*
 * XREFs of PepIdlePreselect @ 0x1C000A3A0
 * Callers:
 *     <none>
 * Callees:
 *     SelectPreferredIdleState @ 0x1C000946C (SelectPreferredIdleState.c)
 */

__int64 __fastcall PepIdlePreselect(__int64 a1, __int64 a2)
{
  SelectPreferredIdleState(a1, a2);
  if ( *(_DWORD *)(a1 + 16) + 1 == *(unsigned __int8 *)(a1 + 20) )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(a1 + 12);
}
