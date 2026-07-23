/*
 * XREFs of sub_1405B2D80 @ 0x1405B2D80
 * Callers:
 *     sub_140583D88 @ 0x140583D88 (sub_140583D88.c)
 *     sub_1405B2D58 @ 0x1405B2D58 (sub_1405B2D58.c)
 * Callees:
 *     <none>
 */

int *__fastcall sub_1405B2D80(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    return &dword_140C53D80;
  else
    return 0LL;
}
