/*
 * XREFs of sub_14090AB10 @ 0x14090AB10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405275C0 @ 0x1405275C0 (sub_1405275C0.c)
 */

__int64 __fastcall sub_14090AB10(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( *(_DWORD *)(a1 + 8) != 2 )
    return 3221225711LL;
  if ( byte_140C4BCBC )
    return sub_1405275C0(*(_DWORD *)(a1 + 48), *(_BYTE *)(a1 + 52), a3);
  return 3221225474LL;
}
