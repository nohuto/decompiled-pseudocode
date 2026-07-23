/*
 * XREFs of sub_14090AA70 @ 0x14090AA70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140527480 @ 0x140527480 (sub_140527480.c)
 */

__int64 __fastcall sub_14090AA70(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( !byte_140C4BCBC )
    return 3221225474LL;
  if ( byte_140C4BCBD )
    return sub_140527480(*(_DWORD *)(a1 + 48), *(_BYTE *)(a1 + 52), a3, a2);
  return 3221225659LL;
}
