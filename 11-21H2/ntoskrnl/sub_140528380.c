/*
 * XREFs of sub_140528380 @ 0x140528380
 * Callers:
 *     <none>
 * Callees:
 *     sub_140527584 @ 0x140527584 (sub_140527584.c)
 */

__int64 __fastcall sub_140528380(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !byte_140C4BCBC )
    return 3221225474LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 52);
  return sub_140527584(*(_DWORD *)(a1 + 48), a2);
}
