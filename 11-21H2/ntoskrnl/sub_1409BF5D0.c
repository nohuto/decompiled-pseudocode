/*
 * XREFs of sub_1409BF5D0 @ 0x1409BF5D0
 * Callers:
 *     sub_1409BF208 @ 0x1409BF208 (sub_1409BF208.c)
 *     sub_1409BF530 @ 0x1409BF530 (sub_1409BF530.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409BF5D0(__int64 a1)
{
  int v1; // edx
  char result; // al

  v1 = *(_DWORD *)(a1 + 28);
  result = 1;
  if ( ((v1 & 1) == 0 || !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 12))
    && ((v1 & 2) == 0 || !*(_BYTE *)(a1 + 16) && !*(_DWORD *)(a1 + 20)) )
  {
    return 0;
  }
  return result;
}
