/*
 * XREFs of sub_140528E00 @ 0x140528E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051AC78 @ 0x14051AC78 (sub_14051AC78.c)
 *     sub_140529408 @ 0x140529408 (sub_140529408.c)
 */

__int64 __fastcall sub_140528E00(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // r9
  ULONG_PTR v5; // r10

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == 1 )
    return 0LL;
  if ( v2 )
    return 3221225711LL;
  if ( (unsigned __int8)sub_140529408(a2) )
    return sub_14051AC78(
             v5,
             v4 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(v4 + 44) >> 12),
             (unsigned __int64)*(unsigned int *)(v4 + 40) >> 12);
  return 3221225712LL;
}
