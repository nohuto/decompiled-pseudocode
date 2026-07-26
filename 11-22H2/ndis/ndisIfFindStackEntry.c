/*
 * XREFs of ndisIfFindStackEntry @ 0x1C0019430
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C0019250 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1C00B7440 (NdisIfDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall ndisIfFindStackEntry(int a1, int a2)
{
  PVOID *v2; // rax
  __int64 v3; // r8

  v2 = (PVOID *)P;
  v3 = 0LL;
  while ( v2 != &P )
  {
    if ( *((_DWORD *)v2 + 4) == a1 && *((_DWORD *)v2 + 5) == a2 )
      return v2;
    v2 = (PVOID *)*v2;
  }
  return (PVOID *)v3;
}
